#include<bits/stdc++.h>
using namespace std;
class DiskSpace{
	public:
	int minDrives(vector <int> used, vector <int> total){
		sort(total.begin(),total.end());
		int space=0;
		for(int i=0;i<used.size();i++){
			space+=used[i];
		}
		int ans = 0;
		for(int i=total.size()-1;i>=0;i--){
			if(space-total[i]>=0){
				space-=total[i];
				ans++;
			}else{
				if(space>0){
					space=0;
					ans++;
					break;
				}else{
					break;
				}
			}
		}
		return ans;
	}
};
