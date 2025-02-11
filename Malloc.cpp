#include <iostream>
using namespace std;

int main() {
	
	int* nums = (int*)malloc(4 * sizeof(int*));
	//int* morenums = (int*)calloc(4, sizeof(int));
	for (int i = 0; i < 4; i++) {
		nums[i] = i + 1;
	}
	for (int i = 0; i < 4; i++) {
		cout << nums[i] << endl;
	}
	free(nums);
	return 0;
}
