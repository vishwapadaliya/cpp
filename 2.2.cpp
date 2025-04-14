#include<iostream>
#include<string>
#include<vector>
using namespace std;
class student{
    string name;
    int roll_number;
    float marks;
public:

    void setdetail(string sname, int roll_num)
    {
        name=sname;
        roll_number=roll_num;

    }
    void avg_marks()
    {
        float m[3];
        float m1,m2,m3,avg=0,savg;
        cout<<"Enter the student's marks: "<<endl;
        for(int i=1; i<=3; i++)
        {
            cout<<"Enter the marks: ";
            cin>>m[i];
            avg+=m[i];

        }

         savg=(avg/3);
        cout<<"Average marks is: "<<savg<<endl;

    }
    void desplay()
    {
        cout<<"name of the student is: "<<name<<endl;
        cout<<"number of the student is: "<<roll_number<<endl;
    }
};
int main()
{
    string name;
    int roll_number;
    float marks;
    student s1,s2,s3;
    s1.setdetail("Kairavi", 24059);
    s1.desplay();
    s1.avg_marks();
    s2.setdetail("Akshara", 24065);
    s2.desplay();
    s2.avg_marks();
    s3.setdetail("Hima", 24054);
    s3.desplay();
    s3.avg_marks();
     cout << endl << "Vishwa padaliya" << " " << "ID No: 24CE068" << endl;
    return 0;

}
