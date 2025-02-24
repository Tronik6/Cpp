#include <iostream>
#include <vector>
using namespace std;

class point
{
private:
	int x, y; //data members
public:

	point() { cout << "constructor" << endl; }

	~point() { cout << "destructor " << x << " " << y << endl; }

	void setx(int x) {
		this->x = x;
	}
	void sety(int y) {
		this->y = y;
	}

	int getx() {
		return this->x;
	}
	int gety() {
		return this->y;
	}
};


int main() {
	point p1;


	p1.setx(1);
	p1.sety(2);
	cout << p1.getx() <<" " << p1.gety() << endl;
	return 0;
}
