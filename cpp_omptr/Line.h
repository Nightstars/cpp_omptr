#pragma once
#include "Coordinate.h"
class Line
{
public:
	Line(int _x1, int _y1, int _x2, int _y2);
	~Line();
	void printInfo();
private:
	Coordinate* m_pCoorA;
	Coordinate* m_pCoorB;
};

