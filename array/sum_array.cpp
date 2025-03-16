#include <iostream>
using namespace std;
int main()
{
    int arr[] = {6,7,90,87,75,45,56,78};

    int n = sizeof(arr)/4;
    int sum=0;

    for(int i=0; i<n; i++){
        sum += arr[i];
    }

    cout<<sum;
}