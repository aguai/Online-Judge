#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
	int n;
	cin>>n;

	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];

	sort(a,a+n,greater<int>());

	for(int i=0;i<n;i++)
		cout<<a[i]<<endl;

	return 0;
}