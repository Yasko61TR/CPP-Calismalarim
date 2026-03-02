#include <iostream>
#include <iomanip>

using namespace std;

double calculateEnergy(double mass, double velocity) {
    return 0.5 * mass * (velocity * velocity); // 0.5 * m * v^2
}

double calculateEnergy(double mass, double gravity, double height) {
    return mass * gravity * height; // m * g * h
}

int main() {
    double mass, velocity, gravity, height;

    cout << "--- Physics Calculation Engine ---" << "\n";

    cout << "Please enter mass (kg): ";
    cin >> mass;

    cout << "Please enter velocity (m/s): ";
    cin >> velocity;

    cout << "Please enter gravity (m/s^2): ";
    cin >> gravity;

    cout << "Please enter height (m): ";
    cin >> height;

    cout << "\n" << fixed << setprecision(2);

    cout << "Kinetic Energy: " << calculateEnergy(mass, velocity) << " Joules" << "\n";
    cout << "------------" << "\n";
    cout << "Potential Energy: " << calculateEnergy(mass, gravity, height) << " Joules" << "\n";

    return 0;
}
