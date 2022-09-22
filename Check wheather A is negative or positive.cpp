// check wheather A is positive or negative
#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter the value of A" << endl;
    cin >> a;
    if (a > 0)
    {
        cout << "A is a positive number" << endl;
    }
    else if (a < 0)
    {
        cout << "A is a negative number" << endl;
    }
    else
    {
        cout << "A is 0" << endl;
    }
}