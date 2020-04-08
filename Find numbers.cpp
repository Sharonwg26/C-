
#include <stdio.h>
#include <stdio.h>
#include <string.h>
#define LENGTH 80

int main(void) {
    char str1[LENGTH];
    char str2[LENGTH];

    printf("輸入字串：");
    fgets(str1, LENGTH, stdin);

    printf("搜尋子字串：");
    fgets(str2, LENGTH, stdin);
    // 去除最後的換行字元
    str2[strlen(str2) - 1] = '\0';

    size_t loc = strcspn(str1, str2);

    if(loc == strlen(str1)) {
        printf("沒有任何字元匹配\n");
    }
    else {
        printf("索引位置 %lu 處匹配到字元\n", loc);
    }

    return 0;
}
