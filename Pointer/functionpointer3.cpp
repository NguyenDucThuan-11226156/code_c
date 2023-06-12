#include<stdio.h>
void Hello(char *name)
{
    printf("Hello %s\n",name);
}
int main(){
    void (*p)(char*);
    p  = Hello;// attach the address of funtion to p
    p("Thuan"); 
}