#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,d,arr[100000],f=0,j;
    cin>>n>>d;
    if (1<=d && d<=n)
   { for(int i=0;i<n;i++)
    {
       cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<n;i++)
    { sum=0;
        for( j=i;j<i+d;j++)
        {
            sum=sum+arr[i];
        }
        if(arr[j+1]>= 2*floor((sum/d)))
        {
            f++;
        }
    }
    cout<<f;
   }

}
