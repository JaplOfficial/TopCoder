#include<bits/stdc++.h>
using namespace std;
class BenfordsLaw{
	public:
	int questionableDigit(vector <int> transactions, int threshold){
		vector<int>occur(10);
		int n=transactions.size();
		vector<double>law;
		cout<<fixed;
		cout<<setprecision(20);
		for(double i=1;i<=9;i++){
			law.push_back(n*(log(1+(1.0/i))/log(10)));
		}
		for(int i=0;i<transactions.size();i++){
			string x=to_string(transactions[i]);
			occur[x[0]-48]++;
		}
		for(int i=1;i<=9;i++){
			if((law[i-1]/threshold)>occur[i]||(law[i-1]*threshold)<occur[i]){
				return i;
			}
		}
		return -1;
	}
};
