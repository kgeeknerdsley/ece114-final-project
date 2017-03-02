#include "Point.h"
#include "Rectangle.h"


Rectangle::Rectangle() {

}

Rectangle::Rectangle(Point p1, Point p2, Point p3, Point p4) {
	setPoint1(p1);
	setPoint2(p2);
	setPoint3(p3);
	setPoint4(p4);
}


bool Rectangle::isRectangle(float length1, float length2, float width1, float width2) {
	if (length1 == length2) {
		if (width1 == width2) {
			return true;
		}
	}
	else {
		return false;
	}
}

bool Rectangle::isSquare(float length, float width) {
	return false;
}

float Rectangle::getDistance(Point point1, Point point2) {
	float p1X = point1.getXPt();
	float p1Y = point1.getYPt();

	float p2X = point2.getXPt();
	float p2Y = point2.getYPt();

	float answer;

	answer = sqrt(pow((p2X - p1X), 2) + pow((p2Y - p1Y), 2));

	return abs(answer);
}

void Rectangle::setPoint1(Point pointInput) {
	point1 = pointInput;
}

void Rectangle::setPoint2(Point pointInput) {
	point2 = pointInput;
}

void Rectangle::setPoint3(Point pointInput) {
	point3 = pointInput;
}

void Rectangle::setPoint4(Point pointInput) {
	point4 = pointInput;
}

float Rectangle::getPoint1X() {
	return point1.getXPt();
}

float Rectangle::getPoint1Y() {
	return point1.getYPt();
}

float Rectangle::getPoint2X() {
	return point2.getXPt();
}

float Rectangle::getPoint2Y() {
	return point2.getYPt();
}

float Rectangle::getPoint3X() {
	return point3.getXPt();
}

float Rectangle::getPoint3Y() {
	return point3.getYPt();
}

float Rectangle::getPoint4X() {
	return point4.getXPt();
}

float Rectangle::getPoint4Y() {
	return point4.getYPt();
}
