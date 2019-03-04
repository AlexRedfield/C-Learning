#include "vehicle.hpp"

Vehicle::Vehicle(string b, int ts)
	:brand(b), topSpeed(ts) {

}

void Vehicle::setBrand(string b) {
	brand = b;
}
string Vehicle::getBrand() const {
	return brand;
}
void Vehicle::setTopSpeed(int ts) {
	if (ts > 0) topSpeed = ts;
	else throw invalid_argument("TopSpeed must>0");
}

int Vehicle::getTopSpeed() const{
	return topSpeed;
}

void Vehicle::print() const {
	cout << "Brand: " << getBrand() << " TopSpeed: " << getTopSpeed() << "km/h";
}
