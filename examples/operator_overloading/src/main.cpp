
#include <iostream>


class Point
{
    public:
    Point(){}
    Point(int x, int y): x_(x), y_(y){}

    int getX()
    {
        return x_;
    }

    Point operator+(Point& other) const
    {
        return(Point(x_ + other.x_, y_ + other.y_));
    }

    private:
    int x_;
    int y_;
};


int main(int argc, char** argv)
{
    Point point1(1,2);
    Point point2(1,2);
    Point point3;
    point3 = point1 + point2;

    std::cout << point3.getX() << std::endl;

    return 0;
}