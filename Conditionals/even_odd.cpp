#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number :"<<endl;
    cin >> n;

    if(n%2==0)
    {
        cout << "The number is even";
    }
    else{
        cout << "The number is odd";
    }
}