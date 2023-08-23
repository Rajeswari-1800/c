#include <stdio.h>

int main()
{
    char str[10];
    int a;
    int b;
    scanf("%s",str);
    scanf("%d",&a);
    scanf("%d",&b);
    for(int i=a-1;i<b;i++)
    {
        printf("%c",str[i]);
    }
    
    return 0;
}

