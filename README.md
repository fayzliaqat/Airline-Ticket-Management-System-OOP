# ✈️ Airline Ticket Management System (OOP Design)

A modular C++ application developed during my **2nd Semester** to implement and demonstrate the core pillars of **Object-Oriented Programming (OOP)** and software system architecture. 

Rather than focusing just on runtime features, this project highlights real-world structural entities and their data relationships within an airport eco-system.

## 📊 System Architecture & Class Diagram
To map out how the entities interact, here is the structural system design of the application:

![Class Diagram](class_diagram.png)

---

## 🧬 Object-Oriented Relationships Implemented

Based on our system design, the application orchestrates data across components using precise structural connections:

* **Composition (Passenger & Ticket):** A `Ticket` tightly encapsulates a `Passenger` object's details (Name, CNIC, Age). If a ticket entity is destroyed, its uniquely bound passenger manifest lifecycle context drops with it.
* **Composition (Airport & Airline):** An `Airport` structural layout contains `Airline` configurations. The destruction of the core ecosystem cascades directly to its associated networks.
* **Aggregation (Airport & Employee):** The `Airport` contains multiple `Employee` profiles. However, employees hold independent operational contexts and can exist outside the airport database scope.
* **Association (Flight & Airline):** Represents a structural connection where a `Flight` runs under a specific operational flag (`Airline`), linking arrival/departure constraints seamlessly.

## 🛠️ Engineering Stack & Concepts
* **Language:** C++
* **Core OOP Patterns:** Explicit Getter/Setter Encapsulation, Custom Value Constructors, Object Pointers, and Runtime Polymorphism base layouts.
* **Source Management:** Separated into clear logical classes (`Passenger`, `Employee`, `Ticket`, `Airline`, `Airport`, `Flight`, `BoardingPass`).