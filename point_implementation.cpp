#include "Point.h"

#include <iostream>

Point::Point() {
	setXPt(0.0);
	setYPt(0.0);
}

Point::Point(double xCoord, double yCoord) {
	setXPt(xCoord);
	setYPt(yCoord);
}

void Point::setXPt(double xCoord) {
	xPt = xCoord;
}

void Point::setYPt(double yCoord) {
	yPt = yCoord;
}

double Point::getXPt() {
	return xPt;
}

double Point::getYPt() {
	return yPt;
}
