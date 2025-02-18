#include <iostream>
using namespace std;

void intercanvi_estatic(float &a,float& b) {
	float tmp = a;
	a = b;
	b = tmp;
}
int main()
{
	float primera{ 222.0 };
	float segona{ 333.0 };
	float tercera;
	float quarta;
	tercera = primera + segona;
	intercanvi_estatic(segona, primera);
	quarta = primera + segona;
	cout << primera << endl;
	cout << segona << endl;
	cout << tercera << endl;
	cout << quarta << endl;
		///…. el teu codi per demotrar qu el asuma funciona
		return 0;
}
