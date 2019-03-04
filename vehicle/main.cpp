#include "Car.hpp"
#include "Plane.hpp"
#include <iostream>
using namespace std;

//多态性实例
int main() {

	Car car("BMW", 200, 5);
	Plane plane("A320", 923, 2);

	Vehicle * ptr = nullptr;  //Vehicle是一个抽象基类，但它能声明由该基类派生出的具体类的指针或引用

	/********** print虚函数的测试 *************/
	ptr = &car;              //把(抽象)基类指针指向派生类的对象
	ptr->Vehicle::print();   //通过作用域分辨符调用基类的print函数
	cout << endl;
	ptr->print();            //执行时动态绑定到派生类的print函数

	ptr = &plane;            //把(抽象)基类指针指向派生类的对象
	ptr->Vehicle::print();   //通过作用域分辨符调用基类的print函数
	cout << endl;
	ptr->print();            //执行时动态绑定到派生类的print函数
	/****************************************/

	/********** detail纯虚函数测试 ************/
	cout << endl;
	ptr = &car;
	ptr->details();
	ptr = &plane;
	ptr->details();  //想用ptr去调用getEngines函数是不可行的
	/****************************************/
	//int a;
	Car *ptr1 = &car;
	int a=ptr1->getSeats();
	cout << a;

	system("pause");
	return 0;
}

/*
C++ 支持多态性。所谓多态性是指由于继承而关联在一起的不同的类的对象，对于相同的成员函数调用作出不同反应的一种能力。多态使我们能“通用化编程”，而不是“特殊化编程”。
多态性是通过virtual 函数和动态绑定实现的，关于这一点，有两种绑定方式要加以区分：

通过基类指针或引用调用虚函数的，在执行时进行动态绑定（迟绑定）。
通过对象名称调用虚函数的，在编译时进行静态绑定。
抽象基类是不能实例化任何对象的，但可以用来声明由该基类派生出的具体类的指针或者引用。

基类的指针可以指向派生类对象，但派生类指针不能指向基类对象。
同时，基类指针只能调用派生类中的virtual函数（继承自基类），调用其他派生类成员函数是不可行的。
*/