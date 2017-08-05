// integral from 0 to Pi/2 using Simpson's 3/8th rule
double simp(double, double, int, double);
double period(double tm) {
  return simp(0.0, 1.570796326795, 3000, tm);
}

