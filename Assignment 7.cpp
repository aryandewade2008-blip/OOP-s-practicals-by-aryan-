#include <iostream>
#include <string>
using namespace std;
class Person
{
protected:
string name;
int age;
string contact;
public:
Person(string n, int a, string c)
{
name = n;
age = a;
contact = c;
}
};
class Student : public Person
{
private:
int rollNumber;
string branch;
public:
Student(string n, int a, string c, int r, string b)
: Person(n, a, c)
{
rollNumber = r;
branch = b;
}
void display()
{
cout << "Name: " << name << endl;
cout << "Age: " << age << endl;
cout << "Contact: " << contact << endl;
cout << "Roll Number: " << rollNumber << endl;
cout << "Branch: " << branch << endl;
}
};
int main()
{
Student s1("Aryan", 18, "7558554338", 101, "Computer Science");
s1.display();
return 0;
}
