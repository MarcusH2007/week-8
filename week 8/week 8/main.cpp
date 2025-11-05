/*
Example Client File (main.cpp)
*/
#include <iostream> // for cout/endl etc.
#include <cstdlib> // c++ version of stdlib - for exit.

#include "Colour.h" //need this to define our class.

using std::cout;
using std::endl;

int main(int argc, char* argv[])
{
	cout << "testing the colour library" << endl;

	Colour foreground; //static colour on stack.
	foreground.setRed(225);
	foreground.setBlue(0);
	foreground.setGreen(0);
	foreground.setAlpha(0);


	//cout can't print an unsigned int use +
	//to make promote it to a signed char.
	cout << +foreground.getRed() << ","
		<< +foreground.getGreen() << ","
		<< +foreground.getBlue() << ","
		<< +foreground.getAlpha() << endl;

	Colour background; //static colour
	background.setRed(0);
	background.setBlue(225);
	background.setGreen(0);
	background.setAlpha(0);


	cout << +background.getRed() << ","
		<< +background.getGreen() << ","
		<< +background.getBlue() << ","
		<< +background.getAlpha() << endl;

	Colour *justOneMore; // dynamic colour on heap.
	//new allocates memory and calls constructor.
	justOneMore = new Colour(225,225,0,0);

	cout << +justOneMore->getRed() << ","
		<< +justOneMore->getGreen() << ","
		<< +justOneMore->getBlue() << ","
		<< +justOneMore->getAlpha() << endl;

	delete justOneMore; //must release memory.

	Colour maxTest;
	cout << +maxTest.getRed() << ","
		<< +maxTest.getGreen() << ","
		<< +maxTest.getBlue() << ","
		<< +maxTest.getAlpha() << endl;
	cout << "Colour max" << +Colour::MAX << endl;
	exit(0);
}