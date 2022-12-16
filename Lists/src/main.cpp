/**
 * 
*/

#include <iostream>
#include <vector>
#include <list>
#include <modules.hpp>

int main()
{
    std::list<short> mylist = {9,4,2,8,11,15,3};
    mylist.size();
    ListImplementation::ListClass test;
    test.getSize(mylist);
    return 0;
}