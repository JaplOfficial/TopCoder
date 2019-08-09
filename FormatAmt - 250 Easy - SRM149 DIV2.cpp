#include<bits/stdc++.h>
using namespace std;
class FormatAmt{
	public:
	string amount(int dollars, int cents){
		string ans = "$";
		string d=to_string(dollars);
		int counter=0;
		string x="";
		string c=to_string(cents);
		for(int i=d.length()-1;i>=0;i--){
			if(counter==3){
				x+=",";
				counter=0;
			}
			x+=d[i];
			counter++;
		}
		for(int i=x.length()-1;i>=0;i--){
			ans+=x[i];
		}
		ans+=".";
		ans+=c;
		if(ans[ans.length()-2]=='.'){
			if(cents<10){
				ans[ans.length()-1]='0';
				ans+=c;
			}else{
				ans+="0";
			}
		}
		return ans;
	}
};
