#include <stdio.h>
#include <stdlib.h>

#include "caesar.h"

int main(int argc, char *argv[]) {
    char *ciphertext;

    // 入力チェック
    if (argc < 3) {
        printf("シフト回数と平文を指定してください。\n");
        return 1;
    }

    // シーザー暗号
    ciphertext = encryption(atoi(argv[1]), argv[2]);
    printf("%s\n", ciphertext);

    return 0;
}
