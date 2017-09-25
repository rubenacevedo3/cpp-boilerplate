/**
 *@author Ruben Acevedo
 *@file PIDControllerTest.cpp
 *@brief This is the ".cpp" file for testing the PIDController Class
 *@copyright This work is property of Ruben Acevedo
 *
 * This file tests the PIDController Class using google test
 * PIDController Class
 */
#include <gtest/gtest.h>
#include "../include/PIDController.hpp"
#include "../app/PIDController.cpp"

TEST (PIDControllerTest, Test1)
{
	PIDController pid;
	double targetSetPoint = 25.5;
	double actualVelocity = 6.25;

	EXPECT_TRUE(pid.compute(targetSetPoint, actualVelocity)!= actualVelocity); /*!< this tests to make sure my code has been changed
	 	 	 	 	 	 	 	 	 	 	                                                        * and compute returns another value other than the actual
	 	 	 	 	 	 	 	 	 	                                                          * velocity it was inputed
	 	 	 	 	 	 	 	 	 	 	                                                        */
}

TEST (PIDControllerTest, Test2)
{
	PIDController pid;
	double targetSetPoint = 25.5;
	double actualVelocity = 6.25;
	int i = 0;
	double velocity;
	while (i < 300)
	{
		velocity = pid.compute(targetSetPoint,velocity);
		i++;
	}

	EXPECT_NEAR(velocity,targetSetPoint, 5); /*!< this tests to make sure that pid controller gets to the
	 	 	                                      * target velocity in under 300 iterations with an error of +- 5.
	 	 	                                      * Note: the compute method should return targetSetPoint if it = to
	 	 	                                      * the actual velocity.
	 	 	                                      */


}
