#include <stdlib.h>
#include <string.h>

#include "caesar.h"

static const int ALPHABET_NUM = 26;

/*
 * シーザー暗号による暗号化を行った暗号文を返します
 *
 * @param int shiftNum シフト回数
 * @param char* plaintext 平文
 * @return char* 暗号文
 */
char* encryption(int shiftNum, char* plaintext) {
    int i;
    int length = strlen(plaintext);
    int index = -1;
    int shiftIndex;
    char *ciphertext = (char *)malloc(sizeof(char) * (length + 1));

    for (i = 0; i < length; i++) {
        // a-z
        if (plaintext[i] >= 'a' && plaintext[i] <= 'z') {
            // (b(98) - a(97) + 1) % 26 = c(99)
            shiftIndex = (plaintext[i] - 'a' + shiftNum) % ALPHABET_NUM;
            ciphertext[i] = 'a' + shiftIndex;
            continue;
        }

        // A-Z
        if (plaintext[i] >= 'A' && plaintext[i] <= 'Z') {
            // (Z(90) - A(65) + 3) % 26 = C(67)
            shiftIndex = (plaintext[i] - 'A' + shiftNum) % ALPHABET_NUM;
            ciphertext[i] = 'A' + shiftIndex;
            continue;
        }

        // 暗号化対象はa-zA-Z
        ciphertext[i] = plaintext[i];
    }

    ciphertext[length] = 0;
    return ciphertext;
}
