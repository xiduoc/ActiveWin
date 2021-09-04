//tong phan so  S=1+1/2+1/3+1/4+..+1/n

#include<iostream>
using namespace std;

float tongphanso (float n)
{
   if(n==1)
   {
       return 1;
   }
   return tongphanso(n-1) + 1/n;
}
int main ()
{
    int n;
    cout<<"Nhap n: ";
    cin>>n;
    cout<<"Tong phan so: "<<tongphanso(n);
    return 0;
}