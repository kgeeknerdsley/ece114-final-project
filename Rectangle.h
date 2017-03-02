#ifndef __RECTANGLE_H_DEFINED__
#define __RECTANGLE_H_DEFINED__

#include <iostream>

using namespace std;

class Rectangle {
	public:
		Rectangle();
		Rectangle(Point, Point, Point, Point);
		
		bool isRectangle();

		void setPoint1(Point);
		void setPoint2(Point);
		void setPoint3(Point);
		void setPoint4(Point);

		float getPoint1X();
		float getPoint1Y();
		float getPoint2X();
		float getPoint2Y();
		float getPoint3X();
		float getPoint3Y();
		float getPoint4X();
		float getPoint4Y();

		float getLength(Point, Point);

	private:
		Point point1;
		Point point2;
		Point point3;
		Point point4;


};



#endif
