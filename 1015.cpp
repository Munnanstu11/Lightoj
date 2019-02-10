#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int t,a,b,sum,n,arr[1001];
    scanf("%d", &t);
    for( int i=1; i<=t; i++)
    {
        /*char ch;
        scanf("%c", &ch);*/
        sum=0;
        cin>>n;
        for(int j=0; j<n; j++)
        {
            scanf("%d",&arr[j]);
            if( arr[j] >= 0 )
                sum=sum+arr[j];

        }
        cout<<"Case "<<i<<": "<<sum<<endl;

    }
    return 0;
}
