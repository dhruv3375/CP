#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , m;
    cin >> n >> m;

    char arr[n+1][m+1];

    for(int i =0; i <= n; i++)
    {
        for(int j = 0; j <= m; j++)
        {
            if(i == 0 || j == 0)
            {
                arr[i][j] = 'x';
            }
            else{

            cin >> arr[i][j];
            }


        }
    }

    int x , y;
    cin >> x >> y;

    if(arr[x-1][y-1] == 'x' && arr[x-1][y] == 'x' &&arr[x-1][y+1] == 'x' &&arr[x][y-1] == 'x' &&arr[x][y+1] == 'x' &&arr[x+1][y] == 'x' &&arr[x+1][y+1] == 'x' && arr[x+1][y-1] == 'x')
    {
        cout <<"yes";
    }
    else{
        cout <<"no";
    }



    return 0;
}