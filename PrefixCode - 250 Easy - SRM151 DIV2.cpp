#include<bits/stdc++.h>
using namespace std;
class PrefixCode{
	public:
	string isOne(vector <string> words){
		for(int i=0;i<words.size();i++){
			for(int j=0;j<words.size();j++){
				if(i!=j&&words[i].length()<words[j].length()){
					if(words[j].substr(0,words[i].length())==words[i]){
						string x = "No, ";
						string g = to_string(i);
						x+=g;
						return x;
					}
				}
			}
		}
		return "Yes";
	}
};
