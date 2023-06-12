#include<bits/stdc++.h>
#include<map>
using namespace std;
int main(){
    map< int , int > mp;
    mp[100] = 200;
    mp[200] = 300;
    mp.insert({300,400});
    mp.insert({400,500});
    cout << mp.size()<<endl;
    for (pair<int,int> x: mp){
        cout <<x.first<<" "<< x.second << endl;
    }
    for (auto x: mp){
        cout <<x.first<<" "<< x.second << endl;
    }
    for (map<int,int>::iterator it=mp.begin(); it!= mp.end();++it){
        cout<< (*it).first << " " << (*it).second<< endl;
    }
}