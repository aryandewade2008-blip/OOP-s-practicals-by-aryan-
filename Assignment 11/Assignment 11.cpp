#include <iostream>
using namespace std;
// Function Template
template <typename T>
void mySwap(T &a, T &b)
{
T temp = a;
a = b;
b = temp;
}
int main()
{
// Swapping Employee IDs
int emp1 = 101, emp2 = 102;
mySwap(emp1, emp2);
cout << "Employee IDs after swap: "
<< emp1 << " " << emp2 << endl;
// Swapping Room Numbers
int room1 = 201, room2 = 205;
mySwap(room1, room2);
cout << "Room Numbers after swap: "
<< room1 << " " << room2 << endl;
// Swapping Task Priorities
float p1 = 1.5, p2 = 2.5;
mySwap(p1, p2);
cout << "Task Priorities after swap: "
<< p1 << " " << p2 << endl;
return 0;
}
