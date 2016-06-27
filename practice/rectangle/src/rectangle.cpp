#include "rectangle.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle(int w, int h) {
	this->width = w;
	this->height = h;
}

Rectangle::Rectangle() {
    cout << "Rectangle initialized.\n";
}

Rectangle::~Rectangle() {
    cout << "Rectangle destroied.\n";
}

void Rectangle::set_values(int width, int height) {
	this->width = width;
	this->height = height;
}

int Rectangle::area() {
	return width * height;
}
