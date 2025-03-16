#include <iostream>
using namespace std;
int main()
{
    int arr[] = {6,7,8,8,7,4,5,7};

    int n = sizeof(arr)/4;
    int product=1;

    for(int i=0; i<n; i++){
        product *= arr[i];
    }

    cout<<product;
}