#pragma once
// Included string file to utilize strings
#include <string>
//Include character header file to utilize variables
#include "character.h"

//Utilizing this allows us to not have to put std on every line
using namespace std;

//This class will also inherit the character class

//Class defined for wizards
class wizards : public character
{//Starting scope operator, this starts a code block

//For variables we want private
// Private is data that can only be accessed by the class
private:
	// integer for amount of spell points
	int spellPoints;
	//string for type of wizard
	string wizardClass;
	// string for special move
	string specialMove;
	// integer for special move damage
	int specialMoveDamage;



	// Our Methods are stored here
public:
	// This constructor has no return types
	wizards();
	// This constructor has return types for our characters
	wizards(string Name, int Health, int Power, int Damage, int Spell, string Class, string Move, int Special);
	//declare the function then put what it will do in respected cpp file
	void display();
	//void for our polymorphism with booleans
	void display(bool pDAndH, bool sPoints);
	

}; // Ending scope operator, this end a block of code.