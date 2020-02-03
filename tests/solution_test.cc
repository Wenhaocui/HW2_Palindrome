#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(FindSimplePalindrome, HandlesSimplePalindromes) {
  Solution solution;
  std::string word1 = "madam";
  std::string expected1 = "madam is a palindrome";
  std::string word2 = "mada";
  std::string expected2 = "mada is not a palindrome";
  EXPECT_EQ(solution.SimplePalindrome(word1), expected1);
  EXPECT_EQ(solution.SimplePalindrome(word2), expected2);
}


TEST(FindMedianTest, HandlesConsecutiveNumbers) {
  Solution solution;
  std::string word3 = "A man, a plan, a canal, Panama!";
  std::string expected3 = "amanaplanacanalpanamais a palindrome";

  std::string word4 = "Was it a car or a cat I saw?";
  std::string expected4 = "wasitacaroracatisawis a palindrome";

  std::string word5 = "No 'x' in Nixon";
  std::string expected5 = "noxinnixonis a palindrome";

  EXPECT_EQ(solution.ApproximatePalindrome(word3), expected3);
  EXPECT_EQ(solution.ApproximatePalindrome(word4), expected4);
  EXPECT_EQ(solution.ApproximatePalindrome(word5), expected5);
}
