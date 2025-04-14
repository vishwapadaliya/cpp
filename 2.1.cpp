#include<iostream>
#include<string>
using namespace std;
class rectangles
{
    float length, width;
    int size;
public:

void setdetails(float l, float w){
        length=l;
        width=w;
    }

void areaOfrectangles(float area)
{
     area=length*width;
    cout<<"Area of rectangle is: "<<area<<endl;
}

void perimeterOfrectangles(float peri){
     peri=2*(length+width);
    cout<<"Perimeter of rectangle is: "<<peri<<endl<<endl;
}

void displaydetails(){
    cout<<"Length of rectangle is: "<<length<<endl;
    cout<<"Width of rectangle is: "<<width<<endl;
}

};

int main()
{
    float area,peri;

    rectangles r1,r2,r3;

    r1.setdetails(10,20);
    r1.displaydetails();
    r1.areaOfrectangles(area);
    r1.perimeterOfrectangles(peri);


    r2.setdetails(10,20);
    r1.displaydetails();
    r2.areaOfrectangles(area);
    r2.perimeterOfrectangles(peri);


    r3.setdetails(10,20);
    r1.displaydetails();
    r3.areaOfrectangles(area);
    r3.perimeterOfrectangles(peri);


    return 0;
}
