#include "face.h"
#include <string>
#include <vector>

using namespace std;

vector<string> Emoticon::FACE_LIST = {
    "(╯'□')╯︵ ┻━┻", 
    "(｡·́︿·̀｡)", 
    "(ᵕ—_—)", 
    "(｡• ‸ •｡)", 
    "(•_•)", 
    "(˶ᵔ ᵕ ᵔ˶)",
    "◝(ᵔᵕᵔ)◜"
    "ദ്ദി(ᵔᗜᵔ)",
    "✧｡٩(ˊᗜˋ )و✧*｡",
};

string Emoticon::to_string(){
    return FACE_LIST[happiness];
}

Emoticon::Emoticon(int happiness){
    this->happiness = happiness;
}

void Emoticon::make_happier(){
    this->happiness++;
    if(this->happiness > 9 ) this->happiness = 9;
}

void Emoticon::make_sadder(){
    this->happiness--;
    if(this->happiness < 0) this->happiness = 0;
}

