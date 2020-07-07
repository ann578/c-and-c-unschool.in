#include<iostream>
using namespace std;
float area(int radius)
{
    cout << "the area of circle is " << 2*3.14*radius;
    cout << "sq. units";
    cout << "\n";
}
float area(int base,int height )
{
    cout << "the area of triangle is " << 0.5*base*height;
    cout << "sq. units";
    cout << "\n";
}
float area(int length,double width)
{
    cout << "the area of rectangle is " << length * width;
    cout << "sq. units";
    cout << "\n";
}
int main()
{
    area(4);
    area(3,6);
    area(9,3.5);
    return 0;
}
