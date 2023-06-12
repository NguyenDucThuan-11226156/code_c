#include<bits/stdc++.h>
using namespace std;

struct Idol {

    Idol(string ten, float cc, float cannang)
    {
        name = ten;
        height = cc;
        weight = cannang;

    }
    Idol()
    {

    }
    string name;
    float height;
    float weight;
};


int main ()
{
    Idol a[8];
    a[0] = Idol("Nguyen Duc Thuan", 181, 70);
    a[1] = Idol("Nguyen Van Thuan", 181, 70);
    a[2] = Idol("Nguyen Hu Thuan", 181, 70);
    a[3] = Idol("Nguyen qwe Thuan", 181, 70);
    a[4] = Idol("Nguyen Da Thuan", 181, 70);


    for( auto x: a)
    {
        cout<< x.name << " " << x.height << " " << x.weight<<endl;
    }
}