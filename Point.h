#ifndef __POINT_H_DEFINED__
#define __POINT_H_DEFINED__

class Point {
	public:
		Point();
		Point(double xPt, double yPt);

		void setXPt(double);
		void setYPt(double);

		double getXPt();
		double getYPt();

	private:
		double xPt;
		double yPt;
};

#endif
