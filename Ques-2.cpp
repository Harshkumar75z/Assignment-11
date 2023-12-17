// Find the second largest element in the given Array in one pass.
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int arr[]={1,3,5,7,9};
    int n=sizeof(arr)/4;
    int max=INT_MIN;
    int smax=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            smax=max;
            max=arr[i];
        }
    }
    cout<<max<<endl;
    if(smax==INT_MIN)
    cout<<"No Second largest exist";
    else cout<<smax<<endl;

}