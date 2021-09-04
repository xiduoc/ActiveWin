#include<iostream>
using namespace std;
void nhapmang(int n,int *arr)
{
    cout<<"Nhap gia tri vao mang: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Arr["<<i<<"]=";
        cin>>*(arr+i);
    }
}
void xuatmang(int n,int *arr)
{
    for(int i=0;i<n;i++)
    {
        cout<<*(arr+i)<<" ";
    }
    cout<<endl;
}
int timtansuatMAX(int n,int *arr)
{
   int max=1;
   for(int i=0;i<n;i++)
   {
       int dem=1;
       for(int j=i+1;j<n;j++)
       {
         if(*(arr+i)==*(arr+j))
         {
             dem+=1;
         }
       }
       if(max<dem)
       {
        max=dem;
       }
   }
   return max;
}
int timvitri(int n,int *arr,int index)
{
    int dem=1;
    for(int i=index;i<n;i++)
    {
        if(*(arr+i+1)==*(arr+index))
        {
          dem++;
        }
    }
    return dem;
}
void lietke(int n,int *arr)
{ 
  int tansuatmax=timtansuatMAX(n,arr);  
  if(tansuatmax>1)
  {
      for(int i=0;i<n;i++)
      {
          int tansuat=timvitri(n,arr,i);
          if(tansuat==tansuatmax){
              cout<<"Phan tu xuat hien nhieu nhat: "<<*(arr+i)<<endl;
          }
      }
    cout<<"So lan xuat hien la: "<<tansuatmax<<endl;
  }else
  {
      cout<<"So lan xuat hien moi phan tu la 1";
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
    lietke(n,p);
    delete[] p;
    return 0;
}