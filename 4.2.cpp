#include<iostream>
using namespace std;
class person
{
    string name;
    int age;

    public:
    person(string n, int a)
    {
        name=n;
        age=a;
    }
    void displaydetails() const
    {
        cout<<"name: "<<name<<" age: "<<age<<endl;
    }
};

class employee:public person
{
    int id;

    public:
    employee(string n , int a , int ID) : person(n, a) {
    id= ID;
}

void displayEmployee() const {
    displaydetails();
    cout << "Employee ID: " << id << endl;
}
};


class manager:public employee
{
    string department;

    public:
    manager(string n, int a, int ID, string d):employee(n, a, ID)
    {
        department=d;
    }

    void displaymanager() const{
        displayEmployee();
        cout<<"department :"<<department<<endl;
    }

};
int main()
{
    manager m("Jenny", 20, 12605, "Engineering");
    cout<<"---Manager details---"<<endl;
    m.displaymanager();
    return 0;
}
