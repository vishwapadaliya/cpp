#include<iostream>
using namespace std;

int superdigit(int num)
{
    if(num<10)
    {
        return num;
    }
    int sum=0;
   while (num>0)
   {
   sum+=num%10;
   num/=10;
   }
   return superdigit(sum);
}

int main()
{
    int n;
    cout<<"enter the number :";
    cin>>n;

    int result=superdigit(n);
    cout<<"super digit: "<<result<<endl;
cout << endl << "Vishwa padaliya" << " " << "ID No: 24CE068" << endl;
    return 0;
}
