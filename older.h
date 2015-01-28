
typedef struct _ex_point_2d {
    double x;
    double y;
} ex_point_2d;

typedef struct _ex_point_3d {
    double x;
    double y;
    double z;
} ex_point_3d;

double ex_distance_2d(ex_point_2d, ex_point_2d);
double ex_distance_3d(ex_point_3d, ex_point_3d);
