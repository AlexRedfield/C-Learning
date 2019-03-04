#ifndef Plane_hpp
#define Plane_hpp

#include "Vehicle.hpp"

//������
class Plane:public Vehicle{
private:
	int engines;

public:
	Plane(string, int, int);
	void setEngines(int);
	int getEngines() const;

	virtual void print() const override;
	virtual void details() const override;	 //��д����ʱdetails�Ѳ��Ǵ��麯��

};

#endif /* Plane_hpp */