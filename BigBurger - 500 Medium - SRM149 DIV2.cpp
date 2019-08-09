#include<bits/stdc++.h>
using namespace std;
class BigBurger{
	public:
	int maxWait(vector <int> arrival, vector <int> service){
	int t = 0;
	int ret = 0;
	for(int i = 0; i < arrival.size(); i++){
 	    if(arrival[i] > t)t=arrival[i];
  		    ret = max(ret,t-arrival[i]);
   			t += service[i];
		}
		return ret;
	}
};
