#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    int id;
    string name;
    string department;
    double salary;

public:
    // Manual setup function to populate data
    void setDetails(int empId, string empName, string empDept, double empSal)
    {
        id = empId;
        name = empName;
        department = empDept;
        salary = empSal;
    }

    // Function to display employee info (authorized access)
    void displayInfo(bool authorized) const
    {
        if (authorized)
        {
            cout << "ID: " << id << "\n"
                 << "Name: " << name << "\n"
                 << "Department: " << department << "\n"
                 << "Salary: $" << salary << "\n"
                 << "---------------------------\n";
        }
        else
        {
            cout << "Access Denied: You are not authorized to view this record.\n";
        }
    }
};

int main()
{
    // Using a standard fixed-size array instead of vector
    const int MAX_EMPLOYEES = 2;
    Employee staffList[MAX_EMPLOYEES];

    // Populating employee details manually
    staffList[0].setDetails(101, "Alice Smith", "HR", 55000.0);
    staffList[1].setDetails(102, "Bob Jones", "Engineering", 75000.0);

    // Simulate HR authorization check
    bool isAuthorizedHR = true;
    cout << "--- Employee Records (HR View) ---\n";
    
    for (int i = 0; i < MAX_EMPLOYEES; ++i)
    {
        staffList[i].displayInfo(isAuthorizedHR);
    }

    return 0;
}
