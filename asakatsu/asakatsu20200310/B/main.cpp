#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<cmath>
#include<math.h>
#include<algorithm>
#include<string.h>
#include <iomanip>
#include <sstream>
using namespace std;

int main() {
  int H, W;
  int ans = 0;

  cin >> H >> W;

  vector<string> s(H);
  vector<vector<int>> flg(H, vector<int>(W));
  vector<vector<int>> ttl(H, vector<int>(W));
  for(int i = 0; i < H; i++){
    cin >> s[i];
  }  
  for(int i = 0; i < H; i++){
    for(int j = 0; j < W; j++){
      if(s[i][j] == '#'){
        if(i != 0){
          if(s[i-1][j] == '.'){
            flg[i][j]++;
            ttl[i][j]++;
          }else{
            ttl[i][j]++;
          }
        }
        if(i != (H-1)){
          if(s[i+1][j] == '.'){
            flg[i][j]++;
            ttl[i][j]++;
          }else{
            ttl[i][j]++;
          }          
        }
        if(j != 0){
          if(s[i][j-1] == '.'){
            flg[i][j]++;
            ttl[i][j]++;
          }else{
            ttl[i][j]++;
          }          
        }
        if(j != (W-1)){
          if(s[i][j+1] == '.'){
            flg[i][j]++;
            ttl[i][j]++;
          }else{
            ttl[i][j]++;
          }          
        }
      }
      if((ttl[i][j] == flg[i][j]) && flg[i][j] != 0){
        ans++;
      }
    }
  }
  // for(int i = 0; i < H; i++){
  //   for(int j = 0; j < W; j++){
  //     cout << "(" << flg[i][j] << ", " << ttl[i][j] << "), " ;
  //   }
  //   cout << endl;
  // }

  // int allflg = 0;
  // for(int i = 0; i < H; i++){
  //   for(int j = 0; j < W; j++){
  //     if(flg[i][j] == ttl[i][j]){
  //       if((i == 0 && j == 0) || (i == 0 && j == (W-1)) 
  //           || (i == (H-1) && j == 0) || (i == (H-1) && j == (W-1))){
            
  //       }
  //       allflg++;
  //     }
  //   }
  // }
  if(ans > 0){
    cout << "No" << endl;
  }else{
    cout << "Yes" << endl;
  }

}
