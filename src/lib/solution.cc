#include "solution.h"
#include <iostream>

std::string Solution::SimplePalindrome(std::string &inputs) {
  if (inputs == std::string(inputs.rbegin(), inputs.rend())) {
    return inputs + " is a palindrome";
  }else
  {
    return inputs + " is not a palindrome";
  }
  
}

std::string Solution::ApproximatePalindrome(std::string &inputs){
  std::for_each(inputs.begin(), inputs.end(), [](char & c){
    c = ::tolower(c);
  });
  
  inputs.erase (std::remove_if (inputs.begin(), inputs.end(), ispunct), inputs.end());
  
  inputs.erase (std::remove_if (inputs.begin(), inputs.end(), isspace), inputs.end());
  if (inputs == std::string(inputs.rbegin(), inputs.rend())) {
    return inputs +"is a palindrome";
  }else
  {
    return inputs +"is not a palindrome";
  }
}