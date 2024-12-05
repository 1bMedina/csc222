#include "face.h"
#include <string>

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
    
}
