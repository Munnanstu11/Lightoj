#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;
int main()
{
    int i,t;
    double AB,BC,AC,AD,DE,ratio;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>AB>>AC>>BC>>ratio;
        ratio = ratio/(ratio+1);
        AD=AB*sqrt(ratio);
        printf("Case %d: %.10lf\n",i,AD);
          //here m/n=ADE/BDEC
        // m/(m+n)=>(m/n)/(m/n+n/n)=>(m/n)/(m/n + 1)=>ratio/(ratio+1)

    }
    return 0;

}

