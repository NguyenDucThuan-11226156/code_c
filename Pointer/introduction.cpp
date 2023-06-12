#include<stdio.h>
#include<math.h>
void separate(double num, char * signp, int* wholep, float*fracp)
{
    if (num<0)  
    {
    *signp = '-';
    }
    else if (num==0)
    {
    *signp = ' ';
    }
    else
    {
    *signp = '+';   
    }
    double magnitude =fabs(num);
    *wholep = floor(magnitude);
    *fracp = magnitude - *wholep; 
}


int main()
{   char signp;
    int wholep;
    float fracp;
    separate(-2.5,&signp,&wholep,&fracp);
    printf("signp=%c",signp);
    printf("wholep=%d",signp);
    printf("fracp=%f",fracp); 
}