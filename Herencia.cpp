#include <iostream>;
using namespace std;
#include <vector>;

class Point1d {
public:
	int x;
	void setx(int x) { this->x = x; }
};

class Point2d : public Point1d {
public:
	int y;
	void sety(int y) { this->y = y; }
};

class Point3d : public Point2d {
public:
	int z;
	void setz(int z) { this->z = z; }
};





int main() {
	Point1d p1;
	p1.setx(1);
	cout << p1.x << endl;

	Point2d p2;
	p2.setx(2); p2.sety(2);
	cout << p2.x << p2.y << endl;

	Point3d p3;
	p3.setx(3); p3.sety(3); p3.setz(3);
	cout << p3.x << p3.y << p3.z << endl;


	return 0;
}
