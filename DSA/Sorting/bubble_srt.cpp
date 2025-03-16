#include <iostream>
using namespace std;
int main(){
    int arr[] = {4,8,6,2};

    for(int i =1; i<4; i++){
        
        for( int j=0; j<4-i; j++){
            if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]);
        }
     
    }
    for(int k=0; k<4; k++){
        printf("%d",arr[k]);
    }
}