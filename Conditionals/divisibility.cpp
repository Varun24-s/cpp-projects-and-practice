// Write a C program that verifies an input number is divisible by 3 or 7 and falls between 100 and 500.
//  If the condition is satisfied the program should print 1 otherwise it should print 0

#include <iostream>
using namespace std;
int main()
{
     int n;
    cout << "Enter the number :"<<endl;
    cin >> n;

    if((n%3 || n%7) && (n>=100 && n<=500)){
        cout<<"Happy:)";
    }

    else{
        cout<<"Sad:(";

    }

}