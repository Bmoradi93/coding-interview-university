/**
 * 
*/

#include <iostream>
#include <list>
#include "modules.hpp"

namespace ListImplementation
{
    short ListClass::getSize(std::list<short>& l)
    {
        // std::cout << "Test!" << std::endl;
        std::list<short>::iterator itr;
        short list_size = 0;
        for(itr=l.begin(); itr != l.end(); itr++)
        {
            list_size = std::distance(l.begin(), itr);
        }
            std::cout << std::distance(l.begin(), itr) << std::endl;
        return list_size;
    }

    short ListClass::isEmpty(std::list<short>& l)
    {

    }
}