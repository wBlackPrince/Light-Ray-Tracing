#ifndef RAY_H
#define RAY_H

#include"vec3.h"

class ray{
public:
    ray(){}

    ray(const vec3 & orig, const vec3 & dir):orig(orig), dir(dir){}

    const point3 & origin() {return orig;}

    const point3 & direction() {return dir;}

    point3 at(double t){
        return orig + t * dir;
    }

private:
    point3 orig;
    vec3 dir;
};


#endif