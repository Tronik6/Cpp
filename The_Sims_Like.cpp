#include <iostream>;
using namespace std;
#include <vector>;

class SimObject {
private:
	string name = " ";
protected:
	int cost;
public:
	SimObject();
	SimObject(string name, int cost) {
		this->name = name;
		this->cost = cost;
	}

	string getName() { return this->name; }
	int getCost() { return this->cost; }

};

class Furniture : public SimObject {
public:
	int comfort;
	string category;
	Furniture() : SimObject() {};
	Furniture(string name, int cost, int comfort, string category) : SimObject(name, cost) {
		this->comfort = comfort;
		this->category = category;
	}
	int getComfort() { return this->comfort; }
	string getCategory() { return this->category; }
};

class Sim : public SimObject {
public:
	int age;
	int energy;
	int mood;

	Sim() : SimObject() {};
	Sim(string name, int cost, int age, int energy, int mood) : SimObject(name, cost) {
		this->age = age;
		this->energy = energy;
		this->mood = mood;
	}
	int getAge() { return this->age; }
	int getEnergy() { return this->energy; }
	int getMood() { return this->mood; }
};

class Adult : public Sim {
public:
	string job;
	int salary;

	Adult() : Sim() {};
	Adult(string name, int cost, int age, int energy, int mood, string job, int salary) : Sim(name, cost, age, energy, mood) {
		this->job = job;
		this->salary = salary;
	}
	string getJob() { return this->job; }
	int getSalary() { return this->salary; }
};

class Child : public Sim {
public:
	int sg;
	string favToy;

	Child() : Sim() {};
	Child(string name, int cost, int age, int energy, int mood, string favToy, int sg) : Sim(name, cost, age, energy, mood) {
		this-> sg = sg;
		this->favToy = favToy;
	}
	int getSchoolGrade() { return this->sg; }
	string getFavToy() { return this->favToy; }
};


void FurnitureSetter() {
	int fn = 1;
	string fName;
	int fCost;
	int fComfort;
	string fCategory;
	vector <Furniture> f;

	cout << "Introduce the number of furniture in your House" << endl;
	cin >> fn;
	if (fn > 0) {
		for (int i = 0; i < fn; i++) {
			cout << "Name the Furniture " << i + 1 << endl;
			cin >> fName;
			cout << "Which is the cost? " << endl;
			cin >> fCost;
			cout << "Which is the comfort (0/10)" << endl;
			cin >> fComfort;
			cout << "Which is the category " << endl;
			cin >> fCategory;
			f.push_back(Furniture(fName, fCost, fComfort, fCategory));
			cout << "\n" << endl;
		}
		for (int i = 0; i < fn; i++) {
			cout << "Name: " << f[i].getName() << endl;
			cout << "Cost: " << f[i].getCost() << endl;
			cout << "Comfort: " << f[i].getComfort() <<endl;
			cout << "Category: " << f[i].getCategory() << endl;
			cout << "\n" << endl;
		}
	}
}

void ChildMolester() {
	int fn = 1;
	int cCost = 15;
	string cName;
	int cAge;
	int cEnergy;
	int cMood;
	string cFavToy;
	int cSchoolGrade;
	vector <Child> c;

	cout << "Introduce the number of childs you have" << endl;
	cin >> fn;

	if (fn > 0) {
		for (int i = 0; i < fn; i++) {
			cout << "Name the Child " << i + 1 << endl;
			cin >> cName;
			cout << "Which is his/her Age? " << endl;
			cin >> cAge;
			cout << "How many Energy it has? " << endl;
			cin >> cEnergy;
			cout << "Which is his/her Mood (0/100)? " << endl;
			cin >> cMood;
			cout << "Which is his/her Favourite Toy " << endl;
			cin >> cFavToy;
			cout << "Which is his/her School Grade (0-10) " << endl;
			cin >> cSchoolGrade;
			c.push_back(Child(cName, cCost, cAge, cEnergy, cMood, cFavToy, cSchoolGrade));
			cout << "\n" << endl;
		}
		for (int i = 0; i < fn; i++) {
			cout << "Name: " << c[i].getName() << endl;
			cout << "Age: " << c[i].getAge() << endl;
			cout << "Energy: " << c[i].getEnergy() << endl;
			cout << "Mood: " << c[i].getMood() << endl;
			cout << "Favourite Tou: " << c[i].getFavToy() << endl;
			cout << "School Grade: " << c[i].getSchoolGrade() << endl;
			cout << "\n" << endl;
		}
	}
}

int main() {
	
	FurnitureSetter();
	ChildMolester();
	return 0;
}
