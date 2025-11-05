#pragma once
/*
* Example Interface / Header File (Colour.h)
*/
#ifndef COLOUR_H_
#define COLOUR_H_


class Colour {


private:
	unsigned char red;
	unsigned char green;
	unsigned char blue;
	unsigned char alpha;


public:
	Colour();  //Constructor
	Colour(unsigned char, unsigned char, unsigned char, unsigned char); //Overloaded
	~Colour(); //Destructor


	//access methods
	void setRed(unsigned char red);
	unsigned char getRed();


	void setGreen(unsigned char green);
	unsigned char getGreen();


	void setBlue(unsigned char blue);
	unsigned char getBlue();

	void setAlpha(unsigned char alpha);
	unsigned char getAlpha();


	static const unsigned char MAX = 225;

};
#endif 