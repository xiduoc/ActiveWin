//Mang 2 chieu su dung con tro cap 2 
//cap phat dong su dung so ngau nhien, in ra ma tran

#include<iostream>
#include<ctime>
using namespace std;

void sohangsocot(int &n,int &m)
{
   cout<<"Nhap so dong: ";
   cin>>n;
   cout<<"Nhap so cot: ";
   cin>>m;
}
void capphatcontro(int n,int m,int *pointer[])
{
    for(int i=0;i<n;i++)
    {
        pointer[i]=new int [m];
    }
}
void nhangiatri(int n,int m,int *pointer[])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            pointer[i][j]= rand() % 100 + 1;
        }
    }
}
void xuatmang(int n,int m,int *pointer[])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<pointer[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main ()
{   
    srand(time(0));
    int row,col;
    sohangsocot(row,col);
    int **p=NULL;
    p = new int *[row];
    capphatcontro(row,col,p);
    nhangiatri(row,col,p);
    xuatmang(row,col,p);
    for(int i=0;i<row;i++){
        delete[] p[i];
    }
    delete[] p;
    return 0;
}