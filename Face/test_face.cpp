#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
#include "face.h"

using namespace std;

TEST_CASE("Test can create and render all emoticons"){
    for(int i = 0; i<Emoticon::FACE_LIST.size(); i++){
        Emoticon face = Emoticon(i);
        CHECK(face.to_string() == Emoticon::FACE_LIST[i]);
    }
}

TEST_CASE("Test can make emoticon happier"){
    Emoticon face = Emoticon(0);
    face.make_happier();
    CHECK(face.happiness == 1);
}

TEST_CASE("Test can make emoticon sadder"){
    Emoticon face = Emoticon(1);
    face.make_sadder();
    CHECK(face.happiness == 0);
}