#include "geometry.h"
#include <algorithm>


double cross(Point a, Point b, Point c) {
    return (b.x - a.x) * (c.y - a.y) - (b.y - a.y) * (c.x - a.x);
}


bool isDegenerate(Point a, Point b, Point c) {
    return cross(a, b, c) == 0;
}


bool isInsideTriangle(Point a, Point b, Point c, Point p) {
    double d1 = cross(p, a, b);
    double d2 = cross(p, b, c);
    double d3 = cross(p, c, a);

    
    bool all_pos = (d1 > 0) && (d2 > 0) && (d3 > 0);
    bool all_neg = (d1 < 0) && (d2 < 0) && (d3 < 0);

    return all_pos || all_neg;
}


bool isPointOnSegment(Point a, Point b, Point p) {
    if (cross(a, b, p) != 0)
        return false;

    return std::min(a.x, b.x) <= p.x && p.x <= std::max(a.x, b.x) &&
           std::min(a.y, b.y) <= p.y && p.y <= std::max(a.y, b.y);
}


bool isOnEdgeOfTriangle(Point a, Point b, Point c, Point p) {
    return isPointOnSegment(a, b, p) ||
           isPointOnSegment(b, c, p) ||
           isPointOnSegment(c, a, p);
}
