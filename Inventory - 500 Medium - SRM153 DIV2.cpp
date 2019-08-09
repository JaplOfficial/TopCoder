#include<bits/stdc++.h>
using namespace std;
class Inventory{
	public:
	int monthlyOrder(vector <int> sales, vector <int> daysAvailable){
		double average=0;
		int k=0;
		cout<<fixed;
		cout<<setprecision(10);
		for(int i=0;i<sales.size();i++){
			if(daysAvailable[i]!=0){
				double a=sales[i];
				double b=daysAvailable[i];
				double m = (a*30)/b;
				average+=m;
			}else{
				k++;
			}
		}
		average/=(sales.size()-k);
		int y=floor(average);
		if(abs(y-average)<0.0000000001){
			return average;
		}
		return (int)ceil(average);
	}
};
