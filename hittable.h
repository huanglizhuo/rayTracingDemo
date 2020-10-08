#ifndef HITTABLE_H
#define HITTABLE_H

#include "ray.h"

struct hit_record{
    point3 p;
    vec3 normal;
    double t;
};

class hittable{

};

#endif
