#include "Line.h"
#include <iostream>
using namespace std;
Line::Line(int _x1, int _y1, int _x2, int _y2)
{
	m_pCoorA = new Coordinate(_x1, _y1);
	m_pCoorB = new Coordinate(_x2, _y2);
	cout << "Line()" << endl;
}

Line::~Line()
{
	delete m_pCoorA;
	m_pCoorA = NULL;
	delete m_pCoorB;
	m_pCoorB = NULL;
	cout << "~Line()" << endl;
}

void Line::printInfo()
{
	cout << "printInfo()" << endl;
	cout << "(" << m_pCoorA->getX() << "," << m_pCoorA->getY() << ")" << endl;
	cout << "(" << m_pCoorB->getX() << "," << m_pCoorB->getY() << ")" << endl;
}
