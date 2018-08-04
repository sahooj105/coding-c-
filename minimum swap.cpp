#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#include<iterator>

using namespace std;
int findbiggest(int a[],int n)
{
    int max=INT_MIN,j=0;
    for(int i=0;i<n;i++)
    {
        if(max<=a[i])
        {
            max=a[i];
            j=i;
        }
    }
    return j;
}
bool increasing(int a[],int n)
{
    for(int i=0;i<n;i++)
        if(a[i]>=a[i+1])
        return false;
    return true;
}
int alt_sort(int a[],int n,int x)
{
    int size=n;
    int count=0;
    int i=n-1;
    while(!increasing(a,n))
       {
           int x=findbiggest(a,size);
            swap(a[x],a[size-1]);
            size=size-1;
            count++;
            //i--;
       }

    return count;
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
    int y=alt_sort(a,n,x);
    //printArray(a, n);

    cout<<y;
    return 0;
}
