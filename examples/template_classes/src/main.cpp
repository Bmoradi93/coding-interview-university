#include <iostream>


template<typename T>
class Point
{
    public:
    Point(T x, T y): x_(x), y_(y){}
    T getX()
    {
        return x_;
    }

    protected:
    T x_;
    T y_;
};

int main(int argc, char** argv)
{
    Point<int> point1(1,2);
    std::cout << point1.getX();
    return 0;
}