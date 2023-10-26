// Samuel Zarate
// SamuelZarate@csu.fullerton.edu
// @SamuelZarate
// Partner: @GonzalesxFernando

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  if (argc < 2) {
    std::cout << "Error: You must supply at least one number. \n";
    return 1;
  }
  double sum{0};
  for (int counter{1}; counter < argc; counter++) {
    sum = sum + stod(arguments.at(counter));
  }
  std::cout << sum << "\n";
  sum = {sum / (argc - 1)};
   std::cout << "Average = " << sum << "\n";
  return 0;
}
