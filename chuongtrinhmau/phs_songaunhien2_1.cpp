#include<iostream>
#include<ctime>
using namespace std;

void sophantu(int &n)
{
    cout<<"So phan tu: ";
    cin>>n;
}
void lietke(int n)
{
    cout<<"LIET KE: ";
    for(int i=0;i<n;i++)
    {
        cout<<rand() % 100 + 1<<","<<" ";
    }
}
int main ()
{ 
   srand(time(0));
   int n;
   sophantu(n);
   lietke(n); 
   return 0;
}