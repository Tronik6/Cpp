#include <iostream>;
using namespace std;
#include <vector>;

class Point1d {
public:
	int x;
	Point1d() : x(0) {
		cout << "Ctor Point1D" << endl;
	}
	~Point1d() {
		cout << "Dtor Point1D" << endl;
	}
};

class Point2d : public Point1d {
public:
	int y;
	Point2d() : y(0) {
		cout << "Ctor Point2D" << endl;
	}
	~Point2d() {
		cout << "Dtor Point2D" << endl;
	}
};

class Point3d : public Point2d {
public:
	int z;
	Point3d() : z(0) {
		cout << "Ctor Point3D" << endl;
	}
	~Point3d() {
		cout << "Dtor Point3D" << endl;
	}
};

int main() {
	Point3d p;
	system("pause");
	return 0;
}
