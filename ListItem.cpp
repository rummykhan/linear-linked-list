//
// Created by rummykhan on 9/21/17.
//

#include "ListItem.h"

ListItem::ListItem() {
    value = 0;
    next = 0;
}

ListItem::ListItem(int n) {
    value = n;
    next = 0;
}

int ListItem::getValue() {
    return value;
}

void ListItem::setValue(int n) {
    value = n;
}

void ListItem::setNext(ListItem n) {
    next = &n;
}

ListItem ListItem::getNext() {
    return *next;
}