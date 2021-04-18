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
      long long  N, M;
      long long  ans = 0;
      string s;
     
      cin >> N;
     
      vector<long long > A(N);
      vector<long long > B(N);
      for(long long  i = 0; i < N; i++){
        cin >> A[i];
        B[i]= A[i];
      }
      sort(B.begin(), B.end());
     
      for(long long  i = 0; i < N; i++){
        if(B[N-1] == A[i]){
          cout << B[N-2] << endl;
        }else{
          cout << B[N-1] << endl;
        }
      }
    }