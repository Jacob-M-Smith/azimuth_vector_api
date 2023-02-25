#define two_pi (2 * M_PI)

double azimuth_spherical(double theta, double reference_angle);             // find the azimuth for a set of spherical coordintates and arbitrary reference angle
double azimuth_polar(double theta, double reference_angle);
double azimuth_cartesian(double x, double y, double reference_angle);
void azimuth_reference_angle_bounds(double* reference_angle);