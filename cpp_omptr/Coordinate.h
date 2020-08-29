#pragma once
class Coordinate
{
public:
	Coordinate(int _x, int _y);
	~Coordinate();
	int getX();
	int getY();
private:
	int m_iX;
	int m_iY;
};

