/*Given a non negative integer number n. For every numbers i in the range 0 ≤ i ≤ n calculate the number of 1's in their binary representation and return them as an array.

Example 1:

Input: 2

Output: 0 1 1

Example 2:

Input: 5

Output::0 1 1 2 1 2

Constraints:

1<=n<=100,000*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> v;
	v.push_back(0);
	for(int i=1;i<=n;i++){
		if(i%2==0){
			v.push_back(v[i/2]);
		}
		else{
			v.push_back(v[i/2]+1);
		}
	}
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
}