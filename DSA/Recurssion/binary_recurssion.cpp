#include <iostream>
using namespace std;
bool binarysearch(int s, int e, int arr[], int k){
    if(s>e) return false;
    int mid = s + (e-s)/2;
    if(arr[mid] == k) return true;

    if(arr[mid]>k){
        return binarysearch(s,mid -1,arr,k);
    }
    else{
        return binarysearch(mid +1,e,arr,k);
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
    int s = 0;
    int e = n-1;
    cin>>key;
    if(binarysearch(s,e,arr,key)) cout<<"Present";
    else cout<<"Not present";
}
