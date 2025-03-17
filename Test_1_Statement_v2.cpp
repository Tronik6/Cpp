#include <iostream>;
using namespace std;
#include <vector>;

class Personatge
{
private:
	string name = " ";
	int lvl = 1;
	void lvlUp(int newlvl) {
		modificar_nivell(newlvl);
	}
protected:
	int vida = 100;

public:
	Personatge() {}

	Personatge(string name, int vida, int lvl) {
		this->name = name;
		this->vida = vida;
		this->lvl = lvl;
	}
	void modificar_nivell(int newlvl) {
		this->lvl = newlvl;
	}

	string getName() { return this->name; }
	int getVida() { return this->vida; }
	int getLVL() { return this->lvl; }
};


class Mago : public Personatge{
private:
	int MP = 10;
	int mana = 100;
public:
	Mago(): Personatge() {}
	Mago(string name, int vida, int lvl, int MP, int mana) : Personatge(name, vida, lvl) {
		this->mana = mana;
		this->MP = MP;
	}
	int getMP() { return this->MP; }
	int getmana() { return this->mana; }
};

class Guerrer : public Personatge{
private:
	int FP = 10;
public:
	Guerrer() : Personatge() {}
	Guerrer(string name, int vida, int lvl, int FP) : Personatge(name, vida, lvl) {
		this->FP = FP;
	}
	int getFP() { return this->FP; }
};

class Arquer : public Personatge{
private:
	int Range = 50;
public:
	Arquer() : Personatge() {}
	Arquer(string name, int vida, int lvl, int Range) : Personatge(name, vida, lvl) {
		this->Range = Range;
	}
	int getrange() { return this->Range; }
};

void MageSeterAndPrinter() {
	int num = 1;
	string name;
	vector <Mago> m;

	cout << "Introduce the number of Mages in your party" << endl;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cout << "Which is the name of the Mage " << i+1 << endl;
		cin >> name;

		m.push_back(Mago( name, 1, 700, 75, 400));
	}
	for (int i = 0; i < num; i++) {
		cout << "Name: " << m[i].getName() << endl;
		cout << "Vida: " << m[i].getVida() << endl;
		cout << "Nivel: " << m[i].getLVL() << endl;
		cout << "Magic Power: " << m[i].getMP() << endl;
		cout << "Mana: " << m[i].getmana() << endl;
		cout << "\n\n" << endl;
	}
}


int main() {

	MageSeterAndPrinter();


	/*int nlvl;
	cout << "Levelea-me polfavol: " << endl;
	cin >> nlvl;
	m[0].modificar_nivell(nlvl);

	cout << "Subiste de nivel"<< endl;
	cout << "Nivel: " << m[0].getLVL() << endl;*/


	return 0;
}
