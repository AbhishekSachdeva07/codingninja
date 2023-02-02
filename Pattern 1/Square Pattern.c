//square pattern
#include <stdio.h>
int main()
{
    int a;
    printf("Enter no. of lines you want to print\n");
    scanf("%d",&a);
    for (int i=1; i<=a; ++i){
        for (int j =1; j<=a; ++j){
            printf("%d",a);
        }printf("\n");
    }return 0;
}