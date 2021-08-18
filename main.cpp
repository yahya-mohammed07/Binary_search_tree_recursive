#include <iostream>
#include "lib/bst.hpp"

auto main() -> int
{
  bst_<float> nums { 0, 3, 2, 5, 77, 33, -1, 88, 4, 1, -2, 0.5 };
  nums.print(3);
  std::puts("");
  std::cout << nums.max() << '\n';
  std::cout << nums.min() << '\n';
  std::cout << nums.contains(5) << '\n';
  std::cout << nums.depth(5) << '\n';

  if ( nums.find(55) != nums.end() ) {
    std::cout << *nums.find(55) << '\n';
  }
  std::cout << *nums.begin() << '\n';
  nums.remove(5);
  nums.print(2);
  bst_<float> nums_temp = nums;
  nums_temp.print(3);
  std::puts("");
}