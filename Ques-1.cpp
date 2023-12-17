// Calculate the product of all the elements in the given array.
#include <iostream>
using namespace std;
int main()
{
    int Product=1;
    int n;
    cout<<"Enter Elements : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    for(int i=0;i<=n-1;i++){
        Product = Product*arr[i];
    }
    cout<<Product;
}
