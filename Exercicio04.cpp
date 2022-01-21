#include <bits/stdc++.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>
using namespace std;

// Function to print a substring str[low..high]
void printSubStr(string str, int low, int high)
{
	
	system("color 4f");
	      setlocale(LC_ALL, "Portuguese");

    for (int i = low; i <= high; ++i)
        cout << str[i];
}


int longestPalSubstr(string str)
{

    int n = str.size();

    
    int maxLength = 1, start = 0;

    
    for (int i = 0; i < str.length(); i++) {
        for (int j = i; j < str.length(); j++) {
            int flag = 1;

            for (int k = 0; k < (j - i + 1) / 2; k++)
                if (str[i + k] != str[j - k])
                    flag = 0;

            if (flag && (j - i + 1) > maxLength) {
                start = i;
                maxLength = j - i + 1;
            }
        }
    }

    cout << "Palindromo mais longa e: ";
    printSubStr(str, start, start + maxLength - 1);

    
    return maxLength;
}


int main()
{
    string str = "babadbaba";
    cout << "\nO comprimento e: "
         << longestPalSubstr(str);
    return 0;
    system("PAUSE");
}