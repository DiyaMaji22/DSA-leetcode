#include <bits/stdc++.h>
using namespace std;
void selectionsort(int arr[],int n)
{
    
    for(int i=0;i<n;i++)
    {
        int minindex=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[minindex])
            {
                minindex=j;
            }
        }
        swap(arr[i],arr[minindex]);
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
    int arr[6]={9,1,3,5,0,8};
    selectionsort(arr,6);
    printarray(arr,6);


}