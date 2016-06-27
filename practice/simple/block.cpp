#include <iostream>
using namespace std;

int main() {
	int a = 3;
	{
		int a = 4;
		cout << a;
	}
	cout << a;
	return 0;
}
