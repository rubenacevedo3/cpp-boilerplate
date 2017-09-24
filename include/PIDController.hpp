/** @file PIDController.hpp
* @brief This is the ".hpp" file for the PIDController Class
*
* This file will define the methods and attributes of the
* PIDController Class
*/

#ifndef cpp-boilerplate_include_PIDController_hpp_
#define cpp-boilerplate_include_PIDController_hpp_

//! A PID Controller Class
/**
 * This class is a PID Controller for velocity.
 */
class PIDController {

	//! Public Methods
public:

	//! Compute the PID Controller Function
	/**
	 * This function computes the PID Controller
   * for velocity in which it takes into account
   * the desired veloctiy and the atual velocity
   * and outputs a new velocity
	 *@param a double repersenting the target setpoint velocity
	 *@param a double repersenting the actual veloctiy 
	 *@return a double repersenting the new velocity
	 */
	double compute(double targetSetPoint, double actualVelocity);

	//! Private Attributes
private:

	//! Kp Value
	/**
	 * This is the Kp Value for the PID Controller
	 */
	double kp = 0.5;
  
  //! Ki Value
	/**
	 * This is the Ki Value for the PID Controller
	 */
	double ki = 0.05;
  
   //! Kd Value
	/**
	 * This is the Kd Value for the PID Controller
	 */
	double kd = 1.0;
};

#endif //cpp-boilerplate_include_PIDController_hpp_
