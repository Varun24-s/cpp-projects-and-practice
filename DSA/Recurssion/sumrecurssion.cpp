#include <iostream>
using namespace std;
int sum(int n,int arr[]){
    if(n==0) return 0;
    return arr[0]+sum(n-1,arr+1);
}
int main(){
    int n=5;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int ans = sum(n,arr);
    cout<<ans<<endl;
}