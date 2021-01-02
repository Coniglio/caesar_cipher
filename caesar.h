// 変換テーブル
static const char TABLE[] = {
    'a', 'b', 'c', 'd', 'e',
    'f', 'g', 'h', 'i', 'j',
    'k', 'l', 'm', 'n', 'o',
    'p', 'q', 'r', 's', 't',
    'u', 'v', 'w', 'x', 'y',
    'z'
};

// テーブルの要素数
static const int TABLE_LENGTH = sizeof(TABLE) / sizeof(TABLE[0]);

/*
 * シーザー暗号による暗号化を行った暗号文を返します
 *
 * @param int shiftNum シフト回数
 * @param char* plaintext 平文
 * @return char* 暗号文
 */
char* caesar(int shiftNum, char* plaintext);
