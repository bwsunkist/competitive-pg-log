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

std::vector<std::string> split(std::string str, string del) {
    int first = 0;
    int last = str.find_first_of(del);
 
    std::vector<std::string> result;
 
    while (first < str.size()) {
        std::string subStr(str, first, last - first);
 
        result.push_back(subStr);
 
        first = last + 1;
        last = str.find_first_of(del, first);
 
        if (last == std::string::npos) {
            last = str.size();
        }
    }
 
    return result;
}

int main() {
  int N, M;
  int ans = 0;
  string s = "1, 1, 1, 2, 1, 2, 1, 5, 2, 2, 1, 5, 1, 2, 1, 14, 1, 5, 1, 5, 2, 2, 1, 15, 2, 2, 5, 4, 1, 4, 1, 51"; 

  cin >> N;

  vector<string> sp(s.length());
  sp = split(s, ", ");
  // int spn = sp.size();
  // for(int i = 0; i<spn; i+=2 ){
  //   cout << i << " = " << sp[i] << ", ";
  // }

  cout << sp[(N-1)*2] << endl;

}
