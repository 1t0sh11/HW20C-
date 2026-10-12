#include <iostream>
#include <string>
#include "Plane.h"
using namespace std;

int main() {
    Plane a("PS-108", "Kyiv", "London", "Boeing 737", 180, 150);
    a.printInfo();
    cout << "Flight Number: " << a.getFlightNumber() << endl;
    cout << "Departure City: " << a.getDepartureCity() << endl;
    cout << "Arrival City: " << a.getArrivalCity() << endl;
    cout << "Plane Brand: " << a.getBrand() << endl;
    cout << "Total Seats: " << a.getTotalSeats() << endl;
    cout << "Booked Seats: " << a.getBookedSeats() << endl;

    a.sellTickets(20);
    a.returnTickets(10);
    a.printInfo();

    return 0;
}