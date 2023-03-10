#include <math.h>
#include "azimuth.h"

// corrects a reference angle to be in range of -2pi <= x <= 2pi
void azimuth_reference_angle_bounds(double* reference_angle)
{
    double angle = *reference_angle;    
    int mult;

    if (angle > two_pi) // angle is greater than 2PI    
        mult = floor((angle / two_pi));
    else // angle is less than - 2PI
        mult = ceil((angle / two_pi));
    
    *reference_angle = angle - (mult * two_pi);
}

// calculates an azimuth from spherical coordinates
double azimuth_spherical(double theta, double reference_angle)
{
    return atan2(sin(theta), cos(theta)) + reference_angle;
}

// calculates an azimuth from polar coordinates
double azimuth_polar(double theta, double reference_angle)
{
    return theta + reference_angle;
}

// calculates an azimuth from cartesian coordinates
double azimuth_cartesian(double x, double y, double reference_angle)
{
    return atan2(x, y) - reference_angle;
}

// calculates an azimuth from due north for spherical coords
double azimuth_spherical_from_due_north(double phi)
{
    return atan2(sin(phi), cos(phi)) + north;
}

// calculates an azimuth from due north for polar coords
double azimuth_polar_from_due_north(double theta)
{
    return theta + north;
}

// calculates an azimuth from due north for cartesian coords
double azimuth_cartesian_from_due_north(double x, double y)
{
    return atan2(x, y) + north;
}