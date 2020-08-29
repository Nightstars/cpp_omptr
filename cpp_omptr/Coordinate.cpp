#include "Coordinate.h"
#include <iostream>
using namespace std;
Coordinate::Coordinate(int _x, int _y)
{
	m_iX = _x;
	m_iY = _y;
	cout << "Coordinate(int _x, int _y)" << "\t" << "(" << m_iX << "," << m_iY << ")" << endl;
}

Coordinate::~Coordinate()
{
	cout << "~Coordinate()" << "\t" << "(" << m_iX << "," << m_iY << ")" << endl;
}

int Coordinate::getX()
{
	return m_iX;
}

int Coordinate::getY()
{
	return m_iY;
}
