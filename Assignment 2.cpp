
#include <iostream>
#include <string>
#include <limits>
using namespace std;

class Student
{
private:
    int rollNumber;
    string name;
    string course;
    int admissionYear;

public:
    
    void inputDetails()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNumber;

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Course: ";
        getline(cin, course);

        cout << "Enter Admission Year: ";
        cin >> admissionYear;

        cout << "---------------------\n";
    }

    
    void displayDetails() const
    {
        cout << "Roll Number: " << rollNumber << "\n";
        cout << "Name: " << name << "\n";
        cout << "Course: " << course << "\n";
        cout << "Admission Year: " << admissionYear << "\n";
        cout << "---------------------\n";
    }

    
    int getRollNumber() const
    {
        return rollNumber;
    }
};

int main()
{
    const int MAX_STUDENTS = 100;
    Student database[MAX_STUDENTS];

    int currentCount = 0;
    int choice;

    cout << "=== College Record Digitization System ===\n";

    do
    {
        cout << "\n1. Add New Student Record\n";
        cout << "2. Display All Student Records\n";
        cout << "3. Search Student by Roll Number\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";

        if (!(cin >> choice))
        {
            cout << "Invalid input! Please enter a number.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        cout << "\n";

        switch (choice)
        {
        case 1:
            if (currentCount < MAX_STUDENTS)
            {
                cout << "--- Enter Details for Student "
                     << currentCount + 1 << " ---\n";

                database[currentCount].inputDetails();
                currentCount++;

                cout << "Record saved successfully!\n";
            }
            else
            {
                cout << "Database full! Cannot add more records.\n";
            }
            break;

        case 2:
            if (currentCount == 0)
            {
                cout << "No student records available.\n";
            }
            else
            {
                cout << "--- Total Student Records ---\n";

                for (int i = 0; i < currentCount; i++)
                {
                    database[i].displayDetails();
                }
            }
            break;

        case 3:
        {
            if (currentCount == 0)
            {
                cout << "No student records available to search.\n";
                break;
            }

            int searchRoll;
            bool found = false;

            cout << "Enter Roll Number to search: ";

            if (!(cin >> searchRoll))
            {
                cout << "Invalid roll number!\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                break;
            }

            cout << "\n";

            for (int i = 0; i < currentCount; i++)
            {
                if (database[i].getRollNumber() == searchRoll)
                {
                    cout << "--- Record Found ---\n";
                    database[i].displayDetails();
                    found = true;
                    break;
                }
            }

            if (!found)
            {
                cout << "Student with Roll Number "
                     << searchRoll << " not found.\n";
            }

            break;
        }

        case 4:
            cout << "Exiting system. Goodbye!\n";
            break;

        default:
            cout << "Invalid choice! Please choose between 1 and 4.\n";
        }

    } while (choice != 4);

    return 0;
}
