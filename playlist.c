#include <stdio.h>
#include <stdlib.h>

struct t_song {
    struct t_song* next;
    char* title;
    char* artist;
    struct t_song* previous;
};

struct t_song* playlist = NULL;

struct t_song* firstSong = NULL;

struct t_song* current = NULL;

void add_song(char* title, char* artist){
    struct t_song* song = malloc(sizeof(struct t_song));
    song->artist = artist;
    song->title = title;
    if(playlist != NULL){
    song->previous = playlist;
    song->next = firstSong;
    playlist->next = song;
    playlist = song;
    firstSong->previous = playlist;
    }else{
        firstSong = song;
        playlist = song;
        song->next = song;
        song->previous = song;
    }
}
void show_playlist(){
    int i=2;
    current = firstSong;
    printf("\nCancion 1: %s\n Artista: %s\n Siguiente cancion: %s\n",current->title,current->artist, current->next->title);
    current = current->next;
    while(current!=firstSong){
        printf("\nCancion %i: %s\n Artista: %s\n Siguiente cancion: %s\n",i,current->title,current->artist,current->next->title);
        i++;
        current = current->next;
    }
}

void free_playlist(){
    current = firstSong;
    if(current->next == current){
        free(current);
    }else{
        current=current->next;
        while(current!=firstSong){
            current=current->next;
            free(current->previous);
    }
    free(current);
}
}