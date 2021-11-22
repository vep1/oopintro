#include <iostream>
#include "sorting.h"
#include "lifeform.h"
using namespace std;

// Class declaration for inanimate objects
/*class inanimate {
	public:
		string type;
		int stability;
		bool hazardous;
};*/

// function prototypes
bool turn(lifeform player);
//void reportLifeform(lifeform name);

int main() {
	string name;
	bool test = true;

	cout << "Prepare for deployment. Select a name which is 8-12 characters in length and only contains letters, digits, and underscores:\n\n";
	cin >> name;
	cout << "\nHave fun fighting aliens " + name + ".\n\n";

	// Create lifeforms
	lifeform player;
	lifeform enemy1;
	lifeform enemy2;

	// Set info for lifeforms
	player.setInfo(name, "Human", "Spartan", 100, 60, true);
	enemy1.setInfo("Vdorjs", "Elite", "General", 200, 75, true);
	enemy2.setInfo("Zharg", "Elite", "Officer", 125, 50, true);

	//Create an enemy array
	//lifeform enemy[20];
	
	//test attck method
	player.attack(player, enemy1);

	while (test == true) {
		bool gameover;
		gameover = turn(player);
		if (gameover == 1) { break; }
	}

	//reportLifeform(player);

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

//report lifeform information
/*void reportLifeform(lifeform organism) {
	string detect = "Species: " + organism.getSpecies + "\nClass: " + organism.getRank + "\nShield: ";
	cout << detect << organism.getShield << endl << endl;
}*/