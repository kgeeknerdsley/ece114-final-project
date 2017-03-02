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

	float test1, test2;

	test1 = case1.getPoint1X();
	test2 = case1.getPoint1Y();

	cout << test1 << endl << test2;

	system("pause");
}
