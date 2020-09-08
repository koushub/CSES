#include<iostream>
using namespace std;
int main()
{
    int n,x;
    long sum=0;
    cin >> n;
    for (int i=0; i<n-1; i++)
    {
        cin >> x;
        sum= sum+x;
    }
    cout << long(n)*(n+1)/2 - sum << endl;      //formula of sum of n natural numbers 
    return 0;
}
