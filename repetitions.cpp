//we have to print the length of longest repetition 

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin >> s;     //taking string input
    int n=s.length(), b=0,c=1;      //storing length of string in integer n
    for (int i=0; i<n; i++)
    {
        if (s[i] != s[i+1])
        {
            if (b<c) {b=c;}     //we can also use max instead of if
            c=0;
        }
        c++;
    }
    if (b<c) {b=c;}     //we can also use max instead of if
    cout << b;
    return 0;
}
