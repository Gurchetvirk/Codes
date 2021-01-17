#include <bits/stdc++.h>
using namespace std;

void subarray(vector<int> arr,int start,int end)
{
    if(end == arr.size())
    {
        return;
    }
    else if(start > end)
    {
        subarray(arr,0,end+1);
    }
    else
    {
        cout<<"[";
        for(int i=start;i<=end;i++)
        {
            cout<<arr[i]<<",";
        }
        cout<<arr[end]<<"]";
        subarray(arr,start+1,end);
    }
}

int main() {
	//code
	vector<int> arr ={1, 2, 3};
	subarray(arr,0,0);
}
