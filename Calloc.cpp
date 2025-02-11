#include <iostream>
using namespace std;

int main() {
	
	//int* nums = (int*)malloc(4 * sizeof(int*));
	int* morenums = (int*)calloc(4, sizeof(int));
	for (int i = 0; i < 4; i++) {
		if (i == 1) {
			morenums[i] = 2;
		}
		else {
			morenums[i] = 0;
		}
	}
	for (int i = 0; i < 4; i++) {
		cout << morenums[i] << endl;
	}
	free(morenums);
	return 0;
}
