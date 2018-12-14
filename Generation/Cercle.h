#pragma once
#include "Shape2D.h"
#include "Point2d.h"


class Cercle : protected Shape2D
{
public:
	Cercle(Point2d point, int radius);
	~Cercle();

private:
	int mX;
	int mY;
	Point2d mPoint;
	int mRadius;


	virtual int64_t encodePropreties() override;
	int calculateArea();
	int calculateCirconference();
	int calculateDiameter();
};
