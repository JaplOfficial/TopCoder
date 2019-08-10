#include<bits/stdc++.h>
using namespace std;
class BombSweeper{
	public:
	double winPercentage(vector <string> board){
		cout<<fixed;
		cout<<setprecision(16);
		double bombs=0,free=0;
		for(int i=0;i<board.size();i++){
			for(int j=0;j<board[i].length();j++){
				if(board[i][j]=='B'){
					bombs++;
					if(i<board.size()-1&&board[i+1][j]!='B'){
						board[i+1][j]='*';
					}
					if(i>0&&board[i-1][j]!='B'){
						board[i-1][j]='*';
					}
					if(j<board[i].length()-1&&board[i][j+1]!='B'){
						board[i][j+1]='*';
					}
					if(j>0&&board[i][j-1]!='B'){
						board[i][j-1]='*';
					}
					if(i<board.size()-1&&j<board[i].length()-1&&board[i+1][j+1]!='B'){
						board[i+1][j+1]='*';
					}
					if(i<board.size()-1&&j>0&&board[i+1][j-1]!='B'){
						board[i+1][j-1]='*';
					}
					if(i>0&&j<board[i].length()-1&&board[i-1][j+1]!='B'){
						board[i-1][j+1]='*';
					}
					if(i>0&&j>0&&board[i-1][j-1]!='B'){
						board[i-1][j-1]='*';
					}
				}
			}
		}
		for(int i=0;i<board.size();i++){
			for(int j=0;j<board[i].length();j++){
				if(board[i][j]=='.'){
					free++;
				}
			}
		}
		return (free/(free+bombs))*100;
	}
};
