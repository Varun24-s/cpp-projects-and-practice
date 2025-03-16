#include <iostream>
using namespace std;
int main(){
    int arr[] = {4,8,6,2};

    for(int i =0; i<3; i++){
        int minTerm = i;
        for( int j= i+1; j<4; j++){
            if(arr[j]<arr[minTerm]) minTerm = j;
        }
     swap( arr[minTerm],arr[i]);
    }
    for(int k=0; k<4; k++){
        printf("%d",arr[k]);
    }
}