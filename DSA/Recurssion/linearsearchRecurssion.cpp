#include <iostream>
using namespace std;
bool linearsearch(int n,int arr[],int k){
    if(n==0) return false;
    if(arr[0]== k){
        return true;
    }
    else{
        return linearsearch(n-1,arr+1,k);
    }
}
int main(){
    int n=5;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;
    if(linearsearch(n,arr,key)) cout<<"Present";
    else cout<<"Not present";
}