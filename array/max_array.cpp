#include <iostream>
using namespace std;
int main()
{
    int arr[] = {6,7,90,87,75,45,56,78};

    int n = sizeof(arr)/4;
    int maximum = INT_MIN;

    for(int i=0; i<n; i++){
        if(max(maximum,arr[i])>maximum) maximum = arr[i];
    }

    cout<<maximum;
}