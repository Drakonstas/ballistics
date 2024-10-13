#define _USE_MATH_DEFINES
#include <stdio.h> 
#include <math.h> 
int main() { double t = 0, v, g = 9.8, angle, x = 0, y, height, mass, air_resistance; printf("Enter launch speed (m/s): "); scanf_s("%lf", &v); printf("Enter launch angle (degrees): "); scanf_s("%lf", &angle); printf("Enter launch height (m): "); scanf_s("%lf", &height); printf("Enter rocket mass (kg): "); scanf_s("%lf", &mass); printf("Enter air resistance (N): "); scanf_s("%lf", &air_resistance); y = height; while (y >= 0) { t += 0.1; double accel = g - (air_resistance / mass); x = v * t * cos(angle * M_PI / 180); y = height + v * t * sin(angle * M_PI / 180) - 0.5 * accel * t * t; if (y < 1) { printf("t=%.1f s, x=%.1f m, y=%.1f m\n", t, x, y = 0);  return 0; } printf("t=%.1f s, x=%.1f m, y=%.1f m\n", t, x, y); } printf("Rocket landed after %.1f seconds at %.1f meters.\n", t, x); return 0; }