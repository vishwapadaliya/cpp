#include<iostream>
#include<cmath>
using namespace std;

class shape
{
    protected:
    double radius;

    public:
    shape(double r=0.0)
    {
        radius=r;
    }

    void inputradius()
    {
        cout<<"enter the radius of the circle: ";
        cin>>radius;
        cout<<"radius is: "<<radius<<endl;
    }

    double getradius()const
    {
        return radius;
    }

};


class circle:public shape
{
    using shape::shape;
    public:

    double area() const
    {
        double a=M_PI*radius*radius;
        cout<<"area of circle: "<<a<<endl;
        return 0;
    }

};

int main()
{
    circle obj;
    obj.inputradius();
    obj.area();
    cout << endl << "Vishwa padaliya" << " " << "ID No: 24CE068" << endl;
   return 0;

}
