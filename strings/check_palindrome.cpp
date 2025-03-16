#include <iostream>
using namespace std;
int length(char str[]){
    int count = 0;
    for(int i=0;str[i]!='\0';i++){
        count++;
    }
    return count;
}
int check_palindrome(char str[],int n){
   int s = 0;
   int e = n-1;
   int check = 1;
   while(s<=e){
    if(str[s++]!=str[e--]) check = 0;
   }
   return check;
}
void toLowercase(char str[],int n){
    for(int i=0;i<n;i++){
        if(str[i]>='a' && str[i]<='z'){}
        else{
            str[i]=str[i]-'A'+'a';
        }
    }
}
int main(){
    char str[20];
    cout<<"Enter the string"<<endl;
    cin>>str;

    int len = length(str);
    toLowercase(str,len);
    cout<<str<<endl;
    int check = check_palindrome(str,len);
   
    if(check) cout<<"String is palindrome";
    else cout<<"String is not a palindrome";
}