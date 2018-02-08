#include "numbertest.h"

NumberTest::NumberTest()
    : bin{new Bin{"111100"}}, dec{new Dec{60}}, hex{new Hex{"3c"}} {}

NumberTest::~NumberTest() {
  bin->~Number();
  dec->~Number();
  hex->~Number();
}
