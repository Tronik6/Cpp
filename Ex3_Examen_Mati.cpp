#include <iostream>
using namespace std;
#include <vector>

struct Desc {
	string name;
	string surname;
	int age;
	int income;
};

int medianaIncom() {
	for
}

void RegisterAndPrint() {
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

		Desc d;

		cout << "Name: " << employees[i].name << " " << employees[i].surname << "\tAge "
			<< employees[i].age << "\tIncome: " << employees[i].income << "\n" << endl;
	}
}

int main() {
	struct Desc d;

	//Ex.1 & 2
	RegisterAndPrint();
	


	return 0;
}
