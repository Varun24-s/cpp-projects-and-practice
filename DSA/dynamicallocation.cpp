#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    int* ptr = (int*)malloc(n*sizeof(int));

    for (int i = 0; i < n; i++){
        cout<<ptr[i]<< " " ;
    }
    cout<<endl;
    free(ptr);

}