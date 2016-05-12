#include <base/public.h>
#include <base/text/impl.h>

namespace text {

///////////////////////////////////////////////////////////////////////////////

Manipulator::Manipulator( uint8 code_ )
    : code( code_ )
{
}

///////////////////////////////////////////////////////////////////////////////

Manipulator::~Manipulator()
{
}

///////////////////////////////////////////////////////////////////////////////

ColorManipulator::ColorManipulator( uint8 code_ )
    : Manipulator( code_ )
{
}

///////////////////////////////////////////////////////////////////////////////

ColorManipulator::~ColorManipulator()
{
}

///////////////////////////////////////////////////////////////////////////////

ColorManipulator&
ColorManipulator::operator=( const ColorManipulator& ref )
{
    code = ref.code;
    return *this;
}

///////////////////////////////////////////////////////////////////////////////

} // namespace text