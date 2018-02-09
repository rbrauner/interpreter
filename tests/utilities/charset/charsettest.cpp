#include "charsettest.h"

CharSetTest::CharSetTest()
    : bin{{'0', '1'}}, dec{"9081726354"}, hex{"0123456789abcdef"} {}

CharSetTest::~CharSetTest() {
  bin.~CharSet();
  dec.~CharSet();
  hex.~CharSet();
}
