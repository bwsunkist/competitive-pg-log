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
  long long  x, y, a, b, c;

  cin >> x >> y >> a >> b >> c;

  vector<long long> p(a);
  vector<long long> q(b);
  vector<long long> r(c);
  vector<pair<long long,long long>> al(a+b+c);
  for(int i = 0; i < a; i++){
    cin >> p[i];
  }
  for(int i = 0; i < b; i++){
    cin >> q[i];
  }
  for(int i = 0; i < c; i++){
    cin >> r[i];
  }

  for(int i = 0; i < (a+b+c); i++){
    if( i < a ){
      al[i] = make_pair(p[i], 1);
    }else if(a<=i && i < (a+b)){
      al[i] = make_pair(q[i-a], 2);
    }else if((a+b)<=i && i < (a+b+c)){
      al[i] = make_pair(r[i-(a+b)], 3);
    }
  }
  sort(al.begin(), al.end());
  reverse(al.begin(), al.end());
  
  long long ans = 0;
  long long tx = 0;
  long long ty = 0;
  long long tz = 0;
  long long xyz = x+y;

  for(int i = 0; i < (a+b+c); i++){
    // cout << i << "th first = " << al[i].first << ", second = "<< al[i].second << endl;
 
    if(al[i].second == 1){
      if(tx >= x){
        // cout << "x max" << endl;
        continue;
      }
      tx++;
      ans += al[i].first;
      // cout << "x = " << tx << ", ans = " << ans << endl;
    }

    if(al[i].second == 2){
      if(ty >= y){
        // cout << "y max" << endl;
        continue;
      }
      ty++;
      ans += al[i].first;
      // cout << "y = " << ty << ", ans = " << ans << endl;
   }

    if(al[i].second == 3){
      tz++;
      ans += al[i].first;
      // cout << "z = " << tz << ", ans = " << ans << endl;
    }

    if((tx+ty+tz) == xyz){
      break;
    }
  }

  cout << ans << endl;
  return 0;
}
