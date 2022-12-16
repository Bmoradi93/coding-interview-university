/**
 * 
*/

#include <iostream>
#include <list>

#pragma once

namespace ListImplementation
{
    class ListClass
    {
        public:
        short getSize(std::list<short>& l);
        short getCapacity(std::list<short>& l);
    };
}