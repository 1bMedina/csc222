#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
#include "face.h"
using namespace std;


TEST_CASE("Test can create and render all faces") {
    for(int i = 0; i<Emoticon::FACE_LIST.size(); i++) {
        Emoticon face = Emoticon(i);
        CHECK(face.to_string() == Emoticon::FACE_LIST[i]);
    }
}