/* 
 * File:   pstoufr2cpca_test.c
 * Author: richter
 *
 * Created on 22. Januar 2015, 07:35
 */

#include <stdio.h>
#include <stdlib.h>
#include <check.h>
#include "../../../pstoufr2cpca/filter/pstoufr2cpca.h"


void
setup (void)
{
  
}

void
teardown (void)
{
  
}

#define TEST_PPD_FILE_PATH "/etc/cups/ppd/pqueue.ppd"

START_TEST (test_pstoufr2cpca_main)
{
    /*
     * Based on http://fedoraproject.org/wiki/How_to_debug_printing_problems 
     * there're a few tests which really exceed the boundaries of unit tests, 
     * so the following contradicts the aim of the enhancements to create proper 
     * unit tests, but one has to work around very poor (filter) developer resources 
     * provided by CUPS
     */
    char *argv[7];
    // parameters according to `man filter` and the reference cited above
    argv[0] = "@TODO";
    argv[1] = "1"; //order
    argv[2] = "richter"; //user
    argv[3] = "title"; //title
    argv[4] = "1"; //# of copies
    argv[5] = "MediaType=A4";
    argv[6] = "/home/richter/.bashrc"; //file name
    int argc = 7;
    setenv("PPD", 
            TEST_PPD_FILE_PATH, 
            1 //replace
            );
    
    int returncode = pstoufr2cpca_main(argc, argv);
    
  ck_assert_int_eq (returncode, 0);
}
END_TEST

Suite *
pstoufr2cpca_suite (void)
{
  Suite *s = suite_create ("test_pstoufr2cpca_main");

  /* Core test case */
  TCase *tc_core = tcase_create ("test_pstoufr2cpca");
  tcase_add_checked_fixture (tc_core, setup, teardown);
  tcase_add_test (tc_core, test_pstoufr2cpca_main);
  suite_add_tcase (s, tc_core);

  return s;
}

int
main (void)
{
  int number_failed;
  Suite *s = pstoufr2cpca_suite ();
  SRunner *sr = srunner_create (s);
  srunner_set_fork_status (sr, CK_NOFORK);
  srunner_run_all (sr, CK_NORMAL);
  number_failed = srunner_ntests_failed (sr);
  srunner_free (sr);
  return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
