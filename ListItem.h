//
// Created by rummykhan on 9/21/17.
//

#ifndef LINKED_LIST_LISTITEM_H
#define LINKED_LIST_LISTITEM_H


class ListItem {
    int value;
    ListItem *next;
public:
    ListItem();

    explicit ListItem(int n);

    int getValue();

    void setValue(int n);

    void setNext(ListItem li);

    ListItem getNext();
};


#endif //LINKED_LIST_LISTITEM_H
