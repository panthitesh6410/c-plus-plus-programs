// find paths from top left position to bottom right position -

#include<iostream>
using namespace std;

void print_all_paths_util(int *mat, int i, int j, int n, int m, int *path, int pi)
{
    if(i == n-1)
    {
        for(int k=j;k<m;k++)
        {
            path[pi+k-j] = *((mat + i*m)+k);
        }
        for(int l=0;l<pi+m-j;l++)
        {
            cout<<path[l]<<" ";
        }
        cout<<endl;
        return;
    }
    if(j == m-1)
    {
        for(int k=i;k<n;k++)
        {
            path[pi+k-i] = *((mat + k*m)+j);
        }
        for(int l=0;l<pi+n-i;l++)
        {
            cout<<path[l]<<" ";
        }
        cout<<endl;
        return;
    }
    path[pi] = *((mat+i*m)+j);
    print_all_paths_util(mat, i+1, j, n, m, path, pi+1);
    print_all_paths_util(mat, i, j+1, n, m, path, pi+1);
}
void print_all_paths(int *mat, int n, int m)
{
    int *path = new int[m+n];
    print_all_paths_util(mat, 0, 0, n, m, path, 0);
}
int main()
{
    int n, m;
    cin>>n>>m;
    int mat[n][m];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>mat[i][j];
    print_all_paths(*mat, n, m);
    return 0;
}