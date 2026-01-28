#include <bits/stdc++.h>
using namespace std;
void reverseanarray(vector<int>& arr)
{
    int length=arr.size();
    // by two pointers
    int start=0;
    int end=length-1;
    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
void printarray(vector<int>arr)
{
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    vector<int>arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    arr.push_back(6);
    arr.push_back(7);
    reverseanarray(arr);
    printarray(arr);
}