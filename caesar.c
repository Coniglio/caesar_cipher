#include <stdlib.h>
#include <string.h>

#include "caesar.h"

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
    int tableLength = strlen(TABLE);
    int length = strlen(plaintext);
    int tableIndex = -1;
    int index = -1;
    char *ciphertext = (char *)malloc(sizeof(char) * (strlen(plaintext) + 1));
    
    for (i = 0; i < length; i++) {
        tableIndex = -1;
        for (j = 0; j < tableLength; j++) {
            if (plaintext[i] == TABLE[j]) {
                tableIndex = j;
                break;
            }
        }

        if (tableIndex != -1) {
            index = tableIndex;
            for (k = 0; k < shiftNum; k++) {
                index++;
            }

            ciphertext[i] = TABLE[index];
        }
    }

    ciphertext[length] = 0;
    return ciphertext;
}
