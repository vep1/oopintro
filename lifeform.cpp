#include"lifeform.h"
#include <iostream>
using namespace std;

//class inanimate; //include inanimate class without include

lifeform::lifeform() {}
lifeform::~lifeform() {}

// setter method
void lifeform::setInfo(string a, string b, string c, int d, int e, bool f) {
			name = a;
			species = b;
			Rank = c;
			health = d;
			damage = e;
			shield = f;
		}

//getter methods
string lifeform::getName() {
			return name;
		}
string lifeform::getSpecies() {
			return species;
		}
string lifeform::getRank() {
			return Rank;
		}
int lifeform::getHealth() {
			return health;
		}
int lifeform::getDamage() {
			return damage;
		}
bool lifeform::getShield() {
			return shield;
		}

//methods declaration
//void interact(lifeform user, inanimate object);

bool lifeform::attack(lifeform& agg, lifeform& vic) {
	bool slain = 0;
	if (vic.shield == 1) {
		vic.shield = 0;
	}
	else {
		vic.health = vic.health - agg.damage;
	}
	if (vic.health > 0) {
		cout << vic.name + " shields: " << vic.shield << "\n";
		cout << vic.name + " health: " << vic.health << "\n\n";
	}
	else {
		cout << vic.name + " has been eliminated.\n\n";
	slain = 1;
	}
	return slain;
}

/*void lifeform::interact(lifeform user, inanimate object) {
}*/
