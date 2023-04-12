#include "Polynomial.h"
#include <cstring>
#include "rectangle.h"
#include "smarthome.h"

void swap(int& x, int& y) {
	int tmp;
	tmp = x;
	x = y;
	y = tmp;
}

int main() {
	/*
	Polynomial a, b, c;

	a.read();
	b.read();
	c.add(a,b);

	a.display("A= ");
	b.display("B= ");
	c.display("C=A+B= ");
	
	Student eei[10];
	strcpy(eei[2].name, "HyunGi Jo");
	eei[2].bDay.month = 2;
	eei[2].bDay.date = 15;
	printf("이름은 : %s, %d월 %d일 생입니다\n", eei[2].name, eei[2].bDay.month, eei[2].bDay.date);

	int a = 1, b = 2;
	printf("a=%d, b=%d\n", a, b);
	swap(a, b);
	printf("swap 호출 후, a=%d, b=%d", a, b);
	

	Rectangle r1(4, 5);
	printf("rectangle 1 Area : %lf\n", r1.getArea());
	std::cout << "rectangle 1 Area : " << r1.getArea() << std::endl;
	std::cout << "Is square? " << r1.isSquare() << std::endl;
	*/

	SmartHome myHome("홍길동", 23, 40, true);
	myHome.printStatus();

	return 0;
}