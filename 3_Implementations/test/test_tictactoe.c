#include "unity.h"


/* Modify these two lines according to the project */
#include "tictactoe.h"
#define PROJECT_NAME    "Tictactoe"


/* Modify these two lines according to the project */


/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_draw(){
  //TEST_ASSERT_EQUAL(1, draw(8));

TEST_ASSERT_EQUAL(1, check_draw(8));
}


/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_draw);
  

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 


