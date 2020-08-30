#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>Q;
    Q.push(1);
    Q.push(2);
    Q.push(3);
    Q.push(4);
    Q.push(5);
    Q.push(6);
    Q.push(7);
    Q.push(8);
    int k=3;
    stack<int>st;
    for(int i=0; i<k; i++)
    {
        st.push(Q.front());
        Q.pop();
    }
    while(!st.empty())
    {
        Q.push(st.top());
        st.pop();
    }
    for(int i=0; i<Q.size()-k; i++)
    {
        Q.push(Q.front());
        Q.pop();
    }
    while(!Q.empty())
    {
        cout<<Q.front()<<" ";
        Q.pop();
    }
    cout<<endl;

}
