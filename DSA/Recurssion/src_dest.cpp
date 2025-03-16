#include <iostream>
using namespace std;
void reachHome(int s, int d){
    cout<<"source :"<<s<<" destination :"<<d<<endl;
    if(s==d) {
        cout<<"Reached"<<endl;
        return;
    }
    s++;
    reachHome(s,d);
}
int main(){
    
    int s,d;
    cin>>s>>d;

    reachHome(s,d);
}