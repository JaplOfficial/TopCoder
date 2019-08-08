#include<bits/stdc++.h>
using namespace std;
class YahtzeeScore{
	public:
	int maxPoints(vector <int> toss){
	    int ans = 0;
	    sort(toss.begin(),toss.end());
	    int counter = toss[0];
		for(int i=1;i<toss.size();i++){
			if(toss[i]==toss[i-1]){
				counter+=toss[i];
			}else{
				counter=toss[i];
			}
			ans=max(ans,counter);
		}
		return ans;
	}
};
