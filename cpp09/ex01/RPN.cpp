#include "RPN.hpp"

Rpn::Rpn(){}

Rpn::~Rpn(){}

Rpn::Rpn(const Rpn &src)
{
  *this = src;
}

Rpn &Rpn::operator=(const Rpn &src)
{
  if (this != &src){
    this->rpn = src.rpn;
  }
  return *this;
}

void Rpn::calculate(std::string operation)
{
  std::stringstream ss(operation);
  std::string op;

  while (std::getline(ss, op, ' ')){
    if (op[0] >= '0' && op[0] <= '9')
      rpn.push(std::atoi(op.c_str()));

    if (op == "+" || op == "-" || op == "*" || op == "/" || op == "%"){
      if (rpn.size() < 2){
        std::cout << "Error" << std::endl;
        return ;
      }
      int a = rpn.top();
      rpn.pop();
      int b = rpn.top();
      rpn.pop();
      if (op == "+")
        rpn.push(b + a);
      else if (op == "-")
        rpn.push(b - a);
      else if (op == "*")
        rpn.push(b * a);
      else if (op == "/")
        rpn.push(b / a);
      else if (op == "%")
        rpn.push(b % a);
    }
  }
  if (rpn.size() != 1)
    std::cout << "Error" << std::endl;
  else
    std::cout << rpn.top() << std::endl; 
}