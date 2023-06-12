// (x^{2}+y^{2}-1)^{3}-x^{2}y^{3}=0
#include<bits/stdc++.h>
using namespace std;
int main()
{   

    for (int x = 0; x< 10;x++ )
    {
    for (int y = 0; y< 10;y++ )
        {
           if  (pow(pow(x+2,2) + pow(y+2,2)-1,3) - pow(x+2,2)* pow(y+2,3)  <= 0)
           {
                cout<< "*";

           }
           else 
           {
                cout<<" ";
           }
           

        }
        cout<<endl;
    }
    
    return 0;
}