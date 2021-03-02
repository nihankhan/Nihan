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
    
    vector <vector <double>> vec(3);
    int n, i, j; 
    double a, sum = 0.0;
    char X[2];
    
    cin >> n;
    cin >> X;
    
    for (i = 0; i < vec.size(); i++)
    {
	  	for (j = 0; j < vec.size(); j++)
    	{
    		cin >> a;
    		vec[i].push_back(a);

    		if (j == n)
    		{
    			sum += vec[i][n];

    			cout << "i = " << i << endl;
    			cout << "i = " << j << endl;
    		}
    	}
    }
    
    /*for (i = 0; i < vec.size(); i++)
    {
    	sum += vec[n][i];
    }*/
    
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
