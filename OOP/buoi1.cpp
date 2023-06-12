#include<bits/stdc++.h>
using namespace std;
// class: lop
// thuoc tinh:attribute
// Phuong thuc: method, behaivor
// object: doi tuong
// constructor: ham khoi tao
// destructor : ham huy
// This pointer 
// setter, getter
// Encapsulation: Dong goi
// Access modifier : Private; Public; Protected 

// static:SV001=>SV002=>SV003
// Friend function, friend class

class SinhVien{
    // thuoc tinh va phuong thuc
    private:
        string id, ten, date;
        double gpa;
        static int dem;
    public:
        SinhVien(); //constructor
        SinhVien(string,string,string,double); //constructor
        void xinchao();
        void dihoc();
        ~SinhVien(); //destructor
        void nhap();
        void in();
      
        void tangDem();
        int getDem();
        friend void inthongtin(SinhVien);
};
void inthongtin(SinhVien a)
{
    cout<<a.id<<" "<<a.ten<<endl;
}
int SinhVien::dem=0;
// implementation
int SinhVien::getDem()
{
    return dem;
}
void SinhVien::tangDem(){
    ++dem;
}
void SinhVien::nhap(){
    ++dem; //dem=1
    this->id=  "SV" +string(3-to_string(dem).length(),'0') + to_string(dem);
    cout<<"Nhap ten"; getline(cin,this->ten);
    cout<<"Nhap ns:"; cin>>this->date;
    cout<<"Nhap diem"; cin>>this->gpa;
    cin.ignore();

}
void SinhVien::in(){
    cout<< this->id<<" " << this->ten <<" "<< this->date <<" "<< this->gpa<<endl;
}
SinhVien::SinhVien()
{
    cout<<"Ham khoi tao duoc goi !\n";
}
SinhVien::SinhVien(string id, string ten, string date, double gpa)
{   cout<< "ham khoi tao co tham so duoc goi\n";
    this->id = id;
    this->ten = ten;
    this->date = date;
    this->gpa = gpa;
}
void SinhVien::xinchao()
{
    cout<<"Hello!\n";
}
void SinhVien::dihoc()
{
    cout<< "Di hoc!\n";
}

SinhVien:: ~SinhVien()
{
    cout<<"Doi tuong duoc huy tai day \n";
}

int main()
{   SinhVien x;
x.nhap();
   inthongtin(x);
    return 0;
}