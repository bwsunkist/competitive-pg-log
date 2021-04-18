#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;

int main() {
  long long  ans=0;
  long long N;
  long long tmp = 0;
  int flag =0;
  
  cin >> N;
  
  vector<long long > A(N),B(N);
  vector<pair<long ,long>> BA(N);
  for(int i = 0; i < N; i++){
    cin >> A[i] >> B[i];
    BA[i] = make_pair(B[i], A[i]);
  }

  sort(BA.begin(), BA.end());

  //  cout << " --- " << endl;

  for(int i = 0; i < N; i++){
    tmp += BA[i].second;

    if(tmp > BA[i].first){
      flag++;
    }
    
    //    cout << "BA[" << i << "].first = " << BA[i].first << "  ";
    //    cout << "BA[" << i << "].second = " << BA[i].second << endl;
  }

  if(flag > 0){
    cout << "No" << endl;
  }else{
    cout << "Yes" << endl;
  }
}
