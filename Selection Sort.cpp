#include <iostream>
using namespace std;
#include <vector>

int findMin(vector <int>& v, int index) {
	
	int min, newMin;
	min = v[index];
	for (int j = index; j < v.size(); j++) {
		if (v[j] < min) {
			newMin = v[j];
			index = j;
		}
	}
	return index;
}

void selectionSort(vector <int>& v) {

	for (int i = 0; i < v.size(); i++) {
		int indexV = findMin(v, i);
		swap(v[i], v[indexV]);
	}

}

int main() {
	vector <int> v1 = { 5, 8, 3 };

	selectionSort(v1);
	
	for (int i = 0; i < v1.size(); i++) {
		cout << v1[i] << " " << endl;
	}
}
