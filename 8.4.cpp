//Завдання 4

#include <iostream>
#include <cmath>

class Dot
{
public:
    int x, y;
};

class Line 
{
public:
    float created_Line,AC,BC;
    float distance(int x1, int x2, int y1, int y2)
    {
        AC = abs(x1 - x2);
        BC = abs(y1 - y2);
        created_Line = sqrt(pow(AC, 2) + pow(BC, 2));
        return created_Line;
    }
};
class Triangle 
{
public:
    float Lines[3];
    void Perimetr(float Line1, float Line2, float Line3)
    {
        std::cout << "Perimeter:" << Line1 + Line2 + Line3 << std::endl;
    }

};

int main()
{
    Dot new_dot[6];
    Line new_line[3];
    Triangle new_triangle;

    for (int i = 0; i < 6; ++i)
    {
        std::cout << "Enter coordinates for dot" << i << ':' << std::endl;
        std::cin >> new_dot[i].x >> new_dot[i].y;
        std::cout << std::endl;
    }

    for (int i = 0; i < 3; ++i)
    {
        new_triangle.Lines[i] = new_line[i].distance(new_dot[i * 2].x, new_dot[i * 2 + 1].x, new_dot[i * 2].y, new_dot[i * 2 + 1].y);
        std::cout << new_triangle.Lines[i] << std::endl;
    }
    new_triangle.Perimetr(new_triangle.Lines[0], new_triangle.Lines[1], new_triangle.Lines[2]);

    
}
