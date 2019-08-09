#include<bits/stdc++.h>
using namespace std;
class ProfitCalculator{
	public:
	int percent(vector <string> items){
		double total_e=0;
		double total_s=0;
		for(int i=0;i<items.size();i++){
			string d1="";d1+=items[i][0];d1+=items[i][1];d1+=items[i][2];
			string c1="";c1+=items[i][4];c1+=items[i][5];
			total_e+=(stoi(d1)*100)+stoi(c1);
			string d2="";d2+=items[i][7];d2+=items[i][8];d2+=items[i][9];
			string c2="";c2+=items[i][11];c2+=items[i][12];
			total_s+=(stoi(d2)*100)+stoi(c2);
		}
		double ans = ((total_e-total_s)/total_e)*100;
		int x=ans;
		return x;
	}
};
