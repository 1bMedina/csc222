#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
#include "face.h"
using namespace std;

TEST_CASE("Test can create and render MyObject") {
    Face myobj = Face(1);
    CHECK(myobj.to_string() == "This is MyObject");
}