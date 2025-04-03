#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Defining a simple Car class
class Car {
public:
    string VIN;  // Vehicle Identification Number (should be unique for each car)
    string make; // Car brand (e.g., Toyota, Ford)
    string model; // Specific model (e.g., Corolla, Mustang)
    int year; // Manufacturing year
    double mileage; // Current mileage of the car
    vector<string> owners; // List of previous and current owners

    // Constructor to initialize a Car object
    Car(string vin, string mk, string mdl, int yr, double miles, vector<string> ownerList) {
        VIN = vin;
        make = mk;
        model = mdl;
        year = yr;
        mileage = miles;
        owners = ownerList;
    }

    // Function to display car details
    void displayInfo() {
        cout << "VIN: " << VIN << endl;
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
        cout << "Mileage: " << mileage << " miles" << endl;
        cout << "Owners: ";
        for (const string& owner : owners) {
            cout << owner << " ";
        }
        cout << endl;
    }
};

int main() {
    // Creating a list of four previous owners
    vector<string> ownerList = {"Alice Johnson", "Bob Smith", "Charlie Davis", "Diana White"};

    // Instantiating a Car object
    Car myCar("1HGCM82633A123456", "Toyota", "Camry", 2015, 75000, ownerList);

    // Displaying the car details
    myCar.displayInfo();

    return 0;
}

// What attributes--if any--should be private, and why?
/*
Attributes such as VIN, mileage, and owners should be private.
1. **VIN**: This should be private because it is a unique identifier for the car, and direct modification should be restricted to prevent accidental changes.
2. **Mileage**: This should be private to prevent unauthorized modifications, as mileage impacts a car's value and maintenance records.
3. **Owners**: This should be private to maintain data integrity, ensuring the owner list is updated only through controlled methods.
By making these attributes private, we can enforce encapsulation and provide getter/setter methods to control how these attributes are accessed and modified.
*/
