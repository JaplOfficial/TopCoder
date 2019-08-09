#include<bits/stdc++.h>
using namespace std;
class InterestingDigits{
	public:
	bool interesting(int d, int b) {
 	  return b%d==1;
	}
	vector <int> digits(int base){
	 vector<int>d;
	 for(int i=2;i<base;i++){
	 	if(interesting(i,base)){
	   		d.push_back(i);
	    }
	 }
	 return d;
	}
	
};
