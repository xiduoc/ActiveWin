#include<iostream>
using namespace std;
void nhapmang(int n,int arr[])
{
    for(int i=0;i<n;i++)
    {
        cout<<"Arr["<<i<<"]=";
        cin>>arr[i];
    }
}
void xuatmang(int n,int arr[])
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main ()
{   
    int n;
    cout<<"Moi nhap kich thuoc mang 1 chieu: ";
    cin>>n;
    int *p = new int [n];
    nhapmang(n,p);
    xuatmang(n,p);
    return 0;
}