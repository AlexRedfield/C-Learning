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
	int * ptr;		//ͨ��һάָ��洢�Զ����ά���������Ԫ�أ�������洢�ռ䣩

public:
	MyArray(int, int);
	MyArray(const MyArray &);	//�������캯��
	~MyArray();

	int &operator()(int = 0, int = 0)const;	//ֻ��ͨ����Ա��������()
};


#endif // !MYARRAY_HPP
