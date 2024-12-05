#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
#include "face.h"
using namespace std;

extern vector<string> FACE_LIST;

TEST_CASE("Test can create and render neutral face") {
    Emoticon myobj = Emoticon(5);
    CHECK(myobj.to_string() == FACE_LIST[5]);
}

TEST_CASE("Test can create and render all faces") {
    for(int i = 0; i<FACE_LIST.size(); i++) {
        Emoticon face = Emoticon(i);
        CHECK(face.to_string() = FACE_LIST[i]);
    }
}