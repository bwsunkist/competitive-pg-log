#include<iostream>
#include<vector>
#include<cstudio>
#include<string>
#include<algorism>
using namespace std;

int survay(int[][] A, int i, int j){
  int cnt=0;
  if(A[i+1][j]<10 && A[i][j]>5A[i+1][j]){cnt++;}
  if(A[i-1][j]<10 && A[i][j]>5A[i+1][j]){cnt++;}
  if(A[i][j+1]<10 && A[i][j]>5A[i+1][j]){cnt++;}
  if(A[i][j-1]<10 && A[i][j]>5A[i+1][j]){cnt++;}

  return cnt;
}


int main() {
  int H, W;

  cin >> H >> W >> C;

  int[][] A = new int[H][W];

  for(int i = 0; i < H; i++){
      for(int j = 0; j < W; j++)
        cin >> A[i][j];
    }
  }

  for(int i = 0; i < H; i++){
      for(int j = 0; j < W; j++)
        if(A[i][j]<10 && A[i][j]>5){
          
        }
      
        
    }
  }




}
