#include <iostream>
#include "sorting.h"
using namespace std;

// Class declaration for inanimate objects
class inanimate {
	public:
		string type;
		int stability;
		bool hazardous;
};

// Class declaration for lifeforms
class lifeform {
	private:
		string name, species, rank;
		int health, damage;
		bool shield;
	public:
		lifeform(string a, string b, string c, int d, int e, bool f); // prototype

		void setInfo(string a, string b, string c, int d, int e, bool f);

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

// Date Constructor
lifeform::lifeform(string a, string b, string c, int d, int e, bool f)

// methods declaration
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
void lifeform::interact(lifeform user, inanimate object) {

}

void reportLifeform(lifeform name);
bool turn(lifeform player);

int main() {
	string name;
	bool test = true;

	cout << "Prepare for deployment. Select a name which is 8-12 characters in length and only contains letters, digits, and underscores:\n\n";
	cin >> name;
	cout << "\nHave fun fighting aliens " + name + ".\n\n";

	// Create lifeforms
	lifeform player(name, "Human", "Spartan", 100, 60, true);

	//Create an enemy array
	//lifeform enemy[20];
	lifeform enemy1("Vdorjs", "Elite", "General", 200, 75, true);
	lifeform enemy2("Zharg", "Elite", "Officer", 125, 50, true);
	player.attack(player, enemy1);
	
	while (test == true) {
		bool gameover;
		gameover = turn(player);
		if (gameover == 1) { break; }
	}

	reportLifeform(player);
	
	return 0;
}

// function for turn-based gameplay
bool turn(lifeform player) {
	int response;
	cout << "Enter a single-digit integer number to win the guessing game:\n";
	cin >> response;
	if (response == 5) {
		cout << "You guessed correct!\n";
		return 1;
	}
	else {
		cout << "Your guess was incorrect. Try again.\n";
		return 0;
	}
}

void reportLifeform(lifeform organism) {
	//report lifeform information
	string detect = "Species: " + organism.species + "\nClass: " + organism.rank + "\nShield: ";
	cout << detect << organism.shield << endl << endl;
}