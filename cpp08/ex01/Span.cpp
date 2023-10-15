#include "Span.hpp"

Span::Span():N(0){}

Span::Span(unsigned int n):N(n){}

Span::Span(const Span &src){
	*this = src;
}

Span &Span::operator=(const Span &src)
{
	if (this != &src){
		this->N = src.N;
		this->intVector = src.intVector;
	}
	return *this;
}

Span::~Span(){ }

void Span::addNumber(int n){
	if (this->N > 0){
		this->intVector.push_back(n);
		this->N--;
	}
	else
		throw Span::AlreadyFilledSpan();
}

int Span::longestSpan(){
	if (this->intVector.size() <= 1)
		throw Span::NoSpanFound();
  std::vector<int>  tmp;
  tmp = this->intVector;
  std::sort(tmp.begin(), tmp.end());
	return (tmp.back() - tmp.front());
}

void Span::addInRange(std::vector<int>::iterator begin, std::vector<int>::iterator end){
  if (end - begin > static_cast<long>(this->N - this->intVector.size()))
    throw Span::AlreadyFilledSpan();
  this->intVector.insert(this->intVector.end(), begin, end);
}

int Span::shortestSpan(){
	if (this->intVector.size() <= 1)
		throw Span::NoSpanFound();
  std::vector<int>  tmp;
  tmp = this->intVector;
  std::sort(tmp.begin(), tmp.end());
  std::vector<int>::iterator it = tmp.begin();
  return (*(it + 1) - *it);
}

const char *Span::AlreadyFilledSpan::what() const throw(){
	return ("Already N elements stored");
}

const char* Span::NoSpanFound::what() const throw(){
	return ("No span found or only one element stored");
}
