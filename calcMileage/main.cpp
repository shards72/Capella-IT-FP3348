#include <iostream>

using namespace std;

int main()
{
    int miles, gallons;
    float mpg;
    cout << "Enter miles: ";
    cin >> miles;
    cout << "Enter gallons: ";
    cin >> gallons;
    mpg = miles / gallons;
    cout << "Miles per gallon: " << mpg;
    return 0;
}
