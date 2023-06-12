#include<stdio.h>
#include<string.h>
typedef struct 
{
    char name[50];
    int eng;
    int math;
    int phys;
} student;  
void get_information(int n,student stulist[])
{
    for (int i =0; i<n;i++)
    {    
        // fgets(stulist[i].name,50,stdin);
        gets(stulist[i].name);
        //getcharP();
        // stulist[i].name[strlen(stulist[i].name)-1] = 0;
        scanf("%d%d%d",&stulist[i].eng,&stulist[i].math,&stulist[i].phys);
        //fgetc(stdin);
        getchar();
    }  
}
void print_information(int n, student stulist[])
{
    for ( int i =0; i<n ; i++)
    {
        printf("\nThong tin hoc sinh %d ", i+1);
        printf("\nName:%s",stulist[i].name);
        printf("\nenglish score:%d",stulist[i].eng);
        printf("\nmath score:%d",stulist[i].math);
        printf("\nphysic score:%d",stulist[i].phys);
    }
}
int main()
{   int n;
    printf("Nhap so sinh vien");
    scanf("%d",&n);
    getchar();
    student stulist[n];
    get_information(n,stulist);
    print_information(n,stulist);
    return 0;
}