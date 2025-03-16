#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1,3,0,10,2,5,6};

    int n= sizeof(arr)/4;

    int x;
    cout<<"Enter the number :"<<endl;
    cin>>x;

    int count = 0;

    for(int i=0; i<n; i++){

        if( arr[i]>x ) count ++;

    }
    cout<<count;
}