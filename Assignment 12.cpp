#include <iostream>
#include <string>
using namespace std;
// Class Template
template <typename T>
class Data
{
private:
T value;
public:
// Constructor
Data(T v)
{
value = v;
}
// Display Function
void display()
{
cout << "Stored Value: " << value << endl;
}
};
int main()
{
// Storing Integer Value
Data<int> d1(100);
// Storing Decimal Value
Data<double> d2(95.75);
// Storing Text Value
Data<string> d3("Computer Science");
d1.display();
d2.display();
d3.display();
return 0;
}
