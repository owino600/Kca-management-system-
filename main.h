#ifndef __MAIN_H__
#define __MAIN_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct dante
{
    int user_id;
    char username[50];
    char email[50];
    struct dante *next;
};

dante *createUser(int id, char *name, char *email);
void Insertdante(struct dante **Head, int id, char *name, char *email);
void displaydante(struct dante *head);

#endif