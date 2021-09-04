#include<iostream>
#include<ctime>
using namespace std;

int main ()
{
    srand(time(0));
    int n;
    cout<<"So phantu: ";
    cin>>n;
    cout<<"LIET KE: ";
    for(int i=0;i<n;i++)
    {
       cout<<rand() %100 + 1<<","<<" ";
    }
    return 0;
}