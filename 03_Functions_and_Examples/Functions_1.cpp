#include <iostream>
#include <iomanip>

using namespace std;

float calculateKda(int kills, int deaths, int assists) {
    return (kills + deaths + assists) / 3.0;
}

int main() {
    int kills, assists, deaths;

    cout << "Please enter your kill count: ";
    cin >> kills;

    cout << "Please enter your death count: ";
    cin >> deaths;

    cout << "Please enter your assist count: ";
    cin >> assists;

    cout << "Your KDA is: " << fixed << setprecision(1) << calculateKda(kills, deaths, assists) << "\n";

    return 0;
}