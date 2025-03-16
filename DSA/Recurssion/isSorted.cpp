#include <iostream>
using namespace std;
bool isSorted(int n, int arr[]){
    if(n==0 || n==1){
        return true;
    }
    if(arr[0]>arr[1]) return false;
    else {
        return isSorted(n-1,arr+1);
    }
}

int main(){
    int n=5;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    if(isSorted(n,arr)) cout<<"Sorted"<<endl;
    else cout<<"Not sorted"<<endl;
    
}