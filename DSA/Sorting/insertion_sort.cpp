#include <iostream>
using namespace std;
int main(){
    int arr[] = {4,8,6,2,1,67,43,78};

    for(int i=1; i<8; i++){
        int temp = arr[i];
        int j= i-1;
        while(j>=0){
            if(arr[j] > temp) arr[j+1] = arr[j];
            else break;
            j--;
        }
        arr[j+1] = temp;

    }
     for(int k=0; k<8; k++){
        printf("%d ",arr[k]);
    }

}