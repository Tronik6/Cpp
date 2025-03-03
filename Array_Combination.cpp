#include <iostream>
using namespace std;

int* combinarArraysOrdenats(int* arr1, int long1, int* arr2, int long2)
{
	int Length = longitud1 + longitud2;
	int* wombocombo = (int*)malloc(Length * sizeof(int*));
	int i = 0;
	int j = 0;
	int k = 0;

	while (i < long1 and j < long2){
		if(arr1[i] < arr2[j]){
			wombocombo[k] = arr1[i];
		}
		else{
			wombocombo[k] = arr2[j];
		}
	
	}
	for (int l = i; l < long1; l++){
		wombocombo[k] = arr1[l];
		k++;
	}
	for (int l = j; l < long2; l++){
		wombocombo[k] = arr2[l];
		k++;
	}
	return wombocombo;
}



int main() {

	int arr1[] = { 1, 3, 5, 7, 9 };
	int arr2[] = { 2, 4, 6, 8, 10 };

	// busqueu la forma de saber la mida de l'array

	int longitud1 = sizeof(arr1) / sizeof(int);
	int longitud2 = sizeof(arr2) / sizeof(int);
	int* resultat = combinarArraysOrdenats(arr1, longitud1, arr2, longitud2);
	std::cout << "L'array combinat ordenat és: ";
	for (int i = 0; i < longitud1 + longitud2; ++i) {
		cout << resultat[i] << " ";
	}
	cout << endl;

	// Alliberar la memòria de l'array resultat

	delete[] resultat;

	return 0;
}
