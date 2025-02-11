#include <iostream>
using namespace std;

int recursive_factorial(int n) {
	if (n == 1) return 1;
	else return n * recursive_factorial(n - 1);
}

int recursivecounter(int n) {
	if (n < 10) return 1;
	else return 1 + recursivecounter(n / 10);
}

int main() {
	cout << recursivecounter(12345) << endl;
	return 0;
}
