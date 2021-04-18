#include <iostream>
#include <vector>
 
int main()
{
    std::vector<int> vec1{ 1, 2, 3, 4, 5 };
    std::vector<int> vec2{ 9, 8, 7 };
 
    //vec2にvec1の要素をすべてコピー
    vec2 = vec1;
 
    //コピー元を書き換えてもコピー先に影響しない
    vec1[0] = 10;
    std::cout << vec2[0] << std::endl;
    std::cout << vec2[1] << std::endl;
    std::cout << vec2[2] << std::endl;
    std::cout << vec2[3] << std::endl;
    std::cout << vec2[4] << std::endl;
 
}
