#include <stdlib.h>
#include <string.h>

#include "caesar.h"

#include <stdio.h>

/*
 * シーザー暗号による暗号化を行った暗号文を返します
 *
 * @param int shiftNum シフト回数
 * @param char* plaintext 平文
 * @return char* 暗号文
 */
char* caesar(int shiftNum, char* plaintext) {
    int i;
    int characterCode;
    int length = strlen(plaintext);
    char *ciphertext = (char *)malloc(sizeof(char) * (length + 1));

    // 文字→数字化
    for (i = 0; i < length; i++) {
        characterCode = plaintext[i];
        ciphertext[i] = characterCode + shiftNum;
    }

    ciphertext[length] = 0;
    return ciphertext;
}
