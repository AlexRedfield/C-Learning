#ifndef Vehicle_hpp
#define Vehicle_hpp

#include <string>
#include <iostream>
#include <stdexcept>
using namespace std;

//������,��Ϊ��һ�����麯��details
class Vehicle {

private:
	string brand;
	int topSpeed;

public:
	Vehicle(string, int);

	void setBrand(string);
	string getBrand() const;		//�ú���Ϊֻ�������������޸��������ݳ�Ա��ֵ

	void setTopSpeed(int);
	int getTopSpeed() const;

	virtual void print() const;        //�����麯����������Vehicle����ʵ��
	virtual void details() const = 0;  //�������麯��������ʵ��
};

#endif /* Vehicle_hpp */