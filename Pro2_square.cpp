/*****************************************************
 * The implementation file for the Square class      *
 *****************************************************/
#include "square.h"

 // Parameter constructor
Square::Square(int s)
	: size(s)
{
}
// Destructor
Square :: ~Square()
{
}
// Member function to calculate the perimeter of a square
int Square::getPerimeter() const
{
	return  2 * (size + size);
}
// Member function to calculate the area of a square
int Square::getArea() const
{
	return (size * size);
}
// Member function to print the attributes of a square
void Square::print() const
{
	cout << "Size: " << size << endl;
	cout << "Perimeter: " << getPerimeter() << endl;
	cout << "Area:  " << getArea() << endl;
}
