#include <iostream>
using namespace std;
void subsequence(string str, string output, int index){
    //base case
    
    if(index >= str.length()) {
        cout<<output<<" ";
        return;
    }

    //exclude
    subsequence(str,output+str[index],index+1);

    //include
  
    subsequence(str,output,index+1);

}
int main(){
    string str;
    getline(cin,str);

    int index= 0;
    string output="";
    subsequence(str,output,index);
  

}