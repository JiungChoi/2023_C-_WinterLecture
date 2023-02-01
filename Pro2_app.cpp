/*****************************************************
 * The application file to test the attributes of a  *
 * square and a cube                                 *
  *****************************************************/
#include "cube.h"

int main()
{
	// Instantiation of a square
	cout << "Instantiation of a square " << endl;
	Square square(5);
	square.print();
	cout << endl;
	// Instantiation of a cube
	cout << "Instantiation of a cube: " << endl;
	Cube cube(5);
	cube.print();
	cout << endl;
	return 0;
}
