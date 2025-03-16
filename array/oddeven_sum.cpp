#include <iostream>
using namespace std;
int main()
{
    int arr[] = {12,13,5,6,8,15};
   

    int n = sizeof(arr)/4;
    int sum_even=0;
    int sum_odd=0;

    for(int i=0; i<n; i++){
        if( i%2 == 0 ){
            sum_even += arr[i];
            
        }
        else{
            sum_odd += arr[i];
            
        }
        
    }
    cout<<sum_even<<endl;
    cout<<sum_odd<<endl;
    int diff = sum_even - sum_odd;
    if( diff>0) cout<<diff;
    else cout<<(-1)*diff;
    
}