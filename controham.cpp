#include<iostream>
#include<ctime>
using namespace std;
bool ascending (int left,int right){
    return left > right;
}
bool descending (int left,int right){
    return left < right;
}
void nhapmang(int &n,int *p){
    cout<<"Nhap so phan tu ";
    cin>>n;
    srand(time(0));
    for(int i=0;i<n;i++){
        p[i] = rand() % 100 +1;
    }
}
void xuatmang(int n,int *p){
    cout<<"Xuat mang: ";
    for(int i=0;i<n;i++){
        cout<<p[i]<<" ";
    }
    cout<<endl;
}
void xapxep (int *p,int n,bool (*sosanh)(int,int)){
      for(int i=0;i<n;i++){
          for(int j=i+1;j<n;j++){
              if(sosanh(p[i],p[j])){
                  int term=p[i];
                  p[i]=p[j];
                  p[j]=term;
              }
          }
      }
      cout<<endl;
}

int main (){
    int n,*p;
    p= new int [n];
    nhapmang (n,p);
    xuatmang (n,p);
    cout<<"Tang dan.";
    xapxep (p,n,descending);
    xuatmang (n,p);
    cout<<"Giam dan.";
    xapxep (p,n,ascending);
    xuatmang (n,p); 
    delete [] p;
    return 0;
}