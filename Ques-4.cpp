// Given an array, predict if the array contains duplicates or not.
#include<iostream>
using namespace std;
int main(){
    int arr[]={2,4,5,7,7,9};
    int n=sizeof(arr)/4;
    bool flag=false;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
            flag=true;
            break;
            }
        } if(flag==true) break; 
    }
    if(flag==true) cout<<"duplicate Present";
    else cout<<"No duplicate";
}