#include <iostream>
#include <cstring>
using namespace std;

struct congty
{
   char IDcompany[30];
   char giamdoc[30];
    float vondle;
    int sonhanvien; 
};
void nhap1DN(congty &coca){
   cout<<"Nhap ma doanh nghiep: ";
   cin.getline(coca.IDcompany);
   cout<<"Nhap giam doc: ";
   cin.getline(coca.giamdoc);
   cout<<"Nhap von dieu le: ";
   cin>>coca.vondle;
   cout<<"Nhap so nhan vien: ";
   cin>>coca.sonhanvien; 
}

void xuat1DN(congty coca)
{
    cout<<"Ma doanh nghiep: "<<coca.IDcompany<<endl;
    cout<<"Giam doc: "<<coca.giamdoc<<endl;
    cout<<"Von dieu le: "<<coca.vondle<<endl;
    cout<<"So nhan vien: "<<coca.sonhanvien<<endl;
}
void nhapDS(congty ds[],int n)
{
    for(int i=0;i<n;i++){
        nhap1DN(ds[i]);
    }
}
void xuatDS(congty ds[],int n)
{
    for(int i=0;i<n;i++){
        xuat1DN(ds[i]);
    }
}
int main(){
   congty sDN[100];
   int n;
   cout<<"Nhap n: ";
   cin>>n;
   nhapDS(sDN,n);
   xuatDS(sDN,n);
}