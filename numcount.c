
#include <stdio.h>
int main()
{
    int n,i,k,a[20],count=0;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]==k)
            count++;
    }
    printf("%d",count);
    return 0;
}
         
