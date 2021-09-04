//1/(2*1)+1/(2*3)+...+1/(n-1)*n
//de quy
#include<iostream>
using namespace std;

float tong(float n)
{
    if(n==1)
    {
        return 0.5;
    }
    return tong(n-1)+1/(n*(n+1));
}
int main ()
{
    int n;
    cout<<"Nhap n: ";
    cin>>n;
    cout<<"Tong la: "<<tong(n)<<endl;
    return 0;
}