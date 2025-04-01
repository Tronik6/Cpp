#include <iostream>;
using namespace std;
#include <vector>;

class inventory {
private:
	int maxN;
public:

	vector <string> atribute;
	int currentN;

	inventory(){}

	inventory(vector <string> atribute, int currentN, int maxN) {
		this->atribute = atribute;
		this->currentN = currentN;
		this->maxN = maxN;
	}
	void add(string objName) {
		if (atribute.size() >= maxN) {
			for (int i = 0; i < atribute.size()-1; ++i) {
				atribute[i] = atribute[i + 1];
			}
			atribute[maxN - 1] = objName;
		}
		else {
			atribute.push_back(objName);	
		}
		
	}

	void remove() {
		atribute.pop_back();
	}

	void show() const {

	}

	bool contains(string objName) {

	}

};





int main() {

	return 0;
}
