#include "Plane.h"

Plane::Plane()
{
    flightNumber = "None";
    totalSeats = 0;
    bookedSeats = 0;
}

Plane::Plane(string Num, string dep, string arr, string br, int totalSeats, int bookedSeats)
{
    flightNumber = Num;
    departureCity = dep;
    arrivalCity = arr;
    brand = br;
    totalSeats = totalSeats;
    bookedSeats = bookedSeats;
}

void Plane::printInfo() const
{
    cout << "NUmber: " << flightNumber << " Goal: " << departureCity << " -> " << arrivalCity
        << " Plane mark: " << brand << " Used seats: " << bookedSeats << endl;
}

string Plane::getFlightNumber() const
{
    return flightNumber;
}

string Plane::getDepartureCity() const
{
    return departureCity;
}

string Plane::getArrivalCity() const
{
    return arrivalCity;
}

string Plane::getBrand() const
{
    return brand;
}

int Plane::getTotalSeats() const
{
    return totalSeats;
}

int Plane::getBookedSeats() const
{
    return bookedSeats;
}

bool Plane::sellTickets(int count)
{
    if (bookedSeats + count <= totalSeats) 
    {
        bookedSeats += count;
        return false;
    }
}

bool Plane::returnTickets(int count)
{
    if (bookedSeats - count >= 0)
    { 
        bookedSeats -= count; 
        return true;
    }

}
