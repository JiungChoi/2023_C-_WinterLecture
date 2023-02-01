/*****************************************************
 * The implementation file for the Cube class        *
 *****************************************************/
#include "cube.h"
using namespace std;

// Constructor
Cube::Cube(int s)
	:Square(s), size(s)
{
}
// Destructor
Cube :: ~Cube()
{
}
// Member function to calculate the surface of a cube
int Cube::getSurface() const
{
	return (getPerimeter() * size + 2 * getArea());
}
// Member function to calculate the volume of a cube
int Cube::getVolume() const
{
	return (getArea() * size);
}
// Member function to print the attributes of a cube
void Cube::print() const
{
	cout << "Size: " << size << endl;
	cout << "Surface: " << getSurface() << endl;
	cout << "Volume: " << getVolume() << endl;
}
