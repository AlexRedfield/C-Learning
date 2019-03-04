#include"MyArray.hpp"
#include<iostream>
#include<iomanip>
using namespace std;

template<class T>
void InsertSort(T vi[],int n)
{
	for (int i = 1; i < n; i++)
	{
		T temp = vi[i];
		int j;
		for (j = i - 1; j >= 0 && temp < vi[j]; j--)
		{
			vi[j + 1] = vi[j];     //将较大元素后移
		}

		vi[j + 1] = temp;        //temp插入正确的位置
	}
}

int main() {
	int a[10] = { 5,4,2,8,6,1,4,7,6,9 };
	double b[10] = { 5.0,4.5,2.6,8.1,6.5,20,4.2,7.5,6.7,9 };
	InsertSort(b, 10);

	for (int i = 0; i < 10; i++)
		cout <<setprecision(2)<< b[i] << " ";
	cout << endl;

	double* pvalue = NULL; // 初始化为 null 的指针
	pvalue = new double;   // 为变量请求内存

	*pvalue = 29494.99;     // 在分配的地址存储值
	cout << "Value of pvalue : " << *pvalue << endl;

	delete pvalue;         // 释放内存

	MyArray array(3, 2);
	cin >> array;
	cout << "\na:\n" << array;

	MyArray chess(array);
	cout << "\nchess:\n" << chess;
	return 0;
}