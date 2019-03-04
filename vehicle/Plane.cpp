#include "Plane.hpp"

Plane::Plane(string b, int ts, int e)
	:Vehicle(b, ts) {
	setEngines(e);
}

void Plane::setEngines(int e) {
	if (e > 0) engines = e;
	else throw invalid_argument("engines must > 0");
}

int Plane::getEngines() const{
	return engines;
}

void Plane::print() const {
	Vehicle::print();	//先调用抽象基类Vehicle中的print函数
	cout << " Engines:" << getEngines() << endl;
}

void Plane::details() const {
	cout << "The first plane in the world was invented by Wright Brothers in 1903.\n\n";
}
