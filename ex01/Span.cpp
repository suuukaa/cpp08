#include "Span.hpp"

Span::Span() : max(0), numbers(){}

Span::Span(unsigned int N): max(N), numbers(){}

Span::Span(const Span &copy): max(copy.max), numbers(copy.numbers) {}

Span& Span::operator=(const Span &copy){
    if (this != &copy){
        max = copy.max;
        numbers = copy.numbers;
    }
    return *this;
}

Span::~Span(){}

void Span::addNumber(int n){
    if (numbers.size() >= max)
            throw std::runtime_error("Span is full");
    numbers.push_back(n);
}

void Span::addMultiNumbers(int count){
    if (numbers.size() + count > max)
        throw std::runtime_error("Not enough space to add all numbers");
    for (int i = 0; i < count; i++){
        addNumber(i);
    }
}

unsigned int Span::shortestSpan() const{
    if (numbers.size() < 2)
    throw std::runtime_error("Not enough numbers to calculate a span");

    std::vector<int> copy = numbers;
    std::sort(copy.begin(), copy.end(), std::greater<int>());

    unsigned int minSpan  = copy[0] - copy[1];
    for (size_t i = 1; i < copy.size(); i++){
        unsigned int diff = copy[i - 1] - copy[i];
        if(minSpan > diff)
            minSpan = diff;
    }
    return minSpan;
}

unsigned int Span::longestSpan() const{
    if(numbers.size() < 2)
        throw std::runtime_error("Not enough numbers to calculate a span");

    std::vector<int>::const_iterator minIt = std::min_element(numbers.begin(), numbers.end());
    std::vector<int>::const_iterator maxIt = std::max_element(numbers.begin(), numbers.end());
    return *maxIt - *minIt;
}
