/** @file PIDController.cpp
* @brief This is the ".cpp" file for the PIDController Class
*
* This file impliments the methods and attributes of the
* PIDController Class
*/

#include <PIDController.hpp>

//! Change Student Grade Function
	/*!
	 * This function changes the grade of a particular student to a new grade
	 *@param a student grade vector double reference
	 *@param a student number int
	 *@param a new grade double
	 *@return does not return anything
	 */
double PIDController::compute(const double& targetSetPoint, const double& actualVelocity)
{  
  auto newVelocity = 6.25; /*!< this velocity has the units of [m/s] */
	return newVelocity;
}
