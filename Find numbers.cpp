
#include <stdio.h>
#include <stdio.h>
#include <string.h>
#define LENGTH 80

int main(void) {
    char str1[LENGTH];
    char str2[LENGTH];

    printf("��J�r��G");
    fgets(str1, LENGTH, stdin);

    printf("�j�M�l�r��G");
    fgets(str2, LENGTH, stdin);
    // �h���̫᪺����r��
    str2[strlen(str2) - 1] = '\0';

    size_t loc = strcspn(str1, str2);

    if(loc == strlen(str1)) {
        printf("�S������r���ǰt\n");
    }
    else {
        printf("���ަ�m %lu �B�ǰt��r��\n", loc);
    }

    return 0;
}
