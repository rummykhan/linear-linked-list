#include <iostream>
#include "List.h"

using namespace std;

int main() {

    List l;

    for (int i = 0; i < 50; ++i) {
        ListItem li(rand());
        l.push(li);
    }

    cout << "Size of : " << l.getElements() << endl;

    for (int j = 0; j < 17; ++j) {
        l.pop();
    }

    cout << "Size of : " << l.getElements() << endl;

    ListItem li1 = l.getFirst();
    while (li1.getValue() != -1) {

        cout << "val :: " << li1.getValue() << endl;
        li1 = li1.getNext();
    }

    return 0;
}