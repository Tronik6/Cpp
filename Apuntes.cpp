#include <iostream>;
using namespace std;
#include <vector>;

struct NewType {
	string word;
	int num;
};

int funcionVector(const vector<NewType>& v1) {

	int vectorSize = v1.size();

}

NewType funcionStruct(const vector<NewType>& v1) {
	
	int Devuelve_NewType = true;
	vector<bool> visitat(v1.size(), false); //Vector True/False para organizar (Inicializa en False para cambiarlo a True una vez revisado)

	for (int i = 0; i < v1.size(); i++) {

		int max = -1;  //inicializa a -1 para que no haya error
		int index = -1;  //inicializa a -1 para que no haya error

		for (int j = 0; j < v1.size(); j++) {

			if (max == -1 and not visitat[j]) {  //si tiene el valor -1 y el bool <vector> esta en false

				max = v1[j].num;
				index = j;

			}

			else {

				if (not visitat[j] and v1[j].num > max) {

					max = v1[j].num;
					index = j;

				}
			}
		}
		cout << max << endl;
		visitat[index] = true;
	}
}


int main() {

	int* nums = (int*)malloc(4 * sizeof(int*)); //Create Space to storage
	int* morenums = (int*)calloc(4, sizeof(int));  //inicialize space with 0's

}
