#include <stdlib.h>
#include <string.h>

#include "caesar.h"

static const char LARGE_CHAR_TABLE[] = {
    'a', 'b', 'c', 'd', 'e',
    'f', 'g', 'h', 'i', 'j',
    'k', 'l', 'm', 'n', 'o',
    'p', 'q', 'r', 's', 't',
    'u', 'v', 'w', 'x', 'y',
    'z'
};

static const char SMALL_CHAR_TABLE[] = {
    'A', 'B', 'C', 'D', 'E',
    'F', 'G', 'H', 'I', 'J',
    'K', 'L', 'M', 'N', 'O',
    'P', 'Q', 'R', 'S', 'T',
    'U', 'V', 'W', 'X', 'Y',
    'Z'
};

static const int ALPHABET_NUM = 26;

/*
 * シーザー暗号による暗号化を行った暗号文を返します
 *
 * @param int shiftNum シフト回数
 * @param char* plaintext 平文
 * @return char* 暗号文
 */
char* caesar(int shiftNum, char* plaintext) {
    int i;
    int j;
    int k;
    int length = strlen(plaintext);
    int index = -1;
    int shiftIndex;
    char *ciphertext = (char *)malloc(sizeof(char) * (length + 1));

    for (i = 0; i < length; i++) {
        for (j = 0; j < ALPHABET_NUM; j++) {
            if (plaintext[i] == LARGE_CHAR_TABLE[j]) {
                shiftIndex = (j + shiftNum) % ALPHABET_NUM;
                ciphertext[i] = LARGE_CHAR_TABLE[shiftIndex];
                continue;
            }
        }

        for (k = 0; k < ALPHABET_NUM; k++) {
            if (plaintext[i] == SMALL_CHAR_TABLE[k]) {
                shiftIndex = (k + shiftNum) % ALPHABET_NUM;
                ciphertext[i] = SMALL_CHAR_TABLE[shiftIndex];
                continue;
            }
        }
    }

    ciphertext[length] = 0;
    return ciphertext;
}
