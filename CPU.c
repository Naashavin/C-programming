#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<fcntl.h>
#include<stdlib.h>
int main()
{
    float tt=0,tw=0;
    int i,n;
    int arri[10],bur[10],pri[10],rem[10];
    int iscomp[10]={0};
    int curr=0,comp=0;
    int minpri,idx=0;
    printf("process");
    scanf("%d",&n);
    printf("hola");
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d ",&arri[i],&bur[i],&pri[i]);
        rem[i]=bur[i];
    }
    while(comp<n)
    {
        minpri=100;
        idx=-1;
        
        for(i=0;i<n;i++)
        {
            if(arri[i]<=curr&&rem[i]>0&&pri[i]<minpri)
            {
                minpri=pri[i];
                idx=i;
            }
        }
        
        if(idx!=-1)
        {
            printf("P%d ",idx+1);
            rem[idx]--;
            curr++;
                 if(rem[idx]==0)
              {
                iscomp[idx]++;
                comp++;
              }
       }   
       else
       {
         curr++;
       }
      
    
}
}
