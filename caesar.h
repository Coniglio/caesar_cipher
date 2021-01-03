/*
 * シーザー暗号による暗号化を行った暗号文を返します
 *
 * @param int shiftNum シフト回数
 * @param char* plaintext 平文
 * @return char* 暗号文
 */
char* encryption(int shiftNum, char* plaintext);

/*
 * シーザー暗号による復号を行った平文を返します
 *
 * @param int shiftNum シフト回数
 * @param char* ciphertext 暗号文
 * @return char* 平文
 */
char* decryption(int shiftNum, char* ciphertext);
