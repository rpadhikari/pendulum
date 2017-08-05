/*
 * fx.c Function as integrand
 * Created on: May 25, 2017
 * Author: Rajendra Adhikari
 * This function is from page 371, Eqn. 5.128 of book
 * by Arfken and Weber
 * Mathematical Methods for Physicists (International Edtion) 6th Ed.
 * Elsevier Academic Press
 */
double pow(double,double);
double sin(double);
double fx(double tm, double x){
  return pow((1.0-pow(sin(tm/2.0)*sin(x),2.0)),-0.50);
//  return 1.0/sqrt(1.0-pow(sin(tm/2.0)*sin(x),2.0));
//    return sin(x)*sin(tm);
}
