#ifndef MYARRAY_HPP
#define MYARRAT_HPP
#include<iostream>
using namespace std;
class MyArray {
	friend istream & operator >>(istream &, MyArray &);
	friend ostream & operator <<(ostream &, const MyArray &);

private:
	int rows;
	int columns;
	int * ptr;		//通过一维指针存储自定义二维数组的所有元素（需申请存储空间）

public:
	MyArray(int, int);
	MyArray(const MyArray &);	//拷贝构造函数
	~MyArray();

	int &operator()(int = 0, int = 0)const;	//只能通过成员函数重载()
};


#endif // !MYARRAY_HPP
