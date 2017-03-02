#include "Point.h"
#include "Rectangle.h"

void main() {
	//Case 1: z, y, x, w
	//Case 2: a, b, c, d
	//Case 3: z, c, x, w
	//Case 4: v, x, y, z

	Point w = Point(1.0, 1.0);
	Point x = Point(5.0, 1.0);
	Point y = Point(5.0, 3.0);
	Point z = Point(1.0, 3.0);

	Point a = Point(1.0, 6.0);
	Point b = Point(5.0, 6.0);
	Point d = Point(1.0, 2.0);
	Point c = Point(5.0, 2.0);

	Point v = Point(99.0, -2.3);

	Rectangle case1 = Rectangle(z, y, x, w);
	Rectangle case2 = Rectangle(a, b, c, d);
	Rectangle case3 = Rectangle(z, c, x, w);
	Rectangle case4 = Rectangle(v, x, y, z);

	float case1Length1, case1Length2, case1Width1, case1Width2;

	case1Length1 = case1.getDistance(z, y);
	case1Length2 = case1.getDistance(w, x);
	case1Width1 = case1.getDistance(y,x);
	case1Width2 = case1.getDistance(z, w);

	if (case1.isRectangle(case1Length1, case1Length2, case1Width1, case1Width2)) {
		cout << "Case 1 is a rectangle!";

		if (case1.isSquare(case1Length1, case1Width1)) {
			cout << "Case 1 is also a square!";
		}
		else {
			cout << "Case 1 is not a square.";
		}
	}
	else {
		cout << "Case 1 is not a rectangle!";
	}


	system("pause");
}
