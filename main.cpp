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

    for (int k = 0; k < l.getElements() ; ++k) {
        cout << "Value of " << k << " element in list is :: "<< l.getItem(k).getValue() << endl;
    }

    return 0;
}