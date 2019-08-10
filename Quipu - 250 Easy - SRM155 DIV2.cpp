#include<bits/stdc++.h>
using namespace std;
class Quipu{
	public:
	int readKnots(string knots){
		string rope="";
		int x=0;
		int d=0;
		for(int i=0;i<knots.length();i++){
			if(knots[i]=='X'){
				x++;
				if(d>1){
					for(int i=0;i<d-1;i++){
						rope+="0";
					}
				}
				d=0;
			}else{
				d++;
				if(x>0){
					rope+=to_string(x);
				}
				x=0;
			}
		}
		if(d>1){
			for(int i=0;i<d-1;i++){
					rope+="0";
			}
		}
		if(x>0){
			for(int i=0;i<d-1;i++){
				rope+="0";
			}
		}
		return stoi(rope);
	}
};
