#include "CUnit/Basic.h"
#include "caesar.h"

int init_suite_success(void) {
    return 0;
}

int clean_suite_success(void) {
    return 0;
}

void test_shift4() {
    int shiftNum = 4;
    char plaintext[] = "test";
    char *ciphertext = caesar(shiftNum, plaintext);
    CU_ASSERT_STRING_EQUAL(ciphertext, "xiwx");
}

int main() {
    CU_pSuite pSuite = NULL;

    if (CUE_SUCCESS != CU_initialize_registry()) {
        return CU_get_error();
    }

    pSuite = CU_add_suite("suite success", init_suite_success, clean_suite_success);
    if (pSuite == NULL) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    if (CU_add_test(pSuite, "test shift4", test_shift4) == NULL) {
      CU_cleanup_registry();
      return CU_get_error();
   }

    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_basic_show_failures(CU_get_failure_list());
    CU_cleanup_registry();

    return CU_get_error();
}
