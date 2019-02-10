#include<stdio.h>
#include<math.h>
int main()
{
    int t,i;
    double r,area1,area2,result;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lf",&r);
        area1= 2 * acos (0.0)*r*r;
        area2=(2*r)*(2*r);
        result=area2-area1;

        printf("Case %d: %0.2lf\n",i,result);

    }
    return 0;
}
