#include "main.h"

/*create a new user node*/
dante *createUser(int id, char *name, char *email)
{
    dante *newUser;
    newUser = (dante *)malloc(sizeof(dante))
    newUser->user_id = id;
    strcpy(newUser->username, name);
    strcpy(newUser->email, email);
    newUser->next = NULL;
    return newUser;

}