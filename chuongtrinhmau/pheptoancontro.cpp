#include<iostream>
using namespace std;

int main ()
{
    int *p=NULL;
    int arr[]={4,8,12,1};
    p=arr;
    cout<<&(*p)<<endl;
    cout<<*(p++)<<" "<<&(*(p++))<<endl;
    cout<<&arr[1]<<endl;
    return 0;
}