#ifndef GEOMETRY_H
#define GEOMETRY_H

struct Point {
    double x, y;
};

// Векторний добуток для трьох точок
double cross(Point a, Point b, Point c);

// Перевірка, чи трикутник вироджений
bool isDegenerate(Point a, Point b, Point c);

// Перевірка, чи точка строго всередині трикутника (без меж)
bool isInsideTriangle(Point a, Point b, Point c, Point p);

// Перевірка, чи точка лежить на відрізку ab
bool isPointOnSegment(Point a, Point b, Point p);

// Перевірка, чи точка лежить на межі трикутника
bool isOnEdgeOfTriangle(Point a, Point b, Point c, Point p);

#endif
