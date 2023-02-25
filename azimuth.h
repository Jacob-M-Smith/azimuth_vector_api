#define two_pi (2 * M_PI)

// calculations for arbitrary reference angles
double azimuth_spherical(double theta, double reference_angle);             // find the azimuth for a set of spherical coordintates and arbitrary reference angle
double azimuth_polar(double theta, double reference_angle);                 // find the azimuth for a set of polar coordinates and arbitrary reference angle
double azimuth_cartesian(double x, double y, double reference_angle);       // find the azimuth for a set of cartesian coordinates and arbitrary reference angle

// calculations from due north
double azimuth_spherical_from_due_north(double theta);                      // find the azimuth from due north for a set of spherical coordintates 
double azimuth_polar_from_due_north(double theta);                          // find the azimuth from due north for a set of polar coordinates
double azimuth_cartesian_from_due_north(double x, double y);                // find the azimuth from due north for a set of cartesian coordinates 

// helpers
void azimuth_reference_angle_bounds(double* reference_angle);               // bound correction for angles if necessary (probably useless)