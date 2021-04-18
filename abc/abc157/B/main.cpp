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
  int N, M;
  int ans = 0;
  vector<int> A1(3);
  vector<int> A2(3);
  vector<int> A3(3);
  vector<int> x(3, 0);
  vector<int> y(3, 0);
  vector<int> z(3, 0);
//  vector<pair<int,int>> AB(N);

  for(int i = 0; i < 3; i++){
    cin >> A1[i] >> A2[i] >> A3[i]; 
  }
  cin >> N;
  vector<int> b(N);
  for(int i = 0; i < N; i++){
    cin >> b[i];
  }

  for(int i = 0; i < N; i++){
    for(int j = 0; j < 3; j++){
      if(b[i] == A1[j]){
        x[j]++;
      }
      else if(b[i] == A2[j]){
        y[j]++;
      }
      else if(b[i] == A3[j]){
        z[j]++;
      }
    }
  }

  // for(int i = 0; i < 3; i++){
  //   cout << x[i] << "_" << y[i] << "_" << z[i] << endl; 
  // }

  if(x[0] > 0 && y[1] > 0 && z[2] > 0){
    cout << "Yes" << endl;
    return 0;
  }
  else if(x[2] > 0 && y[1] > 0 && z[0] > 0){
    cout << "Yes" << endl;
    return 0;
  }
  
  for(int i = 0; i < 3; i++){
    if(x[i] > 0 && y[i] > 0 && z[i] > 0){
      cout << "Yes" << endl;
      return 0;
    }
  }


    if(x[0] > 0 && x[1] > 0 && x[2] > 0){
      cout << "Yes" << endl;
      return 0;
    }
    else if(y[0] > 0 && y[1] > 0 && y[2] > 0){
      cout << "Yes" << endl;
      return 0;
    }
    else if(z[0] > 0 && z[1] > 0 && z[2] > 0){
      cout << "Yes" << endl;
      return 0;
    }


  cout << "No" << endl;

}
