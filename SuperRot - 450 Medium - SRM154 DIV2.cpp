#include<bits/stdc++.h>
using namespace std;
class SuperRot{
	public:
	string decoder(string message){
	    vector<char>alpha={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
		vector<char>alpha2={'N','O','P','Q','R','S','T','U','V','W','X','Y','Z','A','B','C','D','E','F','G','H','I','J','K','L','M'};
		vector<char>nums={'0','1','2','3','4','5','6','7','8','9'};
		vector<char>nums2={'5','6','7','8','9','0','1','2','3','4'};
		string g="";
		for(int i=0;i<message.length();i++){
			g+=toupper(message[i]);
		}
		string ans="";
		for(int i=0;i<message.length();i++){
			if(binary_search(alpha.begin(),alpha.end(),g[i])){
				int pos=lower_bound(alpha.begin(),alpha.end(),g[i])-alpha.begin();
				ans+=alpha2[pos];
			}else if(isspace(g[i])){
				ans+=" ";
			}
			else{
				int pos=lower_bound(nums.begin(),nums.end(),g[i])-nums.begin();
				ans+=nums2[pos];
			}
		}
		string h="";
		for(int i=0;i<message.length();i++){
			if(isupper(message[i])){
				h+=toupper(ans[i]);
			}else if(isspace(g[i])){
				h+=" ";
			}
			else{
				h+=tolower(ans[i]);
			}
		}
		return h;
	}
};
