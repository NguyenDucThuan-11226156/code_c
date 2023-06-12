#include<stdio.h>
int main()
{
    FILE *fp= fopen("data2.txt","w") ; 
    putw(29,fp);
    putw(11,fp);
    putw(9,fp);
    putw(2,fp);

    fclose(fp);



    fp = fopen("data2.txt","r");
    int x = getw(fp);
    printf("%d",x);
    x = getw(fp);
    printf("%d",x);
    fclose(fp);

    // fp = open("data.txt","r");

}