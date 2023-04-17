#include <iostream>
#include <memory>
#include "libtest.h"

int main() {

    std::cout << "Calling golang function: ";
    std::cout << "key " << GetKey() << "\n";

    //MySetup_t *s = new MySetup_t;
    auto sp = std::unique_ptr<MySetup_t>(new MySetup_t);

    InitSetup(sp.get());
    std::cout << "Version " << sp->Version << "\n";

    //delete s;
}
