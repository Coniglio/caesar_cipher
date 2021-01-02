# Caesar Cipher

C言語の復習。

実行

```
$ gcc -o caesar main.c caesar.c
$ ./caesar 13 ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz
NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm
```

テスト

```
$ gcc -o test_caesar test.c caesar.c -lcunit
$ ./test_caesar


     CUnit - A unit testing framework for C - Version 2.1-2
     http://cunit.sourceforge.net/


Suite: suite success
  Test: test shift4 ...passed

Run Summary:    Type  Total    Ran Passed Failed Inactive
              suites      1      1    n/a      0        0
               tests      1      1      1      0        0
             asserts      1      1      1      0      n/a

Elapsed time =    0.000 seconds
```