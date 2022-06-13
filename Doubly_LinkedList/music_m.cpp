#include "music.h"
int main()
{
    // FILE *fptr;
    // fptr = fopen("C:\\playlist.txt","w");
    // if(fptr == NULL)
    // {
    //     printf("Error!");
    //     exit(0);
    // }
    // int num = 10;
    // fprintf(fptr,"%d",num);
    // fclose(fptr);
    Node* head = NULL;
    Node* tail = NULL;
    append_playlist(&head,&tail,"song1");
    append_playlist(&head,&tail,"song2");
    //append_playlist(&head,&tail,"song3");
    display_all_tracks(head);
    return 0;
}