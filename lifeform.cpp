// Class declaration for lifeforms
#include <iostream>

class lifeform {
private:
	string name, species, rank;
	int health, damage;
	bool shield;
public:
	lifeform(string a, string b, string c, int d, int e, bool f); // prototype

	void setInfo(string a, string b, string c, int d, int e, bool f)

		lifeform(string a, string b, string c, int d, int e, bool f) {

		name = a;
		species = b;
		rank = c;
		health = d;
		damage = e;
		shield = f;
	}
	~lifeform() {
		//cout << "goodbye\n";
	}
	//abilities
	bool attack(lifeform& agg, lifeform& vic);
	void interact(lifeform user, inanimate object);
};