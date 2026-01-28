#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num=5;
    int *p=&num;
    int *q=p;
    cout<<num<<endl;
    cout<<p<<endl;
    cout<<q<<endl;
    int arr[2]={0,1};
    cout<<arr<<endl;
    cout<<*arr<<endl;
}