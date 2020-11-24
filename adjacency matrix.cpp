#include<bits/stdc++.h>
using namespace std;
int non=4;
vector<vector<char>>am(non+1,vector<char>(non+1,'0'));
vector<vector<int>>am_with_weight(non+1,vector<int>(non+1));
int main()
{
    int n; cin>>n;
    for(int i=0; i<n; i++)
    {
        int a,b,c;//b is a adjacent node of a,c=weight
        cin>>a>>b>>c;
        am[a][b]='1';
        am_with_weight[a][b]=c;
    }

    cout<<"Adjacent node:(if adjacent node value=1,else value=0)"<<endl;
    for(int i=1; i<=non; i++)
    {
        for(int j=1; j<=non; j++)
            cout<<am[i][j]<<' ';
        cout<<endl;
    }
    cout<<endl;

    cout<<"Weight of adjacent node:"<<endl;
    for(int i=1; i<=non; i++)
    {
        for(int j=1; j<=non; j++)
            cout<<am_with_weight[i][j]<<' ';
        cout<<endl;
    }
}
/*
input:
6
1 2 3
1 3 7
1 4 5
2 1 3
3 2 2
3 4 4

output:
Adjacent node:(if adjacent node value=1,else value=0)
0 1 1 1
1 0 0 0
0 1 0 1
0 0 0 0

Weight of adjacent node:
0 3 7 5
3 0 0 0
0 2 0 4
0 0 0 0
*/
