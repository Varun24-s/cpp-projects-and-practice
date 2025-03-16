#include <iostream>
#include <vector>
using namespace std;

void merge_array(int nums1[],int n,int nums2[],int m,int ans[]){
    int i=0;
    int j=0;
    int k=0;
    while(i<n && j<m){
        if(nums1[i]<nums2[j]){
           ans[k++] = nums1[i++];
        }
        else{
             ans[k++] = nums2[j++];
        }
    }
    while(i<n){
       ans[k++] = nums1[i++];
    }
     while(j<m){
        ans[k++] = nums2[j++];
    }
}
void print(int ans[],int n){
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}

int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int nums1[n],nums2[m];
     for(int i=0;i<n;i++){
        cin>>nums1[i];
    }
     for(int i=0;i<n;i++){
       cin>>nums2[i];
    }
    int ans[m+n];
    merge_array(nums1,n,nums2,m,ans);
    print(ans,m+n);
}