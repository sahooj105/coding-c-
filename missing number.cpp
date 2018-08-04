#include <iostream>

using namespace std;

int missing_number(int a[],int n)
{
    int sum=n*(n+1)/2;
    for(int i=0;i<n-1;i++)
    {
        sum-=a[i];
    }
    return sum;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n-1;i++)
    {
        cin>>a[i];
    }
    int x=missing_number(a,n);
    cout<<x;
    return 0;
}
