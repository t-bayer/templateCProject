/*************************************************************/
/**
 *  @file MyApplication.c
 *  @brief Default file for creating custom applications based on the default project
 *  @author Timo Bayer
 *
 *  @date 25.05.2016
 *  @version 1.0
 *************************************************************/
#include <stdio.h>
#include "MyModule.h"

/**
 * @brief Add a number to another number
 *
 * The function provides the functionality to add to integer numbers. The result is the sum of the two numbers
 *
 * @param[in] a the first number
 * @param[in] b the second number
 *
 * @return The sum of the two values passed
 */
int add (int a, int b){
	return a+b;
}

/**
 * @brief The main function of the example application
 *
 * This function is automatically called on application startup
 * The arguments are passed via the runtime environment
 *
 * @param[in] argc the number of arguments
 * @param[in] argv the arguments passed via the runtime environment
 *
 * @return The status of the execution after the function is terminated
 */
int main(int argc, char **argv) {
	add(1,2);
	sub(12,2);
}

