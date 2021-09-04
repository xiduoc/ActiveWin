//NHap vao 1 mang co n phan tu tim phan tu nho nhat va phan tu lon nhat 
//Neu k co 1trong 2 thi thong bao khong co 
#include<iostream>
using namespace std;

void nhapmang (int n,int *a)
{
    cout<<"Nhap vao gia tri mang:"<<endl;
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
int chanlonnhat (int n,int *a)
{
   int chanlon=0;
   for(int i=0;i<n;i++)
    {
        int sochan=0;
        if(*(a+i)%2==0)
        {
           sochan=*(a+i);
        }
        if(chanlon<sochan)
        {
            chanlon=sochan;
        }
    }
    return chanlon;
}
int lenhonhat (int n,int *a)
{
    int sole=0;
   for(int i=0;i<n;i++)
    {
        if(*(a+i)%2==1)
        {
           sole=*(a+i);
           break;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(*(a+i)%2==1)
        {
            if(*(a+i)<sole)
            {
            sole=*(a+i);
            }
        }
    }
    return sole;
}
int inrachanlelonnhat(int n,int *a)
{
    if(chanlonnhat(n,a)==0)
    {
        cout<<"Khong co so chan"<<endl;
    }
    else 
    {
        cout<<"So chan lon nhat: "<<chanlonnhat(n,a)<<endl;
    }
     if(lenhonhat(n,a)==0)
    {
        cout<<"Khong co so le"<<endl;
        
    }
    else
    {
        cout<<"So le nho nhat: "<<lenhonhat(n,a)<<endl;
    }
}
int main ()
{
    int n;
    cout<<"Moi nhap kich thuoc mang 1 chieu: ";
    cin>>n;
    int *p= new int [n];
    nhapmang(n,p);
    xuatmang(n,p);
    inrachanlelonnhat(n,p);
    delete[] p;
    return 0;
}