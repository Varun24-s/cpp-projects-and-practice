#include <iostream>
using namespace std;
int fact(int n){
    if(n==1 || n==0){
        return 1;
    }
    return n*fact(n-1);
}
int combinations(int n,int r){
    int c = fact(n)/(fact(r)*fact(n-r));
    return c;
}
int main(){
    int n;
    cin>> n;
    for(int i =0; i<n; i++){
        for(int k = n-i-1; k>0; k--){
            cout<<" ";
        }
        for(int j =0; j<=i;j++){
            cout<<combinations(i,j)<<" ";
        }
       
        cout<<"\n";

    }
}