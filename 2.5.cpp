#include<iostream>
#include<string>
#include<vector>
#include<cmath>
using namespace std;
class loan_management
{
    string applicant_name;
    double loan_id,total_loan;
    double annual_interest_rate,loan_tenure;


public:
    void setdetails(string name, double id, double p, double r, double t)
    {
        applicant_name=name;
        loan_id=id;
        total_loan=p;
        annual_interest_rate=r;
        loan_tenure=t;
    }
    void EMI(double p, double r, double t)
    {
        double emi=(total_loan*annual_interest_rate*(pow((1+annual_interest_rate),loan_tenure)))/((pow((1+annual_interest_rate),loan_tenure))-1);
        cout<<"total emi is: "<<emi<<endl<<endl;
    }
    void displaydetails()
    {
        cout<<"Name of the applicant: "<<applicant_name<<endl;
        cout<<"Loan ID: "<<loan_id<<endl;
        cout<<"Total Loan: "<<total_loan<<endl;
        cout<<"Annualy interest rate is"<<annual_interest_rate<<"%"<<endl;
        cout<<"Loan tenure is "<<loan_tenure <<" years: "<<endl;
    }
};
int main()
{
    loan_management n[3];
    double P,R,T;
    n[0].setdetails("kairavi", 12356, 20000, 3, 5);
    n[0].displaydetails();
    n[0].EMI(P,R,T);
    n[1].setdetails("Akshara", 42591, 15000, 3.5, 2);
    n[1].displaydetails();
    n[1].EMI(P,R,T);
    n[2].setdetails("Hima", 75896, 35000, 4, 5);
    n[2].displaydetails();
    n[2].EMI(P,R,T);
     cout << endl << "Vishwa padaliya" << " " << "ID No: 24CE068" << endl;
    return 0;
}
