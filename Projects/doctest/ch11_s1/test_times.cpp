#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
#include "Time.h"
using namespace std;

TEST_CASE("Test can create and render Times") {
    Time t1;
    CHECK(t1.toString() == "0:00:00");
    Time t2(7);
    CHECK(t2.toString() == "0:00:07");
    Time t3(72);
    CHECK(t3.toString() == "0:01:12");
    Time t4(7 * 3600 + 11 * 60 + 19);
    CHECK(t4.toString() == "7:11:19");
};

TEST_CASE("Test hour-minute and hour-minute-second constructors") {
    Time t1(5, 37);
    CHECK(t1.toString() == "5:37:00");
    Time t2(7, 2, 11);
    CHECK(t2.toString() == "7:02:11");
}