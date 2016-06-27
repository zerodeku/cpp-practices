#include "rectangle.h"
#include <iostream>
//#include <cblas.h>
using namespace std;

int main() {
    // directly instantiate an object
	Rectangle a;
    cout << "Area of rectangle a is: " << a.area() << ".\n";
	a.set_values(1, 1);
	cout << "Area of rectangle a is: " << a.area() << ".\n";

    // instantiate an array of objects
    Rectangle b[2];
    b[0].set_values(0, 0);
    cout << "Area of rectangle b0 is: " << b[0].area() << ".\n";

    // instantiate an object and allocating memory
    Rectangle *c = new Rectangle;
    c->set_values(2, 2);
    cout << "Area of rectangle c is: " << c->area() << ".\n";
    delete c;

    // instantiate an array of objects and allocating memory
    Rectangle *d = new Rectangle[2];
    d[0].set_values(3, 3);
    (d + 1)->set_values(4, 4);
    cout << "Area of rectangle d0 is: " << d[0].area() << ".\n";
    cout << "Area of rectangle d1 is: " << (d + 1)->area() << ".\n";
    delete[] d;

    // declare with initialization
    Rectangle e (5, 5);
    cout << "Area of rectangel e is: " << e.area() << ".\n";

	int i;
	double x[] = {1, 1, 1};
	for (i = 0; i < 3; ++i) {
		cout << x[i] << "\n";
	}
    return 0;
}
