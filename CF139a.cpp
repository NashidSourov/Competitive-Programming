#include<bits/stdc++.h>
using namespace std;

int main()
{
    int d,sum=0,val,arr[8];
    cin>>d;

    for(int i=1;i<=7; i++)
    {
        cin>>arr[i];
    }


    for(int i=1;i<=7; )
    {
        sum+=arr[i];

        if(sum>=d)
        {
            val=i;
            break;
        }
        else if(i==7 && sum<d){
                i=1;

        }

        else
            i++;

    }

    cout<<val<<endl;


    return 0;

}
