#ifndef UNITS_H
#define UNITS_H

enum Units
{
	UNIT_POINTS,
	UNIT_INCHES,
	UNIT_MILLIMETERS,
	UNIT_CENTIMETERS
};

#define POINTS_PRECISION 1.0
#define INCHES_PRECISION 0.05
#define MILLIMETERS_PRECISION 0.5
#define CENTIMETERS_PRECISION 0.05

#define ROUNDTONEAREST(x,tonearest) ((tonearest)*floor(0.5+(x)/(tonearest)))

#define UNIT_POINTS_TO_INCHES(x) (x/72.0)
#define UNIT_POINTS_TO_MILLIMETERS(x) ((25.4*x)/72.0)
#define UNIT_POINTS_TO_CENTIMETERS(x) ((2.54*x)/72.0)

#define UNIT_ROUND_POINTS_TO_INCHES(x) ROUNDTONEAREST((x/72.0),INCHES_PRECISION)
#define UNIT_ROUND_POINTS_TO_MILLIMETERS(x) ROUNDTONEAREST((25.4*x)/72.0,MILLIMETERS_PRECISION)
#define UNIT_ROUND_POINTS_TO_CENTIMETERS(x) ROUNDTONEAREST((2.54*x)/72.0,CENTIMETERS_PRECISION)

#define UNIT_INCHES_TO_POINTS(x) (x*72.0)
#define UNIT_MILLIMETERS_TO_POINTS(x) ((x*72.0)/25.4)
#define UNIT_CENTIMETERS_TO_POINTS(x) ((x*72.0)/2.54)

#define UNIT_ROUND_INCHES_TO_POINTS(x) ROUNDTONEAREST(x*72.0,POINTS_PRECISION)
#define UNIT_ROUND_MILLIMETERS_TO_POINTS(x) ROUNDTONEAREST((x*72.0)/25.4,POINTS_PRECISION)
#define UNIT_ROUND_CENTIMETERS_TO_POINTS(x) ROUNDTONEAREST((x*72.0)/2.54,POINTS_PRECISION)

#endif
