#include<bits/stdc++.h>
using namespace std;
vector<int>op;
void subseq(vector<int>ip,vector<int>op)
{
    if(ip.empty())
    {
        cout<<endl<<"[";
        for(int i=0;i<op.size();i++)
        {
            cout<<op[i]<<" ";
        }
        cout<<"]";
        return;
    }
    else
    {
        vector<int> op1=op;
        vector<int> op2=op;
        op2.push_back(ip[0]);

        ip.erase(ip.begin());
        subseq(ip,op1);
        subseq(ip,op2);
    }
}
int main()
{
    vector<int> ip;
    ip.push_back(1);
    ip.push_back(2);
    ip.push_back(3);
    subseq(ip,op);
}
