#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
	int width, height;
public:
	Rectangle();
	Rectangle(int w, int h);
    ~Rectangle();
	void set_values (int x, int y);
	int area();
};

#endif //RECTANGLE_H
