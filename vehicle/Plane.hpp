#ifndef Plane_hpp
#define Plane_hpp

#include "Vehicle.hpp"

//具体类
class Plane:public Vehicle{
private:
	int engines;

public:
	Plane(string, int, int);
	void setEngines(int);
	int getEngines() const;

	virtual void print() const override;
	virtual void details() const override;	 //重写，此时details已不是纯虚函数

};

#endif /* Plane_hpp */