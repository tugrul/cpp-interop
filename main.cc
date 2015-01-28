
#include <iostream>

#include "ex_point.hh"

using namespace std;

int main(int argc, char* argv[])
{
    cout << "-- structure sizes --" << endl;
    cout << "sizeof ex_point_2d     : " << sizeof(ex_point_2d) << endl;
    cout << "sizeof my::ex_point_2d : " << sizeof(my::ex_point_2d) << endl << endl;
    cout << "sizeof ex_point_3d     : " << sizeof(ex_point_3d) << endl;
    cout << "sizeof my::ex_point_3d : " << sizeof(my::ex_point_3d) << endl << endl;
    
    // C style initialization
    ex_point_2d point_2d_old_1;
    ex_point_2d point_2d_old_2;
    
    point_2d_old_1.x = 2;
    point_2d_old_1.y = 4;
    
    point_2d_old_2.x = 8;
    point_2d_old_2.y = 16;
    
    cout << "-- C structures passed to ex_distance_2d function --" << endl;
    // passing old structure instances to old library function
    cout << "distance of 2d points  : " << ex_distance_2d(point_2d_old_1, point_2d_old_2) << endl << endl;
    
    // C++ style initialization
    my::ex_point_2d point_2d_new_1(2, 4);
    my::ex_point_2d point_2d_new_2(8, 16);
    
    cout << "-- C++ class instances passed to ex_distance_2d function --" << endl;
    // passing new class instances to old library function
    cout << "distance of 2d points  : " << ex_distance_2d(point_2d_new_1, point_2d_new_2) << endl;
    // passing new class instances to operator overloading
    cout << "distance of 2d points  : " << (point_2d_new_2 - point_2d_new_1) << endl;
    
    
    my::ex_point_3d point_3d_new_1(2, 4, 2);
    my::ex_point_3d point_3d_new_2(8, 16, -2);
    
    
    cout << "-- C++ class instances passed to ex_distance_3d function --" << endl;
    // passing new class instances to old library function
    cout << "distance of 3d points  : " << ex_distance_3d(point_3d_new_1, point_3d_new_2) << endl;
    // passing incompatible class instance to old library function
    // going to be not compiled
    // cout << "distance of 3d points  : " << ex_distance_3d(point_3d_new_1, point_2d_new_2) << endl;
}


