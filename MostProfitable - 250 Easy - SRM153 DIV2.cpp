#include<bits/stdc++.h>
using namespace std;
class MostProfitable{
	public:
	int pos;
	string bestItem(vector <int> costs, vector <int> prices, vector <int> sales, vector <string> items){
		int m=0;
		for(int i=0;i<costs.size();i++){
			int p=(prices[i]-costs[i])*sales[i];
			if(p>m){
				m=p;
				pos=i;
			}
		}
		if(m<=0){
			return "";
		}else{
			return items[pos];
		}
	}
};
