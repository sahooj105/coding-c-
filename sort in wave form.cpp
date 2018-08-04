#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#include<iterator>

using namespace std;

int alt_sort(int a[],int n,int x)
{
     for(int i=0;i<n;i+=2)
     {
         if(i>0 && a[i]<a[i-1])
         {
             swap(a[i],a[i-1]);
         }
         if(i<n-1 && a[i]<a[i+1])
         {
             swap(a[i],a[i+1]);
         }
     }
    return 0;
}
void printArray(int arr[] , int n)
{
    for (int i = 0 ; i < n; i++)
        cout << arr[i] << " ";
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    //sort(a,a+n);
    int x;
    cin>>x;
    alt_sort(a,n,x);
    printArray(a, n);

    //cout<<x;
    return 0;
}
