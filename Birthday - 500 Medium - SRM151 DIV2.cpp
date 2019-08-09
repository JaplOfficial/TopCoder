#include<bits/stdc++.h>
using namespace std;
class Birthday{
	public:
	int pos;
	string getNext(string date, vector <string> birthdays){
		 string name="";
    int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};
		vector<int>list;
		string r1="";
		string r2="";
		r2+=date[3];r2+=date[4];
		r1+=date[0];r1+=date[1];
		int day=stoi(r2);
		for(int i=0;i<stoi(r1)-1;i++){
			day+=days[i];
		}
		int m=0;
		for(int i=0;i<birthdays.size();i++){
			string r3="";
			string r4="";
			r4+=birthdays[i][3];r4+=birthdays[i][4];
			r3+=birthdays[i][0];r3+=birthdays[i][1];
			int day2=stoi(r4);
			for(int j=0;j<stoi(r3)-1;j++){
				day2+=days[j];
			}
			m=max(m,day2);
			list.push_back(day2);
		}
		if(day>m){
			day=0;
		}
		int closest=INT_MAX;
		for(int i=0;i<list.size();i++){
			if(list[i]<day){
				continue;
			}
			if(list[i]-day<closest){
				closest=list[i]-day;
				string x="";
				for(int j=0;j<5;j++){
                    x+=birthdays[i][j];
				}
				name=x;
			}
		}
		return name;
	}
};
