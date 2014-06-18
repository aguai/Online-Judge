/*

In order to run huge capitals, New Russians need exceptional brains. 
Of course, with such workload, they also need peculiar relaxation methods. 
In casinos there are special domino sets for New Russians. 
In these sets, the number of dots on each end varies not from zero to six, as in sets for ordinary people, but from zero to a certain number that is proportional to the intellectual level of the player. 
To make special sets, the same principle as for standard domino sets is used: each bone has two ends; 
on each end there are several dots (from zero up to a given number); 
a set contains bones with all possible combinations of ends; 
there are no two equal bones (there is no distinction with respect to left or right ends, so, for example, bones 2-5 and 5-2 are considered equal). 
But, unlike ordinary dominoes, special bones are marked with dots that are not just strokes of paint but real 10-carat diamonds.
How many diamonds are needed to produce one special domino set?

*/


#include <iostream>

using namespace std;

int main(void){
	long long n,sum=0;
	cin>>n;
	for(int i=0;i<n+1;i++){
		for(int x=i;x<n+1;x++) sum+= i+x;
	}
	
	cout<<sum<<endl;
	
	return 0;
}