#include <bits/stdc++.h>
using namespace std;
void bubblesort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        bool swapped=false;
        for(int j=0 ;j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(swapped==false)
        {
            break;
        }
    }
}
void printarray(int arr[],int n)
{
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[6]={9,1,3,5,0,10};
    bubblesort(arr,6);
    printarray(arr,6);


}