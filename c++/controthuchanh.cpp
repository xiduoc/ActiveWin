//le tang dan chan giam dan dung mang 1 chieu cap phat dong
//con cach 2
#include<iostream>
using namespace std;
void nhapmang(int n,int *a)
{
    cout<<"Moi nhap gia tri mang: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"A["<<i<<"]:";
        cin>>*(a+i);
    }
}
void xuatmang (int n,int *a)
{
    for(int i=0;i<n;i++)
    {
        cout<<*(a+i)<<" ";
    }
    cout<<endl;
}

void letangdan (int n,int *a)
{
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(*(a+i)%2==1){
            int c=*(a+i);
            *(a+i)=*(a+j);
            *(a+j)=c;
            j++;//j la bien diem so le
        }
    }
    for(int i=0;i<j;i++)
    {
       for(int v=i+1;v<j;v++)
       {
           if(*(a+i)>*(a+v))
           {
               int c=*(a+i);
               *(a+i)=*(a+v);
               *(a+v)=c;
           }
       }
    }
}

void changiamdan (int n,int *a)
{
    int sochandt;
    for(int i=0;i<n;i++)
    {
        if(*(a+i)%2==0)
        {
            sochandt=i;
            break;
        }
    }
    for(int i=sochandt;i<n;i++)
    {
        for(int v=i+1;v<n;v++)
        {
            if(*(a+i)<*(a+v))
            {
                int c=*(a+i);
                *(a+i)=*(a+v);
                *(a+v)=c;
            }
        }
    }
}
void inramangmoi (int n,int *a)
{
    cout<<"Mang sap xep lai:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<*(a+i)<<" ";
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
    letangdan(n,p);
    changiamdan(n,p);
    inramangmoi(n,p);
    delete[] p;
    return 0;
}