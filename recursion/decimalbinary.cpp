#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* findbinary(int decimal,char* result)
{
    if(decimal==0)
    {
        return result;
    }
    if (decimal%2==0)
    {
        result= (char*)realloc(result,strlen(result)+2);
        strcat(result,"0");
    }
    if (decimal%2==1)
    {
        result= (char*)realloc(result,strlen(result)+2);
        strcat(result,"1");
    }
    return findbinary(decimal/2,result);
}

int main()
{
    int decimal;
    printf("Nhap so:");
    scanf("%d",&decimal);
    char* result= (char*)malloc(sizeof(char));
    result[0]='\0';
    result = findbinary(decimal,result);
    printf("%s",result);
    free(result);
    return 0;
}