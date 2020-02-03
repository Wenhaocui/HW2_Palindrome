#include "src/lib/solution.h"
#include <iostream>
using namespace std;
int main() {
  Solution solution;
  std::string word1 = "madam";
  cout << solution.SimplePalindrome(word1) << std::endl;

  std::string word2 = "mada";
  cout<< solution.SimplePalindrome(word2)<< std::endl;

  std::string word3 = "A man, a plan, a canal, Panama!";
  std::cout<< solution.ApproximatePalindrome(word3) << std::endl;

  std::string word4 = "Was it a car or a cat I saw?";
  std::cout<< solution.ApproximatePalindrome(word4) << std::endl;

  std::string word5 = "No 'x' in Nixon";
  std::cout<< solution.ApproximatePalindrome(word5) << std::endl;
  return 0;
}