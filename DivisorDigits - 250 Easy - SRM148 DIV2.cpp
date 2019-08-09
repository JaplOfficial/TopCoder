#include<bits/stdc++.h>
using namespace std;
class DivisorDigits{
	public:
	int howMany(int number){
		string a=to_string(number);
		int ans = 0;
		for(int i=0;i<a.length();i++){
			if(a[i]!='0'&&number%(a[i]-48)==0){
			  ans++;
			}
		}
		return ans;
	}
};
