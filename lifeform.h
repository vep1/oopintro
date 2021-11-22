// header file for lifeform class
#ifndef _LIFEFORM_H
#define _LIFEFORM_H
#include<iostream>
using namespace std;

class lifeform {
	private:
		string name, species, Rank;
		int health, damage;
		bool shield;
	public:
		lifeform();
		~lifeform();
		void setInfo(string a, string b, string c, int d, int e, bool f);
		string getName();
		string getSpecies();
		string getRank();
		int getHealth();
		int getDamage();
		bool getShield();
		bool attack(lifeform& agg, lifeform& vic);
};
#endif