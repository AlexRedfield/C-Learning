#ifndef Car_hpp
#define Car_hpp

#include "Vehicle.hpp"

//具体类
class Car :public Vehicle {
private:
	int seats;

public:
	Car(string, int, int);
	void setSeats(int);
	int getSeats() const;

	virtual void print() const override;    //重写
	virtual void details() const override;  //重写，此时details已不是纯虚函数
};



#endif // !Car_hpp
