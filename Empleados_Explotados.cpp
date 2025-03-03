#include <iostream>
using namespace std;
#include <vector>

struct Desc {
	string name;
	string surname;
	int age;
	int income;
};

float medianaIncom(const vector<Desc> & v1) {
	float mitja = 0;
	for (int i = 0; i < v1.size(); ++i) {
		mitja += v1[i].income;
	}
	return mitja / v1.size();
}

Desc best(const vector<Desc>& v1) {
	int aux1 = v1[0].income;
	int aux2 = 0;
	
	for (int i = 1; i < v1.size(); i++) {
		if (v1[i].income > aux1) {
			aux2 = i;
			aux1 = v1[i].income;
		}
	}
	return v1[aux2];
}


void printDes(const vector<Desc>& v1) {
	
	vector<bool> visitat(v1.size(), false);

	for (int i = 0; i < v1.size(); i++) {
		int max = -1; int index = -1;
		for (int j = 0; j < v1.size(); j++) {
			if (max == -1 and not visitat[j]) {
				max = v1[j].income;
				index = j;
			}
			else {
				if(not visitat[j] and v1[j].income > max) {
					max = v1[j].income;
					index = j;
				}
			}
		}
		cout << max << endl;
		visitat[index] = true;
	}
}

int main() {
	struct Desc d;
	int numberEmp;

	cout << "How many Employees does your Busines?: " << endl;
	cin >> numberEmp;

	vector <Desc> employees(numberEmp);

	for (int i = 0; i < numberEmp; i++) {
		cin >> d.name >> d.surname >> d.age >> d.income;

		employees[i] = d;
	}
	for (int i = 0; i < numberEmp; i++) {

		cout << "Name: " << employees[i].name << " " << employees[i].surname << "\tAge "
			<< employees[i].age << "\tIncome: " << employees[i].income << "\n" << endl;
	}

	float result = medianaIncom(employees);
	cout << result << endl;

	Desc empleat = best(employees);
	cout << "Most payd employee \tName: " << empleat.name << " " << empleat.surname << "\tAge "
		<< empleat.age << "\tIncome: " << empleat.income << "\n" << endl;

	printDes(employees);

	return 0;
}
