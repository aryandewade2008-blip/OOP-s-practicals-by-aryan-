#include <iostream>
using namespace std;
// Function Template
template <typename T>
T myMax(T x, T y)
{
return (x > y) ? x : y;
}
int main()
{
// Comparing student marks
cout << "Higher Marks: "
<< myMax<int>(75, 90) << endl;
// Comparing product prices
cout << "Higher Price: "
<< myMax<double>(499.50, 699.75) << endl;
// Comparing sensor readings
cout << "Higher Sensor Reading: "
<< myMax<float>(25.5f, 30.8f) << endl;
return 0;
}
