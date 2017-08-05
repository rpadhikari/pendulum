/*
 * main.c Patching all the works together
 *  Created on: May 25, 2017
 *      Author: Rajendra P. Adhikari
 */

#include<stdio.h>
#include<math.h>
FILE *ofp;
double period(double);
static const double pi=3.14159265359;
double sqrt(double);
int main(){
  int i;
  double t, theta, tm, tmr;
  static const double g=9.81;
  static const double l=1.0;
  t=4.0*sqrt((l/g));
  ofp=fopen("out.dat","w");
  for(i=1; i<=40; i++) {
    tm = (double) i*1.0;
    tmr=tm*pi/180.0;
    fprintf(ofp, " %12.2lf %20.15lf\n",tm, t*period(tmr));
  }
  fclose(ofp);
}

