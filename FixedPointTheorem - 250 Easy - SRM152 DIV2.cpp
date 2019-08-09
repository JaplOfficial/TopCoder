#include<bits/stdc++.h>
using namespace std;
int MAXN = 200000;
class FixedPointTheorem{
	public:
	double cycleRange(double R){
		double X = 0.25;
		cout<<fixed;
		cout<<setprecision(20);
		for(int i=0;i<MAXN;i++){
			X=R*X*(1-X);
		}
		double a=INT_MAX;
		double b=0;
		for(int i=0;i<1000;i++){
			X=R*X*(1-X);
			if(X<a){
                a=X;
			}
			if(X>b){
                b=X;
			}
		}
		return b-a;

	}
};
