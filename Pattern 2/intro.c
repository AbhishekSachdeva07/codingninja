#include <stdio.h>
int main()
{
    int a;
    printf("Enter no. of lines you want?\n");
    scanf("%d",&a);
    for (int i=1; i<=a; ++i){
        for (int j=1; j<=a-i+1; ++j){
            printf("%d",a-i+1);
        }printf("\n");
    }return 0;
}