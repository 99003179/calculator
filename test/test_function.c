#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>
#include <CUnit/TestDB.h>

#include <function.h>
#define PROJECT_NAME "function"

/* Prototypes for all the test functions */
void test_add(void);
void test_subtract(void);


/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */

/* Add your test functions in this format for testing*/
  CU_add_test(suite, "pro_add", test_add);
  CU_add_test(suite, "pro_subtract", test_subtract);


/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);

  /* run the unit test framework*/
  CU_basic_run_tests();

  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}
/* Write all the test functions */
void test_add(void) {
  CU_ASSERT(30 == pro_add(10,20));
  CU_ASSERT(40 == pro_add(8,32));
  CU_ASSERT(6 == pro_add(3,3));
  CU_ASSERT(5040 == pro_add(2520,2520));
  CU_ASSERT(720 == pro_add(360,360));

  /* Dummy fail*/
  CU_ASSERT(105 == pro_add(95,5));
}

void test_subtract(void) {
  CU_ASSERT(100 == pro_subtract(200,100));
  CU_ASSERT(20 == pro_subtract(60,40));
  CU_ASSERT(44 == pro_subtract(100,56));
  CU_ASSERT(45 == pro_subtract(50,5));

  /* Dummy fail*/
  CU_ASSERT(1 == pro_subtract(6,6));
}
