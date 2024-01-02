#include "main.h"
/*insert node at the end*/

void Insertdante(struct dante **Head, int id, char *name, char *email)
{
    dante *newUser;
    newUser = createUser(id, name, email)
    if (*head == NULL)
    {
        *head = newUser;
        return;
    }
    dante *temp = *head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newUser;
}