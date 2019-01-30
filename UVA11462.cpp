#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
   while(scanf("%d",&n)&&n)
   {
       int arr[n+1];
       for(int i=1;i<=n;i++)
       {
           scanf("%d",&arr[i]);
       }

       sort(arr+1,arr+n+1);

       for(int i=1;i<=n;i++)
       {

             printf("%d%c",arr[i], i==n?'\n':' ');
        }



   }
    return 0;

}
