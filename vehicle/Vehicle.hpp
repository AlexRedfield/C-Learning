#ifndef Vehicle_hpp
#define Vehicle_hpp

#include <string>
#include <iostream>
#include <stdexcept>
using namespace std;

//抽象类,因为有一个纯虚函数details
class Vehicle {

private:
	string brand;
	int topSpeed;

public:
	Vehicle(string, int);

	void setBrand(string);
	string getBrand() const;		//该函数为只读函数，不能修改其中数据成员的值

	void setTopSpeed(int);
	int getTopSpeed() const;

	virtual void print() const;        //声明虚函数，仍需在Vehicle类中实现
	virtual void details() const = 0;  //声明纯虚函数，无需实现
};

#endif /* Vehicle_hpp */