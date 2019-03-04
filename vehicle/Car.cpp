#include "Car.hpp"

Car::Car(string b, int ts, int s) :Vehicle(b, ts){
	setSeats(s);
}

void Car::setSeats(int s) {
	if (s > 0) seats = s;
	else throw invalid_argument("seats must > 0");
}

int Car::getSeats() const {
	return seats;
}

void Car::print() const {
	Vehicle::print();	//先调用抽象基类Vehicle中的print函数
	cout << "Seats:" << seats << endl;
}

void Car::details() const {
	cout << "The first car in the world was invented by Karl Friedrich Ben in 1885.\n\n";
}