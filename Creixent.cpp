#include <iostream>
using namespace std;

int recursive_factorial(int n) {
	if (n == 1) return 1;
	else return n * recursive_factorial(n - 1);
}

bool recursivecounter(int n) {
	if (n < 10) return true;
	else if ((n % 100 / 10) <= n % 10) return recursivecounter(n / 10);
	else return false;
}

int main() {
	cout << recursivecounter(12345) << endl;
	return 0;
}
