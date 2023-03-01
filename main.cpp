#include <iostream>
#include <stdio.h>

#include "version.h"

int version() {
    return PROJECT_VERSION_PATCH;
}

int main() {
    std::cout << "Hello, Wdddorld!" << std::endl;
    printf("%d\n", version());
    return 0;
}
