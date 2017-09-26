/**
 *@author Ruben Acevedo
 *@file PIDControllerTest.cpp
 *@brief This is the ".cpp" file for testing the PIDController Class
 *@copyright [2017] Ruben Acevedo
 *
 * This file tests the PIDController Class using google test
 * PIDController Class
 */
#include <gtest/gtest.h>
#include "../include/PIDController.hpp"
#include "../app/PIDController.cpp"

TEST(PIDControllerTest, Test1) {
    PIDController pid;
    auto targetSetPoint = 25.5;
    auto actualVelocity = 6.25;

	/** this tests to make sure my code has been changed
	 * and compute returns another value other than the actual
     * velocity it was inputed
	 */
    EXPECT_TRUE(pid.compute(targetSetPoint, actualVelocity)!= actualVelocity);
}

TEST(PIDControllerTest, Test2) {
  PIDController pid;
  auto targetSetPoint = 25.5;
  int i = 0;
  auto velocity = 6.25;
  while (i < 300) {
    velocity = pid.compute(targetSetPoint, velocity);
    i++;
  }

	/** this tests to make sure that pid controller gets to the
     * target velocity in under 300 iterations with an error of +- 5.
     * Note: the compute method should return targetSetPoint if it = to
     * the actual velocity.
     */
  EXPECT_NEAR(velocity, targetSetPoint, 5);
}
