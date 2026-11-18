#include<iostream>
#include<algorithm>
#include<fstream>
using namespace std;

template<class T>
void sort(T arr[],int n)
{
    if(n<=0)
    throw n;
    
    for(int i=0;i<n;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            if(arr[j]>arr[i])
            {
                T temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main()
{
    try
    {
    int arr[]={1, 2 ,6 ,5 ,4 ,8};
    int n=6;
    
    float arr2[]={4.5,2.5,6.8,1.0};
    int m=4;
    sort(arr,n);
    sort(arr2,m);
    }
    catch(int z)
    {
        cout<<"array size cant be 0";
    }
}
