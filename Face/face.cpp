#include "face.h"
#include <string>
using namespace std;

// credit: emojidb.org
vector<string> FACE_LIST = {
    "(╯'□')╯︵ ┻━┻", 
    "(｡·́︿·̀｡)" ,
    "(ᵕ—_—)",
    "(｡• ‸ •｡)",
    "(•_•)", 
    "(˶ᵔ ᵕ ᵔ˶)",
    "◝(ᵔᵕᵔ)◜" ,
    "ദ്ദി(ᵔᗜᵔ)" ,
    "✧｡٩(ˊᗜˋ )و✧*｡",
};

string Emoticon::to_string(){
    return "0";
 
}

Emoticon::Emoticon(int happiness){
    this->happiness = happiness; 
}