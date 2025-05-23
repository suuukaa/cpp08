#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span{

    unsigned int max;
    std::vector<int> numbers;

    public :

        Span();
        Span(unsigned int N);
        Span(const Span &copy);
        Span& operator=(const Span &copy);
        ~Span();

        void addNumber(int);
        void addMultiNumbers(int);

        unsigned int shortestSpan() const;
        unsigned int longestSpan() const;
};

#endif