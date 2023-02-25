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

