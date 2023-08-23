#include <stdio.h>

int main()
{
   int num;
   scanf("%d",&num);
   int arr[num];
   int c1=0;
   int c0=0;
   int c2=0;
   for(int i=0;i<num;i++)
   {
       scanf("%d",&arr[i]);
   }
   for(int i=0;i<num;i++)
   {
       if(arr[i]==0)
       {
           c0++;
           
       }
       else if(arr[i]==1)
       {
           c1++;
       }
       else
       c2++;
   }
   for(int i=0;i<c1;i++)
   {
      printf("1");
       
   }
   for(int i=0;i<c0;i++)
   printf("0");
   for(int i=0;i<c2;i++)
   printf("2");
    return 0;
}
