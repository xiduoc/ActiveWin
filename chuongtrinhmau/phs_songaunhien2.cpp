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
    srand(time(0));
    cout<<"LIET KE: ";
    for(int i=0;i<n;i++)
    {
        cout<<rand() % 100 + 1<<","<<" ";
    }
}
int main ()
{
   int n;
   sophantu(n);
   lietke(n); 
   return 0;
}