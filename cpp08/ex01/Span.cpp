#include "Span.hpp"

Span::Span():N(0){}

Span::Span(unsigned int n):N(n){}

Span::Span(const Span &src){
	*this = src;
}

Span& Span::operator=(const Span &src)
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

int Span::shortestSpan(){
	if (this->intVector.size() <= 1)
		throw Span::NoSpanFound();
	/* create a coppy of the vector */
  std::vector<int>  tmp;
  tmp = this->intVector;
	/* sort the vector */
  std::sort(tmp.begin(), tmp.end());
	/* set iterator to the first element */
  std::vector<int>::iterator it = tmp.begin();
	/* - set value to the difference between the first and second element */
	int value = *(it + 1) - *it;
	/* 
	 - iterate through the vector
	 - compare the difference between the current and next element
	 - if the difference is smaller than the value, set the value to the difference
	*/
	while (it != (tmp.end() - 1)){
		if (value > *(it + 1) - *it)
			value = *(it + 1) - *it;
		it++;
	}
  return (value);
}

void Span::addInRange(std::vector<int>::iterator begin, std::vector<int>::iterator end){
  if (end - begin > static_cast<long>(this->N - this->intVector.size()))
    throw Span::AlreadyFilledSpan();
  this->intVector.insert(this->intVector.end(), begin, end);
}

const char *Span::AlreadyFilledSpan::what() const throw(){
	return ("Already N elements stored");
}

const char* Span::NoSpanFound::what() const throw(){
	return ("No span found or only one element stored");
}
