#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(6);
    s.insert(6);
    s.insert(9);
    s.insert(0);
    for(auto i:s)
    {
        cout<<i<<endl;
    }
    cout<<endl;
    
    s.erase(s.begin());
    cout<<"is this number present: "<<s.count(5)<<endl;

}