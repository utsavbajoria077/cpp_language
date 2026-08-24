#include <iostream>
using namespace std;
int main()
{
int n;
cout<<"enter total number of elements: ";
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cout<<"enter element"<<i+1<<":";
    cin>>arr[i];
}
int a[n];
for(int i=0;i<n;i++){
    a[i]=arr[n- 1 -i];
    cout<<a[i];
    
}
    return 0;
}
