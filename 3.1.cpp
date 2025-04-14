#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    double basicSalary;
    double bonus;
    static constexpr double DEFAULT_BONUS = 5000.0;

public:

    Employee(string empName, double salary, double empBonus = DEFAULT_BONUS) {
        name = empName;
        basicSalary = salary;
        bonus = empBonus;
    }


    double getTotalSalary() const {
        return basicSalary + bonus;
    }


    void displayInfo() const {
        cout << "Name: " << name << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Bonus: " << bonus << endl;
        cout << "Total Salary: " << getTotalSalary() << endl;
        cout << "--------------------------" << endl;
    }
};

int main() {

    vector<Employee> employees;


    employees.emplace_back("Alice", 70000);
    employees.emplace_back("Bob", 85000, 10000);
    employees.emplace_back("Charlie", 65000);

    for (const auto& emp : employees) {
        emp.displayInfo();
    }
 cout << "\nName: vishwa padaliya" << endl
         << "ID: 24CE068";
    return 0;
}
