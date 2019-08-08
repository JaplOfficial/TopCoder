#include<bits/stdc++.h>
using namespace std;
class CCipher{
	public:
	string decode(string cipherText, int shift){
		vector<char>a={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',
					   'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
		string ans = "";
		for(int i=0;i<cipherText.length();i++){
			for(int j=26;j<=51;j++){
				if(cipherText[i]==a[j]){
					ans+=a[j-shift];
					break;
				}
			}
		}
		return ans;
	}
};
