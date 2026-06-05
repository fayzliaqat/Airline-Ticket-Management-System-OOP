#include <iostream>
using namespace std;

//Abdulrehman
class Passenger
{
    private:
        string name;
        long int cnic;
        int age;

    public:
        Passenger(string name, int age, long int cnic)
        {
            setName(name);
            setAge(age);
            setCnic(cnic);
        }
        
        void setName(string name)
        {
            this->name = name;
        }
        
        string getName()
        {
            return name;
        }
        
        void setAge(int age)
        {
            this->age = age;
        }
        
        int getAge()
        {
            return age;
        }
        
        void setCnic(long int cnic)
        {
            this->cnic = cnic;
        }
        
        long int getCnic()
        {
            return cnic;
        }
        
        void passengerDetails()
        {
            cout << "Name: " << getName() << endl;
            cout << "Age: " << getAge() << endl;
            cout << "CNIC: " << getCnic() << endl;
        }
};

//Fayz
class Employee
{
    private:
        string name, position;
        int id;

    public:
        Employee(string name, string position, int id)
        {
            setName(name);
            setPosition(position);
            setId(id);
        }
        
        void setName(string name)
        {
            this->name = name;
        }
        
        string getName()
        {
            return name;
        }
        
        void setId(int ID)
        {
            this->id = id;
        }
        
        int getId()
        {
            return id;
        }
        
        void setPosition(string Position)
        {
            this->position = position;
        }
        
        string getPosition()
        {
            return position;
        }
        
        void employeeDetails()
        {
            cout << "\nEmployee Name: " << getName();
            cout << "\nEmployee ID: " << getId();
            cout << "\nPosition: " << getPosition() << endl;
        }
};

//Fayz
class Flight
{
    private:
        string flightNumber, arrivalTime, departureTime;
    
    public:
        Flight(string flightNumber, string departureTime, string arrivalTime)
        {
            setFlightNumber(flightNumber);
            setDepartureTime(departureTime);
            setArrivalTime(arrivalTime);
        }
        
        void setFlightNumber(string flightNumber)
        {
            this->flightNumber = flightNumber;
        }
        
        string getFlightNumber()
        {
            return flightNumber;
        }
        
        void setDepartureTime(string departureTime)
        {
            this->departureTime = departureTime;
        }
        
        string getDepartureTime()
        {
            return departureTime;
        }
        
        void setArrivalTime(string arrivalTime)
        {
            this->arrivalTime = arrivalTime;
        }
        
        string getArrivalTime()
        {
            return arrivalTime;
        }
        
        void flightDetails()
        {
            cout << "\nFlight Number: " << getFlightNumber();
            cout << "\nDeparture Time: " << getDepartureTime();
            cout << "\nArrival Time: " << getArrivalTime() << endl;
        }
};

//Fayz
class BoardingPass
{
    private:
        Passenger passenger;
        Flight flight;
        string seatNumber;

    public:
        BoardingPass(Passenger passenger, Flight flight, string seatNumber): passenger(passenger), flight(flight)
        {
            setSeatNumber(seatNumber);
        }
        
        void setSeatNumber(string SeatNumber)
        {
            this->seatNumber = seatNumber;
        }
        
        string getSeatNumber()
        {
            return seatNumber;
        }
        
        void boardingPassDetails()
        {
            passenger.passengerDetails();
            flight.flightDetails();
            cout << "\nSeat Number: " << getSeatNumber() << endl;
        }
};

//Abdulrehman
class Ticket
{
    private:
        Passenger passenger;
        string departure, arrival;

    public:
        Ticket(Passenger passenger, string departure, string arrival) : passenger(passenger)
        {
            setDeparture(departure);
            setArrival(arrival);
        }
        
        void setDeparture(string departure)
        {
            this->departure = departure;
        }
        
        string getDeparture()
        {
            return departure;
        }
        
        void setArrival(string arrival)
        {
            this->arrival = arrival;
        }
        
        string getArrival()
        {
            return arrival;
        }
        
        void ticketDetails()
        {
            passenger.passengerDetails();
            cout << "\nDeparture: " << getDeparture();
            cout << "\nArrival: " << getArrival() << endl;
            
            if (getDeparture() == "Lahore" && getArrival() == "Karachi")
            {
                cout << "Ticket Price: 35000" << endl;
            }
            else if (getDeparture() == "Karachi" && getArrival() == "Lahore")
            {
                cout << "Ticket Price: 35000" << endl;
            }
            else if ((getDeparture() == "Lahore" || getDeparture() == "Islamabad") && (getArrival() == "Islamabad" || getArrival() == "Lahore"))
            {
                cout << "Ticket Price: 20000" << endl;
            }
            else if ((getDeparture() == "Lahore" || getDeparture() == "Gilgit") && (getArrival() == "Gilgit" || getArrival() == "Lahore"))
            {
                cout << "Ticket Price: 25000" << endl;
            }
            else if ((getDeparture() == "Islamabad" || getDeparture() == "Karachi") && (getArrival() == "Karachi" || getArrival() == "Islamabad"))
            {
                cout << "Ticket Price: 32000" << endl;
            }
            else if ((getDeparture() == "Gilgit" || getDeparture() == "Karachi") && (getArrival() == "Karachi" || getArrival() == "Gilgit"))
            {
                cout << "Ticket Price: 38000" << endl;
            }
            else
            {
                cout << "No Flights available :/ " << endl;
            }
        }
};

//Fayz
class BusinessClassTicket : public Ticket
{
    public:
        BusinessClassTicket(Passenger passenger, string departure, string arrival) : Ticket(passenger, departure, arrival)
        {
            
        }
        
        void ticketDetails()
        {
            Ticket::ticketDetails();
            cout << "\nClass: Business";
            cout << "\nTicket Price: 50000" << endl;
        }
};

//Fayz
class EconomyClassTicket : public Ticket
{
    public:
        EconomyClassTicket(Passenger passenger, string departure, string arrival) : Ticket(passenger, departure, arrival)
        {
            
        }
        
        void ticketDetails()
        {
            Ticket::ticketDetails();
            cout << "\nClass: Economy";
            cout << "\nTicket Price: 25000" << endl;
        }
};

//Abdulrehman
class Airline
{
    protected:
        string name;
        Ticket& ticket;

    public:
        Airline(string name, Ticket& ticket) : name(name), ticket(ticket)
        {
            
        }
        
        void setName(string name)
        {
            this->name = name;
        }
        
        string getName()
        {
            return name;
        }
        
        void airlineDetails()
        {
            cout << "\nAirline: " << getName() << endl;
            ticket.ticketDetails();
        }
};

//Abdulrehman
class Airport : public Airline
{
    private:
        string airportName;

    public:
        Airport(string airportName, string airlineName, Ticket& ticket) : Airline(airlineName, ticket)
        {
            setAirportName(airportName);
        }
        
        void setAirportName(string airportName)
        {
            this->airportName = airportName;
        }
        
        string getAirportName()
        {
            return airportName;
        }
        
        void airportDetails()
        {
            cout << "\nAirport: " << getAirportName() << endl;
            airlineDetails(); 
        }
};

int main()
{
    Passenger passenger("Leo Messi", 37, 1234567890);
    Ticket ticket(passenger, "Lahore", "Karachi");
    Airline airline("PIA", ticket);
    Airport airport("Allama Iqbal International", "PIA", ticket);
    Flight flight("PK-303", "10:00 AM", "12:00 PM");
    BoardingPass boardingPass(passenger, flight, "15A");

    cout << "\nTicket Details:" << endl;
    ticket.ticketDetails();
    
    cout << "\nBoarding Pass Details:" << endl;
    boardingPass.boardingPassDetails();

    cout << "\nAirline Details:" << endl;
    airline.airlineDetails();

    cout << "\nAirport Details:" << endl;
    airport.airportDetails();

    return 0;
}