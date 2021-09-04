//tong cac chu so chan cua so nguyen duong n
#include<iostream>
using namespace std;

void nhapsonguyen ( int &n)
{
    cin>>n;
    if(n>1000)
    {
        cout<<"Moi nhap lai n: ";
        cin>>n;
    }

}
void timsochan (int n)
{
    int c=0;
    for(int i=0;i<=2;i++)
    {
        if(n%2==0)
        {
            c=c + n%10;
            if(n>10)
            {
              n=n/10;
            }else 
            {
                break;
            }
        }else
        {
            n=n/10;
        }
    }
    if(c==0)
    {
        cout<<"Khong co chu so chan trong so nguyen n"<<endl;
    }else
    {
        cout<<"Tong cac so chan co trong so nguyen la: "<<c<<endl;
    }
}
int main ()
{
    int n;
    cout<<"Nhap so nguyen n nho hon 1000: ";
    nhapsonguyen(n);
    timsochan(n);
    return 0;
}