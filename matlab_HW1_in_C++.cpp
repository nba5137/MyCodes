// Sibo Song
// 2/1/2016
// Made this code for my friends' Matlab homework
// to get (n's factorial)/(((n-m)'s factorial)*(m's factorial))

#include <iostream>
#include <string>
#include <math.h>

using namespace std;

void group(int n,int m)
{
    int i ;
    int j ;
    int k ;
    float nj=n; // n's factorial
    float mj=m; //  m's factorial
    float nmj=n-m; // (n-m)'s factorial
    float nm = n-m;
    float ntmp=n;
    float mtmp=m;
    float nmtmp=n-m;
    
    for (i = 1;i<n-1;i++)
    {
		ntmp = ntmp-1;
		nj = ntmp * nj;
    }
    for (j=1;j<m-1;j++)
    {
		mtmp = mtmp-1;
		mj = mtmp * mj;
    }
    for (k = 1;k<nm-1;k++)
    {
		nmtmp = nmtmp-1;
		nmj = nmtmp * nmj;
    }
    float ans;
    ans = nj/(nmj*mj);
    cout << "ANSWER: "<< ans << endl;
}

int main()
{
	int a;
	int b;
	cout << "Input n: ";
	cin >> a;
	cout << "Input m: ";
	cin >> b;
    group(a,b);
    return 0;
}
