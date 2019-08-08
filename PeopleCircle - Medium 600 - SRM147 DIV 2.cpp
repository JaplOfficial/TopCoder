#include<bits/stdc++.h>
using namespace std;
class PeopleCircle{
	public:
	string order(int numMales, int numFemales, int K){
		vector<char>a;
		string ans = "";
		for(int i=0;i<numMales+numFemales;i++){
			a.push_back('M');
		}
		int pos=0;
		while(numFemales!=0){
			int x=0;
			while(x!=K){
				x++;
				pos++;
				if(pos==(numMales+numFemales)-1){
					pos=0;
				}
			}
			a[pos-1]='F';
			numFemales--;
		}
		for(int i=0;i<a.size();i++){
			ans+=a[i];
		}
		return ans;
	}
};
