/*****************************************************
 * The interface file for the Square class           *
 *****************************************************/
#ifndef SQUARE_H
#define SQUARE_H
#include <iostream>
using namespace std;

// Definition of the Class Square
class Square
{
private:
	int size;
public:
	Square(int size);
	~Square();
	int getPerimeter() const;
	int getArea() const;
	void print() const;
};
#endif
