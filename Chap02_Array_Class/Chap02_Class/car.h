#pragma once
#include <cstdio>
#include <cstring>

class Car {
protected:


public:
	int gear;
	int speed;
	char name[40];
	Car():speed(0),gear(0),name(""){}
	~Car(){}
	Car(int s, const char* n, int g)
		:speed(s), gear(g) {
		strcpy_s(name, n);
	}

	void changeGear(int g = 4) {
		gear = g;
	}
	void speedUp() {
		speed += 5;
	}
	void display() {
		printf("[%s] : ���=%d�� �ӵ�=%dkmph\n", name, gear, speed);
	}
	void whereAmI() { printf("��ü �ּ�=%x\n", this); }
};