
#include "ex_point.hh"

namespace my {

ex_point_2d::ex_point_2d() {
    x = 0;
    y = 0;
}

ex_point_2d::ex_point_2d(double xx, double yy) {
    x = xx;
    y = yy;
}

double operator-(const ::ex_point_2d& lhs, const ::ex_point_2d& rhs) {
    return ex_distance_2d(lhs, rhs);
}

ex_point_3d::ex_point_3d() {
    x = 0;
    y = 0;
}

ex_point_3d::ex_point_3d(double xx, double yy, double zz) {
    x = xx;
    y = yy;
    z = zz;
}

double operator-(const ::ex_point_3d& lhs, const ::ex_point_3d& rhs) {
    return ex_distance_3d(lhs, rhs);
}

} // ~ namespace my

