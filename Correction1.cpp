#include <iostream>
using namespace std;
void modifyArray(int* arr, int size) {
	for (int i = 0; i < size; i++) { //The variable modificator is missing (i++)
		arr[i] *= 2; // the format is incorrect
	}
}
int main() {
	int array[5] = { 1, 2, 3, 4, 5 }; //an array can not be constant
	int* ptr = array; //no need to use double because we are using numbers that can fit in an int
	modifyArray(ptr, 5);
	for (int i = 0; i < 5; ++i) {
		cout << array[i] << " ";
	}
	cout << endl;
	return 0;
}
