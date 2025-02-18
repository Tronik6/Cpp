#include <iostream>
#include <vector>
using namespace std;

struct dades {
	string name;
	float puntuacion;
	int min;
	int sec;
};

int main() {

	int iterationsNum;

	cout << "Introduce the number of participants:" << endl;
	cin >> iterationsNum;

	vector <dades> participants(iterationsNum);

	for (int i = 0; i < iterationsNum; i++) {

		dades d;

		cout << "Introduce the name of the participant, minutes, seconds and puntuation:" << endl;
		cin >> d.name >> d.min >> d.sec >> d.puntuacion;

		participants[i] = d;
	}

	for (int i = 0; i < iterationsNum; i++) {

		dades d;
		
		cout << "Name " << participants[i].name << "\tTime: " << participants[i].min << ":"
			 << participants[i].sec << "\tPuntuacion: " << participants[i].puntuacion << "\n" << endl;
	}

	return 0;
}
