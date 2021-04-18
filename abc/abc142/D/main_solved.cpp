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
 
//最大公約数を求める
long long gcd(long long a, long long b){
  if(b == 0){
    return a;
  }
  return gcd(b, a%b);
}
 
//最小公倍数を求める
long long lcm(long long a, long long b){
  return a*b/gcd(b, a%b);
}
 
int main() {
  long long A, B;
  long long ans = 1;
 
  cin >> A >> B;
 
  long long maxKY = gcd(A,B); 
  long long lasti= 0;

	long long num = maxKY; // 最大公約数を素因数分解する>num 

	for (long long i = 2; i*i <= maxKY; i++) {
		while (num%i == 0) { //素数で割れる間はループ
      if(lasti == 0){
        ans++;//既出でない素数ならカウント
      }
			num /= i;
      lasti=i;//既出カウント
		}
    lasti=0;//既出カウントリセット
	}

  if(num != 1){
    //素数で割り切ったあまりが1でなければカウント
    ans++;
  }  

  cout << ans << endl;
}
 