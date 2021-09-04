#include<iostream>

using namespace std;

int main() {
	int n=10;
	for(int i=1;i<=10;i++){
		int j=1;
		while(j<=i){
			cout<<j<<" ";
			j++;
		}
		cout<<endl;
	}
	return 0;
}
