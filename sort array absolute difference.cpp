#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#include<iterator>

using namespace std;

int alt_sort(int arr[],int n,int x)
{
     multimap<int, int> m;
     multimap<int,int> :: iterator it;

    // Store values in a map with the difference
    // with X as key
    for (int i = 0 ; i < n; i++)
        m.insert(make_pair(abs(x-arr[i]),arr[i]));

    // Update the values of array
    int i = 0;
    for (it = m.begin(); it != m.end(); it++)
        arr[i++] = (*it).second ;
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
