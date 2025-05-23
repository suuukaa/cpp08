#include "easyfind.hpp"

int main(){

    std::list<int> list;

    list.push_back(2);
    list.push_back(3);
    list.push_back(76);
    list.push_back(34);
    list.push_back(23);

    try{
        std::list<int>::const_iterator it = easyfind(list, 23);
        std::cout << "found : " << *it << std::endl;

    }catch(std::exception &e){
         std::cout << "Exception: " << e.what() << std::endl;
    }

    try{
        std::list<int>::const_iterator it = easyfind(list, 333);
        std::cout << "found : " << *it << std::endl;

    }catch(std::exception &e){
         std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}