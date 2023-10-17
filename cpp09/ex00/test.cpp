#include <iostream>
#include <string>
#include <vector>
#include <sstream>

int main() {
  std::string input = "Hello,World,This,Is,A,Test";
  std::vector<std::string> result;
  std::stringstream ss(input);
  std::string token;

  while (std::getline(ss, token, ',')) {
    result.push_back(token);
  }
  for (int i = 0; i < result.size(); i++) {
    std::cout << result[i] << std::endl;
  }
  return 0;
}