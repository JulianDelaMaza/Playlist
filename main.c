#include "playlist.h"
#include <stdio.h>
#include <stdlib.h>

int main(){
    add_song("La camisa negra", "Juanes");
    add_song("Diluvio", "Rauw Alejandro");
    show_playlist();
    free_playlist();
    return 0;
}