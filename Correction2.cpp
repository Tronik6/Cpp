#include <iostream>
using namespace std;
void misteri(int *array, int longitud) { //pointer in array
	for (int i = 0; i < longitud / 2; ++i) {
		int x = *(array + i); //pointer in array
		array[i] = array[longitud - 1 - i];
		array[longitud - 1 - i] = x;
	}
}
int main()
{
	int longitud = 5;
	int* array = (int*)malloc(longitud * sizeof(int)); //Re-write malloc
	for (int i = 0; i < longitud; ++i) {
		array[i] = i + 1;
	}
	misteri(array, longitud);
	for (int i = 0; i < longitud; i++) { //change of variable
		cout << array[i] << " ";
	}
	cout << endl;
	return 0;
}
