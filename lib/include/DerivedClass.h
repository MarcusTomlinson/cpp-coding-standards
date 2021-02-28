#pragma once

#include <BaseClass.h>

#include <memory>

namespace CppCodingStandards
{

namespace Private
{
class DerivedClassImpl;
}

class DerivedClass final : public BaseClass
{
public:
    enum class PrintToOutput
    {
        Enabled,
        Disabled
    };

    explicit DerivedClass( PrintToOutput printState );
    ~DerivedClass();

    DerivedClass( const DerivedClass& ) = delete;
    DerivedClass& operator=( const DerivedClass& ) = delete;

    void PureVirtualPrint( const std::vector<std::string>& strings ) const override;

    float SlowlyGetPi( int newWaitTime = -1 );

private:
    std::unique_ptr<Private::DerivedClassImpl> p;
};

}  // namespace CppCodingStandards
