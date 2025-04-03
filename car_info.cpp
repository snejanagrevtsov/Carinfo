#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Car {
public:
    string VIN; // Vehicle Identification Number
    string make; // Car brand (e.g., Toyota, Ford)
    string model; // Specific model (e.g., Corolla, Mustang)
    int year; // Manufacturing year
    double mileage; // Current mileage of the car
    vector<string> owners; // List of previous and current owners

    // Constructor
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
    // Create a list of four previous owners
    vector<string> owners = {"John Doe", "Jane Smith", "Chris Brown", "Pat Lee"};
    
    // Instantiate the Car object
    Car myCar("1HGCM82633A123456", "Honda", "Civic", 2020, 15000.0, owners);
    
    // Call displayInfo to print car details
    myCar.displayInfo();
    
    // Comment: 
    /*
    Attributes like VIN, make, model, year, mileage, and owners should be private
    because they represent internal details that shouldn't be modified directly.
    Private attributes protect data integrity, and access can be controlled via getters/setters.
    */
    return 0;
}
