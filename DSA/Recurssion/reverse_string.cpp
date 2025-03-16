#include <iostream>
using namespace std;
void reverse(string& str,int i){
    int j = str.length()-i-1;
    if(i>j)
        return;
    swap(str[i],str[j]);
    i++;
    reverse(str,i);
}
int main(){
    string str;
    getline(cin,str);

    reverse(str,0);
    cout<<str<<endl;
}