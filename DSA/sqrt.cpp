#include <iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int ans = 0;
    int s = 0;
    int h = x;
    while(s<=h){
        int mid = s + (h-s)/2;
        if(mid*mid == x) mid = ans;
        else if(mid*mid > x) h = mid -1;
        else{
            s = mid +1;
            ans = mid;
        }
    }
    cout<<"The square root is : "<<ans<<endl;
}