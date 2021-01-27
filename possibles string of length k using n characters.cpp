
#include<bits/stdc++.h>
using namespace std;
void func(vector<int> in,string s,int k)
{
    if(k==0)
    {
        cout<<"[";
        for(int i=0;i<s.size();i++)
        {
            cout<<s[i];
        }
        cout<<"]";
    }
    else
    {
        for(int i=0;i<in.size();i++)
        {
            string prefix = s + to_string(in[i]);
            func(in,prefix,k-1);
        }
    }
}
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    func(v,"",3);
    return 0;
}

