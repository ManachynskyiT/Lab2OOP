#include <iostream>
#include "geometry.h"

int main() {
    Point a, b, c;
    std::cout << "Enter the coordinates of the triangle (x y for each vertex):\n";
    std::cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y;

    if (isDegenerate(a, b, c)) {
        std::cout << "The triangle is degenerate (all vertices on the same line).\n";
        
    }

    int n;
    std::cout << "How many points to check? ";
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        Point p;
        std::cout << "Enter the coordinates of the point " << i + 1 << ": ";
        std::cin >> p.x >> p.y;

        if (isInsideTriangle(a, b, c, p)) {
            std::cout << "A point inside ~ a triangle.\n";
        } else {
            std::cout << "Point outside the triangle.\n";
        }
    }

    return 0;
}
