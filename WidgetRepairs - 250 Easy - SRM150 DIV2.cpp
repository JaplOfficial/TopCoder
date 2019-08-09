#include<bits/stdc++.h>
using namespace std;
class WidgetRepairs{
	public:
	int days(vector <int> arrivals, int numPerDay){
		int ans=0;
		int sum =0;
		for(int i=0;i<arrivals.size();i++){
			if(arrivals[i]==0&&sum<=0){
				continue;
			}
			sum+=arrivals[i];
			sum-=numPerDay;
			sum=max(0,sum);
			ans++;
		}
		while(sum>0){
			sum-=numPerDay;
			ans++;
		}
		return ans;
	}
};
