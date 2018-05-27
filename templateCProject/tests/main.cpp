/*
 * Basic driver for running the unit tests
 */
#include <CppUTest/CommandLineTestRunner.h>

int main(int ac, char** av)
{
    return CommandLineTestRunner::RunAllTests(ac, av);
}
