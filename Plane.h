#pragma once
#include <iostream>
#include <string>

using namespace std;

class Plane {
private:
    string flightNumber; 
    string departureCity;  
    string arrivalCity;    
    string brand;          
    int totalSeats;        
    int bookedSeats;       

public:
    Plane();
    Plane(string Num, string dep, string arr, string br, int totalSeats, int bookedSeats);
    void printInfo() const;
    string getFlightNumber() const;
    string getDepartureCity() const;
    string getArrivalCity() const;
    string getBrand() const;
    int getTotalSeats() const;
    int getBookedSeats() const;
    bool sellTickets(int count);
    bool returnTickets(int count);
};