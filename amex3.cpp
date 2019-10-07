#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;cin>>a;
    int b;cin>>b;
    int c;cin>>c;
    priority_queue<pair<int,char>> pq;
    if(a!=0){pq.push({a,'a'});}
    if(b!=0){pq.push({b,'b'});}
    if(c!=0){pq.push({c,'c'});}
    char temp='?';
    string res="";
    while(!pq.empty())
    {

        auto p1=pq.top();pq.pop();
        if(p1.second==temp)
        {
            // cout<<p1.second<<endl;
            if(!pq.empty())
            {
                auto p2=pq.top();
                pq.push(p1);
                p1=p2;
            }else{
                break;
            }
        }
        if(p1.first>=2)
        {
            res+=p1.second;
            res+=p1.second;
            p1.first=p1.first-2;
            // cout<<p1.second<<endl;
        }
        else if(p1.first==1)
        {
            res+=p1.second;
            p1.first=p1.first-1;
        }
        if(!pq.empty())
        {
            auto p3=pq.top();
            pq.pop();
            res+=p3.second;
            p3.first=p3.first-1;
            temp=p3.second;
            if(p3.first>0)
            {
                pq.push(p3);
            }
            if(p1.first>0){pq.push(p1);}
            // cout<<p3.second<<endl;
        }
        else
        {
            break;
        }

    }
    cout<<res;
}
