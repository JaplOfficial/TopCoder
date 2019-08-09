#include<bits/stdc++.h>
using namespace std;
class LeaguePicks{
	public:
	vector <int> returnPicks(int position, int friends, int picks){
		vector<int>positions;
		for(int i=0;i<friends;i++){
			if(i==position-1){
				positions.push_back(1);
			}else{
				positions.push_back(0);
			}
		}
		bool reversee=true;
		while(1){
			if(reversee){
				int d = positions.size()-1;
				for(int i=d;i>=0;i--){
					positions.push_back(positions[i]);
				}
				reversee=false;
			}else{
				int d = positions.size();
				for(int i=0;i<d;i++){
					positions.push_back(positions[i]);
				}
				reversee=true;
			}
			if(positions.size()>=picks){
				break;
			}
		}
		vector<int>ans;
		for(int i=0;i<picks;i++){
			if(positions[i]==1){
				ans.push_back(i+1);
			}
		}
		return ans;
	}
};
