/*
 *******************************************
 *      * AUTHOR : Nihan_Khan *            *
 *      * NICK : NullByte     *            *
 *******************************************
*/
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    freopen("input", "r", stdin);
    freopen("output", "w", stdout);
    
    double N[12][12], sum = 0.0;
    int i, j, m;
    char X[2];
    
    cin >> m;
    cin >> X;
    
    for (i = 0; i < 12; i++)
    {
    	for (j = 0; j < 12; j++)
    	{
    		cin >> N[i][j];
    	}
    }
    
    for (i = 0; i < 12; i++)
    {
    	sum += N[m][i];	
    }
    	
    if (X[0] == 'S')
    {
    	printf("%.1lf\n", sum);
   	}
    else if (X[0] == 'M')
    {
    	printf("%.1lf\n", sum/12);
    }

    return 0;
}
