#include "rectangle.h"

Rectangle::Rectangle(int width, int height) {
	this->width = width;
	this->height = height;
}

Rectangle::Rectangle() {}

void Rectangle::set_values(int width, int height) {
	this->width = width;
	this->height = height;
}

int Rectangle::area() {
	return width * height;
}