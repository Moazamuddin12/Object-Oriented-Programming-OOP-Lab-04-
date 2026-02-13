#include<iostream>
using namespace std;

class SpaceSatellite {
private:
    const int satelliteID;           
    const string launchDay;          
    double orbitalRadius;            
    static int totalReportCount;     

public:
    SpaceSatellite(int idValue, string launchInfo, double radiusValue)
        : satelliteID(idValue), launchDay(launchInfo), orbitalRadius(radiusValue) {}

    void displayReport() const {
        cout << "\nSatellite Report" << endl;
        cout << "Satellite ID: " << satelliteID << endl;
        cout << "Launch Date: " << launchDay << endl;
        cout << "Orbital Radius: " << orbitalRadius << " km" << endl;

        totalReportCount++;   
    }

    void viewSatellite() {
        displayReport();   
        totalReportCount++;  
    }

    void adjustOrbit(double radiusChange) {
        orbitalRadius += radiusChange;
        cout << "Orbit adjusted. New Radius: "
             << orbitalRadius << " km" << endl;
    }

    static void showReportStatistics() {
        cout << "\nTotal Report Views: "
             << totalReportCount << endl;
    }
};

int SpaceSatellite::totalReportCount = 0;

int main() {

    SpaceSatellite sat1(101, "2022-05-10", 15000);
    SpaceSatellite sat2(102, "2023-08-20", 20000);

    sat1.viewSatellite();
    sat2.viewSatellite();
    sat1.viewSatellite();

    sat1.adjustOrbit(500);
    sat2.adjustOrbit(-300);

    SpaceSatellite::showReportStatistics();

    return 0;
}