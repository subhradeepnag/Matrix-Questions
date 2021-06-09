#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>>v{{1,1,1},{1,0,1},{1,1,1}};
    int m = v.size();
    int n = v[0].size();
    vector<pair<int,int>>x;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(v[i][j] == 0)
            {
                x.push_back({i,j});
            }
        }
    }
    
    // cout<<x[0].first<<" "<<x[0].second<<endl;
    for(int i=0;i<x.size();i++)
    {
        int a = x[i].first;
        int b = x[i].second;
        for(int k=0;k<n;k++)
        {
            v[a][k] = 0;
        }
        for(int k=0;k<m;k++)
        {
            v[k][b] = 0;
        }
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }


}