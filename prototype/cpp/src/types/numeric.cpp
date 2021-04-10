#include <cstdint>

#include "types/base.h"
#include "types/numeric.h"


/* Integer8 */
Integer8 Integer8::operator+(const Integer8& other) const {
    return Integer8(this->value + other.value);
}

Integer16 Integer8::operator+(const Integer16& other) {
    return Integer16(this->value) + other;
}

bool Integer8::check() {
    return true;
}

/* Integer16 */
Integer16 Integer16::operator+(const Integer16& other) {
    return Integer16(this->value + other.value);
}
