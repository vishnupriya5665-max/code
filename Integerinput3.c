#include <stdio.h>
int main() {
    int a,k,i;
    scanf("%d %d",&a,&k);
    int b[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("%d %d\n",a,k);
    for(i=0;i<a;i++)
    {
    printf("%d ",b[i]);
    }
}
