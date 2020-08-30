#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]= {1,3,-1,-3,5,3,6,7};
    int Size=sizeof(arr)/sizeof(arr[0]);
    int w=3;
    int M[Size-w+1];

    list<int>L;
    for(int i=0; i<w; i++)
    {
        while(!L.empty() && L.back()<arr[i])
        {
            L.pop_back();
        }
        L.push_back(arr[i]);
    }
    for(int i=w; i<Size; i++)
    {
        M[i-w]=L.front();
        while(!L.empty() && L.back()<arr[i])
        {
            L.pop_back();
        }
        while(!L.empty() && L.size()>w)
        {
            L.pop_front();
        }
        L.push_back(arr[i]);

    }
    M[Size-w]=L.front();
    for(int i=0; i<Size-w+1; i++)
    {
        cout<<M[i]<<" ";
    }
    return 0;
}
