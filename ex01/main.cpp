#include "Span.hpp"

int main()
{
Span sp = Span(5);
sp.addNumber(6);
sp.addNumber(3);
sp.addNumber(17);
sp.addNumber(9);
sp.addNumber(11);

std::cout << "size of 5 element" << std::endl;

std::cout << "  shortestSpan: " <<sp.shortestSpan() << std::endl;
std::cout << "  longestSpan: " <<sp.longestSpan() << std::endl;
std::cout << std::endl;

std::cout << "size of 10000 element" << std::endl;

Span sp2 = Span(10000);
sp2.addMultiNumbers(10000);

std::cout << "  shortestSpan: " << sp2.shortestSpan() << std::endl;
std::cout << "  longestSpan: " << sp2.longestSpan() << std::endl;

return 0;
}
