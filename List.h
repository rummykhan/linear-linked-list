//
// Created by rummykhan on 9/21/17.
//

#ifndef LINKED_LIST_LIST_H
#define LINKED_LIST_LIST_H

#include "ListItem.h"

class List {
    ListItem items[100];
    int elementNo;
public:

    List();

    void push(ListItem item);

    void pop();

    int getElements();

    ListItem getItem(int no);

    ListItem getFirst();

private:
    void setPointer();
};


#endif //LINKED_LIST_LIST_H
