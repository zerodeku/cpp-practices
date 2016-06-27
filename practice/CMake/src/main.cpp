#include "rectangle.h"
#include <iostream>
using namespace std;

int main() {
	Rectangle *a = new Rectangle[1];
	a[0].set_values(1, 1);

	cout << a[0].area() << "\n";

	delete [] a;
}