#include <iostream>
using namespace std;

class Sample {
	int x;

public:
	Sample(int val) {
    	x = val;
	}

	Sample(const Sample &obj) {
    	x = obj.x;
 	 
	}
	void display() {
    	cout << "Value of x: " << x << endl;
	}
};

int main() {
	Sample obj1(10);
	Sample obj2 = obj1;

	obj1.display();
	cout << "Copy constructor " << endl;
	obj2.display();

	return 0;
}
