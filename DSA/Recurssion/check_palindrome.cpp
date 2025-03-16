#include <iostream>
using namespace std;

void lowerscase(int n, string& str){
    for(int i=0;i<n;i++){
        if(str[i]>='a' && str[i]<='z'){}
        else{
            str[i] = str[i]-'A'+'a';
        }
    }
}
bool checkpalindrome(string& str,int i,int j){
    if(i>j) return true;
    if(str[i]!=str[j]) return false;
    i++;
    j--;
    return checkpalindrome(str,i,j);
}

int main(){
    string str;
    getline(cin,str);
    lowerscase(str.length(),str);
    bool ans = checkpalindrome(str,0,str.length()-1);
    if(ans) cout<<"Is Palindrome";
    else cout<<"Not a palindrome";
}

    