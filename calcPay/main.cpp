/*
Program to take input from console, then
calculate the gross pay and finally return
the calculated pay back to the console
*/

#include <iostream> //Tell preprocessor to include the header file

using namespace std; //Use the standard library namespace

int calculatePay(int a, int b){ //Function to calculate pay
    int pay; //Declare variable pay
    if (b > 40) { //Evaluate if time is greater than 40 hours
        pay = (40 * a) + (((b - 40) * a) * 1.5); //If so, calc for overtime
    } else { // Otherwise..
        pay = a * b; // Calc for straight time.
    }
    return pay; // Return the result back to main.
}

int main() // Main program which returns integer
{
    int rate, hours; //Declare variables
    cout << "Please enter the hourly rate: "; //Print question
    cin >> rate; //Retrieve answer and put as value in variable
    cout << "Please enter the total hours worked: "; //Print second question
    cin >> hours; //Retrieve answer and put as value in variable
    cout << "The gross pay is: " << calculatePay(rate,hours); //Print result and append pay calc from function
    return 0; //Return success
}
