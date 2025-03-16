#include <iostream>
int sqroot(int x,int s,int e,int ans){
   
   if(s>e) return ans;
   int mid = s + (e-s)/2;
   if(mid*mid == x) return mid;
   if(mid*mid>x){
        return sqroot(x,s,mid-1,ans);
   }
   else{
    return sqroot(x,mid+1,e,mid);
   }

}
using namespace std;
int main(){
    int x;
    cin>>x;

    int ans = sqroot(x,0,x,0);
    cout<<"The square root is : "<<ans<<endl;
}