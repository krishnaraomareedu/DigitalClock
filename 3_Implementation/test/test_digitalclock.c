#include "unity.h"
	#include "digitalclock.h"

	void setUp()
	{	}
	void tearDown()
	{	}

	void test_clock(void)
	{
    TEST_PASS_MESSAGE("PASS");
	}
	void test_clock1(void)
	{
    TEST_PASS_MESSAGE("PASS");
	}

	int test_main(void)
	{
	  	UNITY_BEGIN();

	  	RUN_TEST(test_clock);
		RUN_TEST(test_clock1);

  		return UNITY_END();
	}
