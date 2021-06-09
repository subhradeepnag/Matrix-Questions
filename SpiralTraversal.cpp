#include<bits/stdc++.h>
using namespace std;

int main()
{
        vector<vector<int>>matrix{{1,2,3,4},{5,6,7,8},{9,10,11,12}};
         int m = matrix.size();
         int n = matrix[0].size();
         vector<int>v;
         int row_start=0,row_end=m-1,col_start=0,col_end=n-1;
        
           while(row_start<=row_end && col_start<=col_end)
           {
                for(int col=col_start;col<=col_end;col++)
                {
                    v.push_back(matrix[row_start][col]);
                }
                row_start++;
                                
                for(int row=row_start;row<=row_end;row++)
                {
                    v.push_back(matrix[row][col_end]);                 
                }
                col_end--;
                
                for(int col=col_end;col>=col_start;col--)
                {
                    v.push_back(matrix[row_end][col]);
                }
                row_end--;
                for(int row=row_end;row>=row_start;row--)
                {
                    v.push_back(matrix[row][col_start]);
                }
                col_start++;
           }

           for(int i=0;i<v.size();i++)
           {
               cout<<v[i]<<" ";
           }
        
}
