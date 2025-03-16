#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the numner" <<endl;
    cin >> n;

    bool isPrime = 1;

    for( int i=2; i<n; i++){

        if( n%i ==0 ){
            isPrime = 0;
        }
    }
    if(isPrime == 1){
        cout<<"Prime";
    }
    else cout<<"Not Prime";
}