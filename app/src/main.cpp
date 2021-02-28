#include <DerivedClass.h>

#include <future>
#include <iostream>

using namespace CppCodingStandards;

template <typename T>
using SPtr = std::shared_ptr<T>;

int main()
{
    SPtr<BaseClass> base = std::make_shared<DerivedClass>( DerivedClass::PrintToOutput::Enabled );

    auto piFunction = [base]() {
        auto derived = std::dynamic_pointer_cast<DerivedClass>( base );

        if ( derived != nullptr )
        {
            return derived->SlowlyGetPi();
        }

        return 0.0f;
    };

    auto pi = std::async( piFunction );

    base->PureVirtualPrint( {"1", "two", "11", "0x4", "V"} );

    std::cout << "Pi: " << pi.get();

    return 0;
}
