#include "SportsCar.h"
int main() {
	Car yourCar;
	//Car myCar(100, "my car", 4);
	yourCar.whereAmI();
	yourCar.gear = 5;
	yourCar.display();
	yourCar.changeGear();
	yourCar.display();

	SportsCar myCar;
	myCar.setTurbo(true);
	myCar.speedUp();
	myCar.display();
	myCar.whereAmI();
	return 0;
}