#ifndef Car_hpp
#define Car_hpp

#include "Vehicle.hpp"

//������
class Car :public Vehicle {
private:
	int seats;

public:
	Car(string, int, int);
	void setSeats(int);
	int getSeats() const;

	virtual void print() const override;    //��д
	virtual void details() const override;  //��д����ʱdetails�Ѳ��Ǵ��麯��
};



#endif // !Car_hpp
