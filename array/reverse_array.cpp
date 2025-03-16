#include <iostream>
using namespace std;
int main()
{
    int arr[] = {5,2,34,1};

    int n = sizeof(arr)/4;

    for(int i=0; i<n/2; i++ ){

        int temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }
    for(int i=0; i<n; i++ ){
        cout<<arr[i]<<" ";
    }

}