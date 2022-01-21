#include <stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <conio.h>
#include <bits/stdc++.h>

using namespace std;

void printGolomb(int n)
{
	system("color 4f");
    setlocale(LC_ALL,"Portuguese");
    int dp[n + 1];
 
    // base cases
    dp[1] = 1;
    cout << dp[1] << " ";
 
    // Finding and printing first
    // n terms of Golomb Sequence.
    for (int i = 2; i <= n; i++)
    {
        dp[i] = 1 + dp[i - dp[dp[i - 1]]];
        cout << dp[i] << " ";
    }
}
// Driver Code
int main()
{
    int n = 9;
 
    printGolomb(n);
    return 0;
}