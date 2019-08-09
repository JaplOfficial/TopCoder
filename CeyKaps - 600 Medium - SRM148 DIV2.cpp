#include<bits/stdc++.h>
using namespace std;
class CeyKaps{
	public:
	string decipher(string typed, vector <string> switches){
		char init[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
		vector<int>pos;
		for(int i=0;i<typed.length();i++){
			for(int j=0;j<26;j++){
				if(init[j]==typed[i]){
					pos.push_back(j);
				}
			}
		}
		for(int i=0;i<switches.size();i++){
			string s=switches[i];
			char a=s[0],b=s[2];
			int pos1,pos2;
			for(int j=0;j<26;j++){
				if(init[j]==a){
					 pos1=j;
				}
				if(init[j]==b){
					pos2=j;
				}
			}
			swap(init[pos1],init[pos2]);
		}
		string ans = "";
		for(int i=0;i<typed.length();i++){
			ans+=init[pos[i]];
		}
		return ans;
	}
};
