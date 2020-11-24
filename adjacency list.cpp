#include<bits/stdc++.h>
using namespace std;
int main()
{
    int non=5;
    vector<int>adjacent_node[non+1];//adj[#],#=number of node+1
    int n; cin>>n;
    for(int i=0; i<n; i++)
    {
        int a,b;//b is a adjacent node of a
        cin>>a>>b;
        //if undirected
        adjacent_node[a].push_back(b);
        adjacent_node[b].push_back(a);
        //if directed
        //adjacent_node[a].push_back(b);
    }
    for(int i=1; i<=non; i++)
    {
        printf("Adjacent node of %d     : ",i);
        for(auto j:adjacent_node[i])
            cout<<j<<' ';
        cout<<endl;
    }
}
/*
input:
26
1 2
1 3
1 4
2 1
2 6
3 1
3 7
3 8
4 1
4 7
5 8
5 10
6 2
6 10
7 3
7 4
7 8
7 9
8 3
8 5
8 7
9 7
9 10
10 5
10 6
10 9

output:
Adjacent node of 1     : 2 3 4
Adjacent node of 2     : 1 6
Adjacent node of 3     : 1 7 8
Adjacent node of 4     : 1 7
Adjacent node of 5     : 8 10
Adjacent node of 6     : 2 10
Adjacent node of 7     : 3 4 8 9
Adjacent node of 8     : 3 5 7
Adjacent node of 9     : 7 10
Adjacent node of 10    : 5 6 9
*/
