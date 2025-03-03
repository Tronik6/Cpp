#include <iostream>
using namespace std;

void combinarArraysOrdenats(int* arr1, int long1, int* arr2, int long2)
{
    int Length = long1 + long2;
    int* wombocombo = new int[Length];  // Uso de new en lugar de malloc
    int i = 0, j = 0, k = 0;

    // Mezclando los dos arreglos en orden
    while (i < long1 and j < long2) {
        if (arr1[i] < arr2[j]) {
            wombocombo[k++] = arr1[i++];
        }
        else {
            wombocombo[k++] = arr2[j++];
        }
    }

    // Agregar los elementos restantes de arr1
    while (i < long1) {
        wombocombo[k++] = arr1[i++];
    }

    // Agregar los elementos restantes de arr2
    while (j < long2) {
        wombocombo[k++] = arr2[j++];
    }

    // Imprimir el array combinado
    for (int m = 0; m < Length; ++m) {
        cout << wombocombo[m] << endl;
    }

    delete[] wombocombo;  // Liberar memoria
}

int main() {
    int arr1[] = { 1, 3, 5, 7, 9 };
    int arr2[] = { 2, 4, 6, 8, 10, 11, 12 };
    int longitud1 = sizeof(arr1) / sizeof(int);
    int longitud2 = sizeof(arr2) / sizeof(int);

    combinarArraysOrdenats(arr1, longitud1, arr2, longitud2);

    return 0;
}
