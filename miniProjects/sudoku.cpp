#include<iostream>
#include<vector>
using namespace std;


bool possible(int r, int c, int n, vector<vector<int>> &board){
	for(int i=0; i<9; i++){
		if(board[r][i] == n || board[i][c] == n) return false;
	}
	int r_base = (r/3)*3;
	int c_base = (c/3)*3;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			if(board[r_base+i][c_base+j] == n) return false;
		}
	}
	return true;
}

void print_board(vector<vector<int>> &board){
	cout << "-------------------" << endl;
	for(int i=0; i<9; i++){
		cout << "|";
		for(int j=0; j<9; j++){
			cout << board[i][j];
			if((j+1)%3 == 0) cout << "|";
			else cout << " ";
		}
		cout << endl;
		if((i+1)%3 == 0) cout << "-------------------" << endl; 
	}
}


void solve(vector<vector<int>> &board){
	for(int i=0; i<9; i++){
		for(int j=0; j<9; j++){
			if(board[i][j] == 0){
				for(int k=1; k<10; k++){
					if(possible(i, j, k, board)){
						board[i][j] = k;
						solve(board);
						board[i][j] = 0;
					}
				}
				return;
			}
		}
	}
	print_board(board);
	exit(0);
}


int main(){
	vector<int> r0, r1, r2, r3, r4, r5, r6, r7, r8 = {};
	vector<vector<int>> board = {r0, r1, r2, r3, r4, r5, r6, r7, r8};

	int temp;
	for(int i=0; i<9; i++){
		for(int j=0; j<9; j++){
			cin >> temp;
			board[i].push_back(temp);
		}
	}
	cout << endl;
	solve(board);
	
	return 0;
}
