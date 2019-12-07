#pragma once
#include "Header.h"

class TriangleArea {
	public:
		int getBase();
		int getHeight();
		int calculateArea(int base, int height);
};

int TriangleArea::getBase() {
	int base;
	cout << "Enter Base: ";
	cin >> base;
	return base;
}

int TriangleArea::getHeight() {
	int height;
	cout << "Enter Height: ";
	cin >> height;
	return height;
}

int TriangleArea::calculateArea(int base, int height) {
	int area = (base*height) / 2;
	return area;
}
