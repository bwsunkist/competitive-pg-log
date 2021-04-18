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
      long long N, M;
      long long ans = 0;
      string s;
     
      cin >> N;
      vector<long long > A(N+1);
      vector<long long > B(N);
      for(int i = 0; i < N+1; i++){
        cin >> A[i];
      }
      for(int i = 0; i < N; i++){
        cin >> B[i];
      }
     
      for(int i = 0; i < N; i++){
        if(A[i] < B[i]){
          B[i] -= A[i];
          ans += A[i];
          if(B[i] <= A[i+1]){
            A[i+1] -= B[i];
            ans += B[i];
          }else{
            ans += A[i+1];
            A[i+1] = 0;
          }
        }else{
          ans += B[i];
        }
      }
      cout << ans << endl;
    }