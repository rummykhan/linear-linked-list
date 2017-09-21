//
// Created by rummykhan on 9/21/17.
//

#include "List.h"

List::List() {
    elementNo = 0;
}

void List::push(ListItem item) {

    if (elementNo < sizeof(items)) {
        items[elementNo] = item;
        elementNo++;

        setPointer();
    }
}

void List::pop() {

    if (elementNo > 0) {
        elementNo--;
    }
}

void List::setPointer() {

    // mean last element
    if (elementNo == sizeof(items) - 1) {
        items[elementNo].setNext(0);
    } else if (elementNo == 0) {
        // mean first element only
        items[elementNo].setNext(0);
    } else {
        items[elementNo - 1].setNext(items[elementNo]);
    }
}

int List::getElements() {
    return elementNo;
}

ListItem List::getItem(int no) {
    if (no < 0 || no > elementNo) {
        throw "Index out of range";
    }

    return items[no];
}