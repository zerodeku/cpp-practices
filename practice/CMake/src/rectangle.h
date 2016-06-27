#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
	int width, height;
public:
	Rectangle();
	Rectangle(int x, int y);
	void set_values (int x, int y);
	int area();
};

#endif //RECTANGLE_H