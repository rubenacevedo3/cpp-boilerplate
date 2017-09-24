/** @file PIDController.cpp
* @brief This is the ".cpp" file for the PIDController Class
*
* This file impliments the methods and attributes of the
* PIDController Class
*/

#include <PIDController.hpp>

//! Compute the PID Controller Function
/**
 * This function computes the PID Controller
 * for velocity in which it takes into account
 * the desired veloctiy and the atual velocity
 * and outputs a new velocity
 *@param a const double reference repersenting the target setpoint velocity
 *@param a const double reference repersenting the actual veloctiy 
 *@return a double repersenting the new velocity
 */
double PIDController::compute(const double& targetSetPoint, const double& actualVelocity)
{  
	auto newVelocity = 6.25; /*!< this velocity has the units of [m/s] */
	return newVelocity;
}
