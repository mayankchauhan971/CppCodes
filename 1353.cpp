// Language C++
// Time complexity O(Nlog(N))
// Space Complexity O(N) To represent deck of cards
// Function which solves the problem => findNbrDist
// Dp function => PreCompute

#include<bits/stdc++.h>
using namespace std;
 
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