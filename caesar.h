/*
 * シーザー暗号による暗号化を行った暗号文を返します
 *
 * @param int shiftNum シフト回数
 * @param char* plaintext 平文
 * @return char* 暗号文
 */
char* encryption(int shiftNum, char* plaintext);
