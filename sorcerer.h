#pragma once
// Included string file to utilize strings
#include <string>
//Include character header file to utilize variables
#include "character.h"

//Utilizing this allows us to not have to put std on every line
using namespace std;

//This class inherits the character class to
//Class defined for sorcerer
class sorcerer : public character
{ //Starting scope operator, this starts a code block

//For variables we want private 
private:
	//string for our scorcerers school
	string sorcererSchool;
	// string for our sorcerers study
	string sorcererStudy;
	// string for critical damage
	int criticalDamage;
	// string for conjure power
	string conjurePower;
// Our Methods are stored here
public:
	// This constructor has no return types
	sorcerer();

	// This constructor has return types for our characters
	sorcerer(string Name, int Strength, int Health, int Damage, int Critical, string School, string Study, string Conjure);

	//declare the function then put what it will do in respected cpp file
	void display();
	//our polymorphism for power, damage and conjure power
	void display(bool pDAndH, bool conAndCrit);
	
}; // Ending scope operator, this end a block of code.








