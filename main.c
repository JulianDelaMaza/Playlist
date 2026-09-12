#include "playlist.h"
#include <stdio.h>
#include <stdlib.h>

int main(){
    add_song("La camisa negra", "Juanes");
    add_song("Diluvio", "Rauw Alejandro");
    add_song("222", "Yan block");
    show_playlist();
    delete_song("Diluvio", "Rauw Alejandro");
    show_playlist();
    free_playlist();
    return 0;
}