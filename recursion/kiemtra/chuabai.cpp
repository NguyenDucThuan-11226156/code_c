#include<stdio.h>
int n;
int array[100];
void get_input()
{
    printf("Enter the number of an array(n<100):");
    scanf("%d",&n);
    printf("Enter %d elenments for the array: ",n);
    for ( int i =0; i< n;++i)
    {
        scanf("%d",&array[i]);   
    }
}
void print_output()
{
    for ( int i =0; i< n;++i)
    {
        printf("Element %d:%d\n",i+1,array[i]);
    }
}
void sencond_smallest()
{
    int min= array[0];
    int min_2nd = array[0];
    for(int i = 0; i<n;i++)
    {
        if (array[i]<min)
        {   min_2nd= min;
            min= array[i];
            
        }
    }
    printf("Second smallest: %d",min_2nd);
}
int main()
{
    get_input();
    print_output(); 
    sencond_smallest();

}