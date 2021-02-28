#pragma once

#include <string>
#include <vector>

namespace CppCodingStandards
{

class BaseClass
{
public:
    BaseClass();
    virtual ~BaseClass();

    BaseClass( const BaseClass& ) = delete;
    BaseClass& operator=( const BaseClass& ) = delete;

    virtual void PureVirtualPrint( const std::vector<std::string>& strings ) const = 0;
};

}  // namespace CppCodingStandards
