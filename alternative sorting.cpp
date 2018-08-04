using namespace std;

int alt_sort(int a[],int n)
{
    if(n%2==0)
   {
       for(int i=0,j=n-1;i<n/2;i++,j--)
       {
           cout<<a[j]<<"\t";
           cout<<a[i]<<"\t";
       }
   }
   int k;
   if(n%2!=0)
   {
       for(int i=0,j=n-1;i<(n/2);i++,j--)
       {
           cout<<a[j]<<"\t";
           cout<<a[i]<<"\t";
           k=j-1;
       }
       cout<<a[k];
   }

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
    sort(a,a+n);
    alt_sort(a,n);
    //cout<<x;
    return 0;
}
