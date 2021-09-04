#include<iostream>
using namespace std;

typedef struct toadodiem
{
    int x;
    int y;
};
void nhap (toadodiem &C)
{
    cout<<"Nhap toa do diem : "<<endl;
    cout<<"Hoanh do: ";
    cin>>C.x;
    cout<<"Tung do: ";
    cin>>C.y;
    cout<<endl;
}
void xuat (toadodiem C)
{
   cout<<"("<<C.x<<","<<C.y<<")"<<endl;
}
toadodiem vecto (toadodiem A,toadodiem B)
{
    toadodiem hieuvecto;
    hieuvecto.x=A.x-B.x;
    hieuvecto.y=A.y-B.y;
    return hieuvecto;
}

int main ()
{
    toadodiem A,B,C;
    cout<<"Nhap toa do A:";
    nhap(A);
    xuat(A);
    cout<<"Nhap toa do B:";
    nhap(B);
    xuat(B);
    cout<<"Vecto chi phuong cua A va B:"<<endl;
    C=vecto(A,B);
    xuat(C);
    return 0;
}