
#include <math.h>
#include "older.h"

double ex_distance_2d(ex_point_2d p1, ex_point_2d p2)
{
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

double ex_distance_3d(ex_point_3d p1, ex_point_3d p2)
{
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2) + pow(p2.z - p1.z, 2));
}

