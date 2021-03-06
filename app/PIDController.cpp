/** 
 *@author Ruben Acevedo
 *@file PIDController.cpp
 *@brief This is the ".cpp" file for the PIDController Class
 *@copyright [2017] Ruben Acevedo
 *
 * This file implements the methods and attributes of the
 * PIDController Class
 */

#include "../include/PIDController.hpp"

//! Compute the PID Controller Function
/**
 * This function computes the PID Controller
 * for velocity in which it takes into account
 * the desired veloctiy and the atual velocity
 * and outputs a new velocity
 *@param targetSetPoint a const double reference repersenting the target setpoint velocity
 *@param actualVelovity a const double reference repersenting the actual veloctiy
 *@return newVelocity a double repersenting the new velocity
 */
double PIDController::compute(double targetSetPoint, double actualVelocity) {
  error = targetSetPoint - actualVelocity;
  iError += error;
  dError = (error - previousError) / dt;
  double cv = (kp * error) + (kd * dError) + (ki * iError * dt);

  auto newVelocity = actualVelocity + cv; /*!< this velocity is in [m/s] */
  previousError = error;
  return newVelocity;
}

//! Class Constructor
/**
 * This code constructs the class.
 * It initializes the kp ki kd error iError dError previousError and dt attributes
 */
PIDController::PIDController() {
  kp = 0.5;
  ki = 0.05;
  kd = 0.1;
  error = 0;
  iError = 0;
  dError = 0;
  previousError = 0;
  dt = .2;
}
