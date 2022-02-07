//
// Created by leejoker on 2022/2/7.
//

#include "chapt_2.h"

void practice_1(char *firstname, char *lastname) {
    printf("----------------practice 1-----------------\n");
    printf("%s %s\n", firstname, lastname);
    printf("%s\n%s", firstname, lastname);
    printf("%s ", firstname);
    printf("%s\n", lastname);
    printf("----------------practice 1 end--------------\n");
}

int main() {
    practice_1("Gustav", "Mahler");
    return 0;
}