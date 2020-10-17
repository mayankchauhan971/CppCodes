// Language C++
// Time complexity O(Nlog(N))
// Space Complexity O(N) To represent deck of cards
// Function which solves the problem => findNbrDist
// Dp function => PreCompute

#include<bits/stdc++.h>
using namespace std;
 
vector<int> tree[200001];
int depth[200001];
int ans[200001];
vector<int> preDp, postDp;
 
void preCompute(int src, int par)
{
    int ht = 0;
    for(int c : tree[src])
        if(c != par)
        {
            preCompute(c, src);
            ht = max(ht, 1 + depth[c]);
        }
    depth[src] = ht;
}
 
void findNbrDist(int src, int par, int par_ans)
{
    // Get depth of child nodes.
    for(int child : tree[src])
    {
        if(child != par)
        {
            preDp.push_back(depth[child]);
            postDp.push_back(depth[child]);
        }
    }
    // Build DP for preFix and postFix
    for(int i = 1; i < preDp.size(); i++)
        preDp[i] = max(preDp[i], preDp[i-1]);

    for(int i = (int)postDp.size() - 2; i >= 0; i--)
        postDp[i] = max(postDp[i], postDp[i+1]);
 
    // Find ans for every child c
    int c = 0;
    for(int child : tree[src])
        if(child != par)
        {

            int len1 = (c == 0) ? INT_MIN : preDp[c - 1];
            int len2 = (c == (int)postDp.size() - 1) ? INT_MIN : postDp[c + 1];
            int temp_ans = 1 + max(par_ans, max(len1,len2));
 
            findNbrDist(child, src, temp_ans);
            c++;
    }
 
    //eval ans for src
    ans[src] = 1 + max(par_ans, (preDp.empty() ? -1 : preDp.back()));
}
 
int main() {
    int n;
    cin >> n;

    // Take input to make graph
    for(int i = 0; i < n-1; i++)
    {
        int u,v;
        cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }

    preCompute(1, 0);
    findNbrDist(1, 0, -1);

    // Print Ans
    for(int i = 1; i <= n; i++)
        cout << ans[i] <<' ';
   return 0;
}