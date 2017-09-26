/** 
 *@author Ruben Acevedo
 *@file PIDController.cpp
 *@brief This is the ".cpp" file for the PIDController Class
 *@copyright [2017] Ruben Acevedo
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
  //! Class Constructor
  /**
   * This code constructs the class.
   * It initializes the kp ki kd error iError dError previousError and dt attributes
   */
  PIDController();

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
  double compute(double targetSetPoint, double actualVelocity);

  //! Private Attributes
 private:
  //! Kp Value
  /**
   * This is the Kp Value for the PID Controller
   */
  double kp;
  //! Ki Value
  /**
   * This is the Ki Value for the PID Controller
   */
  double ki;
  //! Kd Value
  /**
   * This is the Kd Value for the PID Controller
   */
  double kd;
  //! error Value
  /**
   * This is the error Value for the PID Controller
   */
  double error;
  //! iError Value
  /**
   * This is the sum of errors 
   */
  double iError;
  //! dError Value
  /**
   * This is the difference in current and previous error over time interval
   */
  double dError;
  //! previousError Value
  /**
   * This is the old error
   */
  double previousError;
  //! dt Value
  /**
   * This is the time interval
   */
  double dt;
};



#endif  // cpp-boilerplate_include_PIDController_hpp_
