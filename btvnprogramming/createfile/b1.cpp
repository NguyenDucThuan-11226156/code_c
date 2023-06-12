#include<stdio.h>
int main()
{
    FILE *fp; //1. declare file pointer
    fp = fopen("data.txt","w"); //2
    char ch;
    char a;
    fprintf(fp,"%s %d %f %f \n", "NguyenDucThuan", 123312, 6.2, 8.74);
    fprintf(fp,"%s %d %f %f", "NguyenThuHuong", 123123, 1.2, 2.74);
    fclose(fp);//4 
    fp = fopen("data.txt","r");
    char str[100];
    int student_id;
    float score1;
    float score2;
    while(!feof(fp)){
        fscanf(fp,"%[A-Z a-z] %d %f %f\n",str,&student_id,&score1,&score2);
        printf(" %s %f \n",str,score1/2+ score2/2);
    }

    fclose(fp);



    return 0;
}