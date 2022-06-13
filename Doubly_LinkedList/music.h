#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
typedef struct st
{
    struct st* prev;
    string song;
    struct st* next;
}Node;
Node* Create_playlist(string);
void append_playlist(Node** head,Node** tail,string);
void jump(Node**current , Node* jumpto);
void next(Node** current);
void first_track(Node* head);
void last_track(Node* tail);
void add_before(Node** head,Node** tail,int,string);
void add_after(Node** head,Node** tail,int,string);
void remove(Node**head,Node* toremove);
//void sort();
void display_all_tracks(Node* head);
