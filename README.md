**Airline Flight Booking System using C++.**

This project implements an Airline Flight Booking System using C++. It supports both domestic and international flight bookings, ticket cancellations, and ticket checking functionalities.

Features
Booking Flights:

Choose between domestic and international flights.
Select flights based on source and destination.
Enter passenger details including name, gender, age, email, and contact number.
Cancellation:

Cancel booked tickets and receive a refund of $100.
Ticket Checking:

Verify booked tickets using the Passenger Name Record (PNR).
Payment Options:

Supports payment via Debit Card, Credit Card, and Net Banking.
Classes and Concepts
Classes Used:

d_booking: Handles domestic flight booking details.
i_booking: Manages international flight booking details.
passenger: Inherits from d_booking and i_booking, encapsulates passenger details.
payment: Handles payment details.
Additional functions for file operations (createfile, cancelticket, checkticket, etc.).
Concepts Demonstrated:

Encapsulation: Data members and member functions are encapsulated within classes.
Abstraction: Users interact with simplified interfaces to book tickets, make payments, etc.
Inheritance: passenger class inherits booking functionalities from both d_booking and i_booking classes.
Polymorphism: Methods exhibit different behaviors based on whether the booking is domestic or international.
Usage
Prerequisites
Make sure you have a C++ compiler installed (e.g., GCC, Visual Studio, etc.).
