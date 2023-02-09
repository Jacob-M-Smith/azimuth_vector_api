#define two_pi (2 * M_PI)

double azimuth_spherical(double r, double theta, double phi);
double azimuth_polar(double theta, double reference_angle);
double azimuth_cartesian(double x, double y, double reference_angle);
void azimuth_reference_angle_bounds(double* reference_angle);