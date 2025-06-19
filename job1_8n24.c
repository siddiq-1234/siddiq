#include <stdio.h>
void main()

{
    char name[10];
    int heigh;
    printf("Enter number : ");
    scanf("%s",name);
    printf("Enter number (cm.): ");
    scanf("%d",&heigh);
    printf("output : \n\tName\t%s\n\tHeight \t%d cm", name, heigh);
}