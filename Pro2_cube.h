/*****************************************************
 * The interface file for the Cube class             *
 *****************************************************/
#ifndef CUBE_H
#define CUBE_H
#include "square.h"

 // Definition of the Cube class
class Cube : public Square
{
private:
	int size;
public:
	Cube(int size);
	~Cube();
	int getSurface() const;
	int getVolume() const;
	void print() const;
};
#endif
