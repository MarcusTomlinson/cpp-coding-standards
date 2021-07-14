#include <DerivedClass.h>

#include <iostream>
#include <mutex>
#include <thread>

using namespace CppCodingStandards;

static const float PI = 3.14159265359f;

namespace CppCodingStandards::Private
{

class DerivedClassImpl
{
public:
    DerivedClassImpl( DerivedClass::PrintToOutput printState )
        : printState( printState )
    {
    }

    int waitTime = 1;
    const DerivedClass::PrintToOutput printState;
    std::mutex mutex;
};

}  // namespace CppCodingStandards::Private

DerivedClass::DerivedClass( PrintToOutput printState )
    : p( std::make_unique<Private::DerivedClassImpl>( printState ) )
{
}

DerivedClass::~DerivedClass() = default;

void DerivedClass::PureVirtualPrint( const std::vector<std::string>& strings ) const
{
    if ( p->printState == PrintToOutput::Disabled )
    {
        return;
    }

    for ( const auto& string : strings )
    {
        std::cout << string << std::endl;
    }
}

float DerivedClass::SlowlyGetPi( int newWaitTime )
{
    std::lock_guard<std::mutex> lock( p->mutex );

    if ( newWaitTime != -1 )
    {
        p->waitTime = newWaitTime;
    }

    std::this_thread::sleep_for( std::chrono::seconds( p->waitTime ) );
    return PI;
}
