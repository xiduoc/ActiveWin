//tinh s=1^2+2^2+3^2+...+n^2
#include<iostream>
using namespace std;

float tinhtong (float n)
{
    if(n==1)
    {
        return 1; 
    }
    return tinhtong(n-1) + n*n; 
}
int main ()
{
    int n;
    cout<<"Nhap n: ";
    cin>>n;
    cout<<"Tong la: "<<tinhtong(n)<<endl;

    return 0;
}