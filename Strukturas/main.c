#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14
#define BATCHSIZE 200

/*
 * 
 */
//struct Point {
//    int x, y, z;
//};

typedef struct {
    double x, y, z;
} Point;

double distance(Point a, Point b);

int main(int argc, char** argv) {
    //struct Point a;
    //struct Point b = {5, 6};
    Point a = {2, 4, 0};
    Point b = {5, 8, 0};
    printf("A(%f,%f,%f)\n", a.x, a.y, a.z);
    printf("B(%f,%f,%f)\n", b.x, b.y, b.z);
    printf("Distance from A to B = %f\n", distance(a, b));
    //int x = 5;
    //int y = 6;
    // [x,y,x2,y2,.....]
    // x = [ 1 2 3 4]
    // y = [ 2 3 4 5]



    return (EXIT_SUCCESS);
}

double distance(Point a, Point b) {
    double dx = b.x - a.x;
    double dy = b.y - a.y;
    double dz = b.z - a.z;

    return sqrt(dx * dx + dy * dy + dz * dz);
}