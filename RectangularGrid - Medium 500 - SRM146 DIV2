#include<bits/stdc++.h>
using namespace std;
class RectangularGrid{
  public:
  long countRectangles(int width, int height){
  		long ans = 0;
  		for(int i=1;i<=height;i++){
  			for(int j=1;j<=width;j++){
  				if(i!=j){
  				   	ans+=(width-j+1)*(height-i+1);
  				}
  			}
  		}
  		return ans;
  }

};
