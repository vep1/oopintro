#include <iostream>
using namespace std;

// Class declaration for lifeforms
class lifeform {
	public:
		string species;
		string rank;
		int health;
		int damage;
		bool shield;
		//abilities
		void attack(lifeform agg, lifeform vic);
		void interact();
};

// Class declaration for 
class inanimate {
	public:

};

// methods declaration
void lifeform::attack(lifeform agg, lifeform vic) {
	if (vic.shield == 1) {
		vic.shield = 0;
	}
	else {
		vic.health = vic.health - agg.damage;
	}
}
void lifeform::interact() {

}

void reportLifeform(lifeform name);

int main() {
	lifeform Zharg; //create lifeform
	Zharg.species = "Elite"; // species
	Zharg.rank = "Officer"; // set rank
	Zharg.health = 125; // set health
	Zharg.damage = 50; // set damage
	Zharg.shield = 1; // indicate shields

	lifeform Vdorjs;
	Vdorjs.species = "Elite";
	Vdorjs.rank = "General";
	Vdorjs.health = 200;
	Vdorjs.damage = 75;
	Vdorjs.shield = 1;

	lifeform JILL385;
	JILL385.species = "Human";
	JILL385.rank = "Spartan";
	JILL385.health = 100;
	JILL385.damage = 60;
	JILL385.shield = 1;

	reportLifeform(JILL385);
	reportLifeform(Zharg);
	reportLifeform(Vdorjs);
	JILL385.attack(JILL385, Zharg);
	
	return 0;
}

void reportLifeform(lifeform name) {
	//report lifeform information
	string detect = "Species: " + name.species + "\nClass: " + name.rank + "\nShield:";
	cout << detect << name.shield << endl << endl;
}