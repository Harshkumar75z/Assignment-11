// WAP to find the smallest missing positive element in the sorted Array that contains only positive elements.
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,4,5};
    int n=sizeof(arr)/4;
    int x=1;
    bool flag=false;
    for(int i=0;i<n;i++){
        if(arr[i]<=0) continue;    
    if(x!=arr[i])
    {
        flag=true;
        cout<<i+1;
        break;
        }
        else x++;
    }
    if(flag==false) cout<<"No smallest missing positive element in the sorted Array ";
}
