/*
 *******************************************
 *      * AUTHOR : Nihan_Khan *            *
 *      * NICK :   NullByte      *         *
 *      * CREATED: 01.03.2021 13:29 *      *
 *******************************************
*/
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<vector<double>> vec(12);
    char x;
    double n, sum = 0.0;

    cin >> x;

    for (int i = 0; i < vec.size(); i++)
    {
    	for (int j = 0; j < vec.size(); j++)
    	{
    		cin >> n;

    		vec.push_back(n);

    		if (i > j)
    		{
    			sum += vec[i][j];
    		}
    	}
    }

    if (x == 'S')
    {
    	printf("%.1lf\n", sum);
    }
    else
    {
    	printf("%.1lf\n", sum/66.0);
    }

    return 0;
}
