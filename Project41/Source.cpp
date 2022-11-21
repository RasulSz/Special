#include <iostream>
using namespace std;

class Su{
	string name;
	int ph;
	bool still;
	int o2;
public:
	Su() {
		this->name = nullptr;
		this->ph = 0;
		this->still = true;
		this->o2 = 0;
	}
	Su(string name, int ph, bool still, int o2) {
		SetName(name);
		SetPh(ph);
		SetStill(still);
		SetO2(o2);
	}
#pragma region SetGet
	void SetName(string name) {
		this->name = name;
	}

	void SetPh(int ph) {
		this->ph = ph;
	}

	void SetStill(bool still) {
		this->still = still;
	}

	void SetO2(int o2) {
		this->o2 = o2;
	}

	string GetName()const {
		return this->name;
	}

	int GetPh()const {
		return this->ph;
	}

	bool GetStill()const {
		return this->still;
	}

	int GetO2()const {
		return this->o2;
	}
#pragma endregion
};

class Sirab : public Su{
	string name;
	int ph;
	bool still;
	int o2;
public:
	Sirab() : Su(name, ph, still, o2) {
		
	}

	Sirab(string name, int ph, bool still, int o2) : Su(name,ph,still,o2) {

	}
};



class Badamli : public Su{
	string name;
	int ph;
	bool still;
	int o2;
public:
	Badamli() : Su(name, ph, still, o2) {
		
	}

	Badamli(string name, int ph, bool still, int o2) : Su(name, ph, still, o2) {
		
	}
};


class Person {
public:
	void Drink(const Su& obj) {
		cout << "I Drinked " << obj.GetName() << endl;
	}
};

void main() {
	Sirab sirab("sirab", 2, true, 20);
	Badamli badamli("badamli", 2, true, 20);
	Person* person = new Person();
	person->Drink(sirab);
	person->Drink(Badamli("badamli", 4, false, 500));

	
}