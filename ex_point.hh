
extern "C" {
#include "older.h"
}

namespace my {

class ex_point_2d: public ::ex_point_2d
{
    public:
    ex_point_2d();
    ex_point_2d(double xx, double yy);

    friend double operator-(const ::ex_point_2d&, const ::ex_point_2d&);
};

class ex_point_3d: public ::ex_point_3d
{
    public:
    ex_point_3d();
    ex_point_3d(double xx, double yy, double zz);

    friend double operator-(const ::ex_point_3d&, const ::ex_point_3d&);
};

}

