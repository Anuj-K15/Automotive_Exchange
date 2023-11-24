#include <iostream>
using namespace std;

void intro()
{
    cout << "\n\n\t\t\t\t\t\t\t ----------------------------------------";
    cout << "\n\t\t\t\t\t\t\t |                                      |";
    cout << "\n\n\t\t\t\t\t\t\t | A U T O M O T I V E  E X C H A N G E |";
    cout << "\n\n\t\t\t\t\t\t\t |                                      |";
    cout << "\n\t\t\t\t\t\t\t ----------------------------------------\n\n";
    cout << "\t\t\t\t\t\t\t\t" << "  " << "The Land of Automotives  \n";
    cout << "\t\t\t\t\t\t\t ----------------------------------------\n\n";
    cout << "\t\t\t\t\t\t\t ..... Currently we only Trade Cars ..... \n\n\n\n";
    cout << "\t\t\t\t\t\t\t\t" << "  " << "What would you Prefer?  \n" << endl;
}

void options()
{
    cout << "\t\t\t\t\t\t\t\t" << "1. Buying\t";
    cout << "2. Selling\n\n";
}

void select(int choice)
{
    switch (choice)
    {
    case 1:
        cout << "\n\n\t\t\t\t\t\t\t\t\t ----------";
        cout << "\n\t\t\t\t\t\t\t\t\t | Buying |";
        cout << "\n\t\t\t\t\t\t\t\t\t ----------\n\n";
        break;

    case 2:
        cout << "\n\n\t\t\t\t\t\t\t\t\t -----------";
        cout << "\n\t\t\t\t\t\t\t\t\t | Selling |";
        cout << "\n\t\t\t\t\t\t\t\t\t -----------\n\n";
        break;
    }
}

void displayCarInfo(string brand, string model, string color, string year, string kmDriven, string price)
{
    cout << "\n\t\t\t\t\t\t\tBrand     : " << brand << endl;
    cout << "\t\t\t\t\t\t\tModel     : " << model << endl;
    cout << "\t\t\t\t\t\t\tColor     : " << color << endl;
    cout << "\t\t\t\t\t\t\tYear      : " << year << endl;
    cout << "\t\t\t\t\t\t\tKM Driven : " << kmDriven << endl;
    cout << "\t\t\t\t\t\t\tPrice     : " << price << endl;
}

void buying()
{
    int ch;
    cout << "\t\t\t\t\t\t\t\t1. Mumbai" << endl;
    cout << "\t\t\t\t\t\t\t\t2. Delhi" << endl;
    cout << "\t\t\t\t\t\t\t\t3. Bangalore\n" ;
    cout << "\n\t\t\t\t\t\t\tChoose your location : ";
    cin >> ch;
    cout << "\n\t\t\t\t\tFirst View all the Available Cars by Selecting Below Options";

    switch (ch)
    {
    case 1:
    {
        string fuel;
        cout << "\n\n\t\t\t\t\t\t\tEnter the Fuel Type: \n\t\t\t\t\t\t\t      1.Petrol\n\t\t\t\t\t\t\t      2.Diesel\n\t\t\t\t\t\t\t      3.CNG\n";
        cout << "\n\t\t\t\t\t\t\tChoice = ";
        cin >> fuel;

        string budg;
        cout << "\n\n\t\t\t\t\t\t\tEnter the Budget: \n\t\t\t\t\t\t\t      1.Under 2lakh\n\t\t\t\t\t\t\t      2.2-5lakh\n\t\t\t\t\t\t\t      3.Above 5lakh\n";
        cout << "\n\t\t\t\t\t\t\tChoice = ";
        cin >> budg;

        string bt;
        cout << "\n\n\t\t\t\t\t\t\tEnter the Body Type: \n\t\t\t\t\t\t\t      1.Hatchback\n\t\t\t\t\t\t\t      2.Sedan\n\t\t\t\t\t\t\t      3.SUV\n";
        cout << "\n\t\t\t\t\t\t\tChoice = ";
        cin >> bt;

        if ((fuel == "1" || fuel == "petrol") && (budg == "1" || budg == "Under 2lakh") && (bt == "1" || bt == "Hatchback"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("Maruti Suzuki", "Alto", "White", "2014", "40,000", "Rs.1.90 Lakh");
            displayCarInfo("Maruti Suzuki", "WagonR", "Silver", "2012", "60,000", "Rs.1.60 Lakh");
            cout << "\n\t\t\t\t\tTo Buy any of these Cars, Visit our nearest Showroom";
        }
        else if ((fuel == "1" || fuel == "petrol") && (budg == "2" || budg == "2-5Lakh") && (bt == "1" || bt == "Hatchback"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("Maruti Suzuki", "Celerio", "White", "2015", "55,000", "Rs.2.50 Lakh");
            displayCarInfo("Maruti Suzuki", "Swift", "Red", "2014", "60,000", "Rs.2.60 Lakh");
            displayCarInfo("Tata", "Punch", "Silver", "2021", "20,000", "Rs.4.80 Lakh");
            cout << "\n\t\t\t\t\tTo Buy any of these Cars, Visit our nearest Showroom";
        }
        else if ((fuel == "1" || fuel == "petrol") && (budg == "3" || budg == "Above 5Lakh") && (bt == "1" || bt == "Hatchback"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("Maruti Suzuki", "Baleno", "Blue", "2018", "30,000", "Rs.6.00 Lakh");
            displayCarInfo("Hyundai", "i10(Nios)", "Red", "2017", "50,000", "Rs.5.10 Lakh");
            displayCarInfo("Tata", "Nexon", "Blue", "2020", "29,000", "Rs.6.20 Lakh");
            cout << "\n\t\t\t\t\tTo Buy any of these Cars, Visit our nearest Showroom";
        }
        else if ((fuel == "1" || fuel == "petrol") && (budg == "1" || budg == "Under 2Lakh") && (bt == "2" || bt == "Sedan"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("NA", "NA", "NA", "NA", "NA", "NA");
        }
        else if ((fuel == "1" || fuel == "petrol") && (budg == "2" || budg == "2-5Lakh") && (bt == "2" || bt == "Sedan"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("Maruti Suzuki", "Dzire", "White", "2016", "40,000", "4.85Lakh");
            cout << "\n\t\t\t\t\tTo Buy any of these Cars, Visit our nearest Showroom";
        }
        else if ((fuel == "1" || fuel == "petrol") && (budg == "3" || budg == "Above 5Lakh") && (bt == "2" || bt == "Sedan"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("Skoda", "Rapid", "White", "2016", "30,000", "Rs.6.00 Lakh");
            displayCarInfo("Hyundai", "Verna", "Silver", "2018", "50,000", "Rs.7.00 Lakh");
            displayCarInfo("Honda", "City", "Brown", "2015", "74,000", "Rs.6.20 Lakh");
            cout << "\n\t\t\t\t\tTo Buy any of these Cars, Visit our nearest Showroom";
        }
        else if ((fuel == "1" || fuel == "petrol") && (budg == "1" || budg == "Under 2Lakh") && (bt == "3" || bt == "SUV"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("NA", "NA", "NA", "NA", "NA", "NA");
        }
        else if ((fuel == "1" || fuel == "petrol") && (budg == "2" || budg == "2-5Lakh") && (bt == "3" || bt == "SUV"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("NA", "NA", "NA", "NA", "NA", "NA");
        }
        else if ((fuel == "1" || fuel == "petrol") && (budg == "3" || budg == "Above 5Lakh") && (bt == "3" || bt == "SUV"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("Mahindra", "Scorpio", "White", "2015", "30,000", "Rs.6.30 Lakh");
            displayCarInfo("Hyundai", "Creta", "White", "2018", "40,000", "Rs.8.60 Lakh");
            displayCarInfo("Mahindra", "Thar", "Black", "2020", "25,000", "Rs.9.00 Lakh");
            cout << "\n\t\t\t\t\tTo Buy any of these Cars, Visit our nearest Showroom";
        }

        if ((fuel == "2" || fuel == "diesel") && (budg == "1" || budg == "Under 2lakh") && (bt == "1" || bt == "Hatchback"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("NA", "NA", "NA", "NA", "NA", "NA");
        }
        else if ((fuel == "2" || fuel == "diesel") && (budg == "2" || budg == "2-5Lakh") && (bt == "1" || bt == "Hatchback"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("Volkswagen", "Polo", "Black", "2014", "90,000", "Rs.4.35 Lakh");
            displayCarInfo("Maruti Suzuki", "Swift", "White", "2013", "80,000", "Rs.4.60 Lakh");
            displayCarInfo("Hyundai", "i20", "Silver", "2012", "1,10,000", "Rs.3.80 Lakh");
            cout << "\n\t\t\t\t\tTo Buy any of these Cars, Visit our nearest Showroom";
        }
        else if ((fuel == "2" || fuel == "diesel") && (budg == "3" || budg == "Above 5Lakh") && (bt == "1" || bt == "Hatchback"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("Maruti Suzuki", "Baleno", "Silver", "2019", "54,000", "Rs.6.70 Lakh");
            displayCarInfo("Hyundai", "Elite i20", "Red", "2019", "80,000", "Rs.7.20 Lakh");
            displayCarInfo("Tata", "Altroz", "White", "2021", "43,000", "Rs.8.20 Lakh");
            cout << "\n\t\t\t\t\tTo Buy any of these Cars, Visit our nearest Showroom";
        }
        else if ((fuel == "2" || fuel == "diesel") && (budg == "1" || budg == "Under 2Lakh") && (bt == "2" || bt == "Sedan"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("NA", "NA", "NA", "NA", "NA", "NA");
        }
        else if ((fuel == "2" || fuel == "diesel") && (budg == "2" || budg == "2-5Lakh") && (bt == "2" || bt == "Sedan"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("Maruti", "Swift Dzire", "White", "2013", "72,000", "4.45Lakh");
            displayCarInfo("Hyundai", "Verna", "White", "2013", "80,000", "4.00Lakh");
            cout << "\n\t\t\t\t\tTo Buy any of these Cars, Visit our nearest Showroom";
        }
        else if ((fuel == "2" || fuel == "diesel") && (budg == "3" || budg == "Above 5Lakh") && (bt == "2" || bt == "Sedan"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("Maruti", "Ciaz", "White", "2016", "1,20,000", "Rs.6.70 Lakh");
            displayCarInfo("Hyundai", "Verna", "Black", "2021", "48,000", "Rs.14.11 Lakh");
            displayCarInfo("Honda", "City", "Grey", "2017", "50,000", "Rs.6.66 Lakh");
            cout << "\n\t\t\t\t\tTo Buy any of these Cars, Visit our nearest Showroom";
        }
        else if ((fuel == "2" || fuel == "diesel") && (budg == "1" || budg == "Under 2Lakh") && (bt == "3" || bt == "SUV"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("NA", "NA", "NA", "NA", "NA", "NA");
        }
        else if ((fuel == "2" || fuel == "diesel") && (budg == "2" || budg == "2-5Lakh") && (bt == "3" || bt == "SUV"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("Renault", "Duster", "Silver", "2012", "1,15,000", "4.20 Lakh");
            cout << "\n\t\t\t\t\tTo Buy any of these Cars, Visit our nearest Showroom";
        }
        else if ((fuel == "2" || fuel == "diesel") && (budg == "3" || budg == "Above 5Lakh") && (bt == "3" || bt == "SUV"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("Mahindra", "Scorpio", "White", "2022", "5,000", "Rs.18.00 Lakh");
            displayCarInfo("Hyundai", "Creta", "Black", "2015", "86,000", "Rs.8.80 Lakh");
            displayCarInfo("Tata", "Safari", "White", "2021", "16,000", "Rs.21.00 Lakh");
            cout << "\n\t\t\t\t\tTo Buy any of these Cars, Visit our nearest Showroom";
        }

        if ((fuel == "3" || fuel == "cng") && (budg == "1" || budg == "Under 2lakh") && (bt == "1" || bt == "Hatchback"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("Maruti", "Zen Estilo", "Silver", "2012", "70,000", "1.90 Lakh");
            cout << "\n\t\t\t\t\tTo Buy any of these Cars, Visit our nearest Showroom";
        }
        else if ((fuel == "3" || fuel == "cng") && (budg == "2" || budg == "2-5Lakh") && (bt == "1" || bt == "Hatchback"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("Maruti", "Alto", "Blue", "2014", "80,000", "Rs.2.35 Lakh");
            displayCarInfo("Maruti", "Celerio", "White", "2015", "40,000", "Rs.4.10 Lakh");
            displayCarInfo("Maruti", "WagonR", "Silver", "2019", "60,000", "Rs.5.00 Lakh");
            cout << "\n\t\t\t\t\tTo Buy any of these Cars, Visit our nearest Showroom";
        }
        else if ((fuel == "3" || fuel == "cng") && (budg == "3" || budg == "Above 5Lakh") && (bt == "1" || bt == "Hatchback"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("Maruti", "WagonR", "Silver", "2021", "32,000", "Rs.5.90 Lakh");
            displayCarInfo("Hyundai", "Grand i10 Nios", "White", "2021", "32,000", "Rs.6.70 Lakh");
            displayCarInfo("Tata", "Tiago", "Black", "2022", "35,000", "Rs.6.90 Lakh");
            cout << "\n\t\t\t\t\tTo Buy any of these Cars, Visit our nearest Showroom";
        }
        else if ((fuel == "3" || fuel == "cng") && (budg == "1" || budg == "Under 2Lakh") && (bt == "2" || bt == "Sedan"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("NA", "NA", "NA", "NA", "NA", "NA");
        }
        else if ((fuel == "3" || fuel == "cng") && (budg == "2" || budg == "2-5Lakh") && (bt == "2" || bt == "Sedan"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("Honda", "City", "White", "2011", "1,15,000", "2.90 Lakh");
            displayCarInfo("Hyundai", "Xcent", "Red", "2015", "60,000", "4.30 Lakh");
            cout << "\n\t\t\t\t\tTo Buy any of these Cars, Visit our nearest Showroom";
        }
        else if ((fuel == "3" || fuel == "cng") && (budg == "3" || budg == "Above 5Lakh") && (bt == "2" || bt == "Sedan"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("Maruti", "Ciaz", "White", "2016", "1,05,000", "Rs.5.10 Lakh");
            displayCarInfo("Hyundai", "Aura", "White", "2021", "14,000", "Rs.7.50 Lakh");
            displayCarInfo("Maruti", "Swift Dzire", "Grey", "2021", "23,000", "Rs.6.55 Lakh");
            cout << "\n\t\t\t\t\tTo Buy any of these Cars, Visit our nearest Showroom";
        }
        else if ((fuel == "3" || fuel == "cng") && (budg == "1" || budg == "Under 2Lakh") && (bt == "3" || bt == "SUV"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("NA", "NA", "NA", "NA", "NA", "NA");
        }
        else if ((fuel == "3" || fuel == "cng") && (budg == "2" || budg == "2-5Lakh") && (bt == "3" || bt == "SUV"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("NA", "NA", "NA", "NA", "NA", "NA");
        }
        else if ((fuel == "3" || fuel == "cng") && (budg == "3" || budg == "Above 5Lakh") && (bt == "3" || bt == "SUV"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("Maruti", "Ertiga", "Black", "2014", "77,000", "Rs.6.00 Lakh");
            displayCarInfo("Hyundai", "Creta", "White", "2019", "86,000", "Rs.11.30 Lakh");
            displayCarInfo("Maruti", "Ertiga", "White", "2016", "34,000", "Rs.8.20 Lakh");
            cout << "\n\t\t\t\t\tTo Buy any of these Cars, Visit our nearest Showroom";
        }
    }
    break;

    case 2:
    {
        string fuel;
        cout << "\n\n\t\t\t\t\t\t\tEnter the Fuel Type: \n\t\t\t\t\t\t\t      1.Petrol\n\t\t\t\t\t\t\t      2.Diesel\n\t\t\t\t\t\t\t      3.CNG\n";
        cout << "\n\t\t\t\t\t\t\tChoice = ";
        cin >> fuel;

        string budg;
        cout << "\n\n\t\t\t\t\t\t\tEnter the Budget: \n\t\t\t\t\t\t\t      1.Under 2lakh\n\t\t\t\t\t\t\t      2.2-5lakh\n\t\t\t\t\t\t\t      3.Above 5lakh\n";
        cout << "\n\t\t\t\t\t\t\tChoice = ";
        cin >> budg;

        string bt;
        cout << "\n\n\t\t\t\t\t\t\tEnter the Body Type: \n\t\t\t\t\t\t\t      1.Hatchback\n\t\t\t\t\t\t\t      2.Sedan\n\t\t\t\t\t\t\t      3.SUV\n";
        cout << "\n\t\t\t\t\t\t\tChoice = ";
        cin >> bt;

        if ((fuel == "1" || fuel == "petrol") && (budg == "1" || budg == "Under 2lakh") && (bt == "1" || bt == "Hatchback"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("Maruti Suzuki", "Alto", "White", "2014", "40,000", "Rs.1.90 Lakh");
            displayCarInfo("Maruti Suzuki", "WagonR", "Silver", "2012", "60,000", "Rs.1.60 Lakh");
            cout << "\n\t\t\t\t\tTo Buy any of these Cars, Visit our nearest Showroom";
        }
        else if ((fuel == "1" || fuel == "petrol") && (budg == "2" || budg == "2-5Lakh") && (bt == "1" || bt == "Hatchback"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("Maruti Suzuki", "Celerio", "White", "2015", "55,000", "Rs.2.50 Lakh");
            displayCarInfo("Maruti Suzuki", "Swift", "Red", "2014", "60,000", "Rs.2.60 Lakh");
            displayCarInfo("Tata", "Punch", "Silver", "2021", "20,000", "Rs.4.80 Lakh");
            cout << "\n\t\t\t\t\tTo Buy any of these Cars, Visit our nearest Showroom";
        }
        else if ((fuel == "1" || fuel == "petrol") && (budg == "3" || budg == "Above 5Lakh") && (bt == "1" || bt == "Hatchback"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("Maruti Suzuki", "Baleno", "Blue", "2018", "30,000", "Rs.6.00 Lakh");
            displayCarInfo("Hyundai", "i10(Nios)", "Red", "2017", "50,000", "Rs.5.10 Lakh");
            displayCarInfo("Tata", "Nexon", "Blue", "2020", "29,000", "Rs.6.20 Lakh");
            cout << "\n\t\t\t\t\tTo Buy any of these Cars, Visit our nearest Showroom";
        }
        else if ((fuel == "1" || fuel == "petrol") && (budg == "1" || budg == "Under 2Lakh") && (bt == "2" || bt == "Sedan"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("NA", "NA", "NA", "NA", "NA", "NA");
        }
        else if ((fuel == "1" || fuel == "petrol") && (budg == "2" || budg == "2-5Lakh") && (bt == "2" || bt == "Sedan"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("Maruti Suzuki", "Dzire", "White", "2016", "40,000", "4.85Lakh");
            cout << "\n\t\t\t\t\tTo Buy any of these Cars, Visit our nearest Showroom";
        }
        else if ((fuel == "1" || fuel == "petrol") && (budg == "3" || budg == "Above 5Lakh") && (bt == "2" || bt == "Sedan"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("Skoda", "Rapid", "White", "2016", "30,000", "Rs.6.00 Lakh");
            displayCarInfo("Hyundai", "Verna", "Silver", "2018", "50,000", "Rs.7.00 Lakh");
            displayCarInfo("Honda", "City", "Brown", "2015", "74,000", "Rs.6.20 Lakh");
            cout << "\n\t\t\t\t\tTo Buy any of these Cars, Visit our nearest Showroom";
        }
        else if ((fuel == "1" || fuel == "petrol") && (budg == "1" || budg == "Under 2Lakh") && (bt == "3" || bt == "SUV"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("NA", "NA", "NA", "NA", "NA", "NA");
        }
        else if ((fuel == "1" || fuel == "petrol") && (budg == "2" || budg == "2-5Lakh") && (bt == "3" || bt == "SUV"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("NA", "NA", "NA", "NA", "NA", "NA");
        }
        else if ((fuel == "1" || fuel == "petrol") && (budg == "3" || budg == "Above 5Lakh") && (bt == "3" || bt == "SUV"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("Mahindra", "Scorpio", "White", "2015", "30,000", "Rs.6.30 Lakh");
            displayCarInfo("Hyundai", "Creta", "White", "2018", "40,000", "Rs.8.60 Lakh");
            displayCarInfo("Mahindra", "Thar", "Black", "2020", "25,000", "Rs.9.00 Lakh");
            cout << "\n\t\t\t\t\tTo Buy any of these Cars, Visit our nearest Showroom";
        }

        if ((fuel == "2" || fuel == "diesel") && (budg == "1" || budg == "Under 2lakh") && (bt == "1" || bt == "Hatchback"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("NA", "NA", "NA", "NA", "NA", "NA");
        }
        else if ((fuel == "2" || fuel == "diesel") && (budg == "2" || budg == "2-5Lakh") && (bt == "1" || bt == "Hatchback"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("Volkswagen", "Polo", "Black", "2014", "90,000", "Rs.4.35 Lakh");
            displayCarInfo("Maruti Suzuki", "Swift", "White", "2013", "80,000", "Rs.4.60 Lakh");
            displayCarInfo("Hyundai", "i20", "Silver", "2012", "1,10,000", "Rs.3.80 Lakh");
            cout << "\n\t\t\t\t\tTo Buy any of these Cars, Visit our nearest Showroom";
        }
        else if ((fuel == "2" || fuel == "diesel") && (budg == "3" || budg == "Above 5Lakh") && (bt == "1" || bt == "Hatchback"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("Maruti Suzuki", "Baleno", "Silver", "2019", "54,000", "Rs.6.70 Lakh");
            displayCarInfo("Hyundai", "Elite i20", "Red", "2019", "80,000", "Rs.7.20 Lakh");
            displayCarInfo("Tata", "Altroz", "White", "2021", "43,000", "Rs.8.20 Lakh");
            cout << "\n\t\t\t\t\tTo Buy any of these Cars, Visit our nearest Showroom";
        }
        else if ((fuel == "2" || fuel == "diesel") && (budg == "1" || budg == "Under 2Lakh") && (bt == "2" || bt == "Sedan"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("NA", "NA", "NA", "NA", "NA", "NA");
        }
        else if ((fuel == "2" || fuel == "diesel") && (budg == "2" || budg == "2-5Lakh") && (bt == "2" || bt == "Sedan"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("Maruti", "Swift Dzire", "White", "2013", "72,000", "4.45Lakh");
            displayCarInfo("Hyundai", "Verna", "White", "2013", "80,000", "4.00Lakh");
            cout << "\n\t\t\t\t\tTo Buy any of these Cars, Visit our nearest Showroom";
        }
        else if ((fuel == "2" || fuel == "diesel") && (budg == "3" || budg == "Above 5Lakh") && (bt == "2" || bt == "Sedan"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("Maruti", "Ciaz", "White", "2016", "1,20,000", "Rs.6.70 Lakh");
            displayCarInfo("Hyundai", "Verna", "Black", "2021", "48,000", "Rs.14.11 Lakh");
            displayCarInfo("Honda", "City", "Grey", "2017", "50,000", "Rs.6.66 Lakh");
            cout << "\n\t\t\t\t\tTo Buy any of these Cars, Visit our nearest Showroom";
        }
        else if ((fuel == "2" || fuel == "diesel") && (budg == "1" || budg == "Under 2Lakh") && (bt == "3" || bt == "SUV"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("NA", "NA", "NA", "NA", "NA", "NA");
        }
        else if ((fuel == "2" || fuel == "diesel") && (budg == "2" || budg == "2-5Lakh") && (bt == "3" || bt == "SUV"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("Renault", "Duster", "Silver", "2012", "1,15,000", "4.20 Lakh");
            cout << "\n\t\t\t\t\tTo Buy any of these Cars, Visit our nearest Showroom";
        }
        else if ((fuel == "2" || fuel == "diesel") && (budg == "3" || budg == "Above 5Lakh") && (bt == "3" || bt == "SUV"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("Mahindra", "Scorpio", "White", "2022", "5,000", "Rs.18.00 Lakh");
            displayCarInfo("Hyundai", "Creta", "Black", "2015", "86,000", "Rs.8.80 Lakh");
            displayCarInfo("Tata", "Safari", "White", "2021", "16,000", "Rs.21.00 Lakh");
            cout << "\n\t\t\t\t\tTo Buy any of these Cars, Visit our nearest Showroom";
        }

        if ((fuel == "3" || fuel == "cng") && (budg == "1" || budg == "Under 2lakh") && (bt == "1" || bt == "Hatchback"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("Maruti", "Zen Estilo", "Silver", "2012", "70,000", "1.90 Lakh");
            cout << "\n\t\t\t\t\tTo Buy any of these Cars, Visit our nearest Showroom";
        }
        else if ((fuel == "3" || fuel == "cng") && (budg == "2" || budg == "2-5Lakh") && (bt == "1" || bt == "Hatchback"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("Maruti", "Alto", "Blue", "2014", "80,000", "Rs.2.35 Lakh");
            displayCarInfo("Maruti", "Celerio", "White", "2015", "40,000", "Rs.4.10 Lakh");
            displayCarInfo("Maruti", "WagonR", "Silver", "2019", "60,000", "Rs.5.00 Lakh");
            cout << "\n\t\t\t\t\tTo Buy any of these Cars, Visit our nearest Showroom";
        }
        else if ((fuel == "3" || fuel == "cng") && (budg == "3" || budg == "Above 5Lakh") && (bt == "1" || bt == "Hatchback"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("Maruti", "WagonR", "Silver", "2021", "32,000", "Rs.5.90 Lakh");
            displayCarInfo("Hyundai", "Grand i10 Nios", "White", "2021", "32,000", "Rs.6.70 Lakh");
            displayCarInfo("Tata", "Tiago", "Black", "2022", "35,000", "Rs.6.90 Lakh");
            cout << "\n\t\t\t\t\tTo Buy any of these Cars, Visit our nearest Showroom";
        }
        else if ((fuel == "3" || fuel == "cng") && (budg == "1" || budg == "Under 2Lakh") && (bt == "2" || bt == "Sedan"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("NA", "NA", "NA", "NA", "NA", "NA");
        }
        else if ((fuel == "3" || fuel == "cng") && (budg == "2" || budg == "2-5Lakh") && (bt == "2" || bt == "Sedan"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("Honda", "City", "White", "2011", "1,15,000", "2.90 Lakh");
            displayCarInfo("Hyundai", "Xcent", "Red", "2015", "60,000", "4.30 Lakh");
            cout << "\n\t\t\t\t\tTo Buy any of these Cars, Visit our nearest Showroom";
        }
        else if ((fuel == "3" || fuel == "cng") && (budg == "3" || budg == "Above 5Lakh") && (bt == "2" || bt == "Sedan"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("Maruti", "Ciaz", "White", "2016", "1,05,000", "Rs.5.10 Lakh");
            displayCarInfo("Hyundai", "Aura", "White", "2021", "14,000", "Rs.7.50 Lakh");
            displayCarInfo("Maruti", "Swift Dzire", "Grey", "2021", "23,000", "Rs.6.55 Lakh");
            cout << "\n\t\t\t\t\tTo Buy any of these Cars, Visit our nearest Showroom";
        }
        else if ((fuel == "3" || fuel == "cng") && (budg == "1" || budg == "Under 2Lakh") && (bt == "3" || bt == "SUV"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("NA", "NA", "NA", "NA", "NA", "NA");
        }
        else if ((fuel == "3" || fuel == "cng") && (budg == "2" || budg == "2-5Lakh") && (bt == "3" || bt == "SUV"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("NA", "NA", "NA", "NA", "NA", "NA");
        }
        else if ((fuel == "3" || fuel == "cng") && (budg == "3" || budg == "Above 5Lakh") && (bt == "3" || bt == "SUV"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("Maruti", "Ertiga", "Black", "2014", "77,000", "Rs.6.00 Lakh");
            displayCarInfo("Hyundai", "Creta", "White", "2019", "86,000", "Rs.11.30 Lakh");
            displayCarInfo("Maruti", "Ertiga", "White", "2016", "34,000", "Rs.8.20 Lakh");
            cout << "\n\t\t\t\t\tTo Buy any of these Cars, Visit our nearest Showroom";
        }
    }
    break;

    case 3:
    {
        string fuel;
        cout << "\n\n\t\t\t\t\t\t\tEnter the Fuel Type: \n\t\t\t\t\t\t\t      1.Petrol\n\t\t\t\t\t\t\t      2.Diesel\n\t\t\t\t\t\t\t      3.CNG\n";
        cout << "\n\t\t\t\t\t\t\tChoice = ";
        cin >> fuel;

        string budg;
        cout << "\n\n\t\t\t\t\t\t\tEnter the Budget: \n\t\t\t\t\t\t\t      1.Under 2lakh\n\t\t\t\t\t\t\t      2.2-5lakh\n\t\t\t\t\t\t\t      3.Above 5lakh\n";
        cout << "\n\t\t\t\t\t\t\tChoice = ";
        cin >> budg;

        string bt;
        cout << "\n\n\t\t\t\t\t\t\tEnter the Body Type: \n\t\t\t\t\t\t\t      1.Hatchback\n\t\t\t\t\t\t\t      2.Sedan\n\t\t\t\t\t\t\t      3.SUV\n";
        cout << "\n\t\t\t\t\t\t\tChoice = ";
        cin >> bt;

        if ((fuel == "1" || fuel == "petrol") && (budg == "1" || budg == "Under 2lakh") && (bt == "1" || bt == "Hatchback"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("Maruti Suzuki", "Alto", "White", "2014", "40,000", "Rs.1.90 Lakh");
            displayCarInfo("Maruti Suzuki", "WagonR", "Silver", "2012", "60,000", "Rs.1.60 Lakh");
            cout << "\n\t\t\t\t\tTo Buy any of these Cars, Visit our nearest Showroom";
        }
        else if ((fuel == "1" || fuel == "petrol") && (budg == "2" || budg == "2-5Lakh") && (bt == "1" || bt == "Hatchback"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("Maruti Suzuki", "Celerio", "White", "2015", "55,000", "Rs.2.50 Lakh");
            displayCarInfo("Maruti Suzuki", "Swift", "Red", "2014", "60,000", "Rs.2.60 Lakh");
            displayCarInfo("Tata", "Punch", "Silver", "2021", "20,000", "Rs.4.80 Lakh");
            cout << "\n\t\t\t\t\tTo Buy any of these Cars, Visit our nearest Showroom";
        }
        else if ((fuel == "1" || fuel == "petrol") && (budg == "3" || budg == "Above 5Lakh") && (bt == "1" || bt == "Hatchback"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("Maruti Suzuki", "Baleno", "Blue", "2018", "30,000", "Rs.6.00 Lakh");
            displayCarInfo("Hyundai", "i10(Nios)", "Red", "2017", "50,000", "Rs.5.10 Lakh");
            displayCarInfo("Tata", "Nexon", "Blue", "2020", "29,000", "Rs.6.20 Lakh");
            cout << "\n\t\t\t\t\tTo Buy any of these Cars, Visit our nearest Showroom";
        }
        else if ((fuel == "1" || fuel == "petrol") && (budg == "1" || budg == "Under 2Lakh") && (bt == "2" || bt == "Sedan"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("NA", "NA", "NA", "NA", "NA", "NA");
        }
        else if ((fuel == "1" || fuel == "petrol") && (budg == "2" || budg == "2-5Lakh") && (bt == "2" || bt == "Sedan"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("Maruti Suzuki", "Dzire", "White", "2016", "40,000", "4.85Lakh");
            cout << "\n\t\t\t\t\tTo Buy any of these Cars, Visit our nearest Showroom";
        }
        else if ((fuel == "1" || fuel == "petrol") && (budg == "3" || budg == "Above 5Lakh") && (bt == "2" || bt == "Sedan"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("Skoda", "Rapid", "White", "2016", "30,000", "Rs.6.00 Lakh");
            displayCarInfo("Hyundai", "Verna", "Silver", "2018", "50,000", "Rs.7.00 Lakh");
            displayCarInfo("Honda", "City", "Brown", "2015", "74,000", "Rs.6.20 Lakh");
            cout << "\n\t\t\t\t\tTo Buy any of these Cars, Visit our nearest Showroom";
        }
        else if ((fuel == "1" || fuel == "petrol") && (budg == "1" || budg == "Under 2Lakh") && (bt == "3" || bt == "SUV"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("NA", "NA", "NA", "NA", "NA", "NA");
        }
        else if ((fuel == "1" || fuel == "petrol") && (budg == "2" || budg == "2-5Lakh") && (bt == "3" || bt == "SUV"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("NA", "NA", "NA", "NA", "NA", "NA");
        }
        else if ((fuel == "1" || fuel == "petrol") && (budg == "3" || budg == "Above 5Lakh") && (bt == "3" || bt == "SUV"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("Mahindra", "Scorpio", "White", "2015", "30,000", "Rs.6.30 Lakh");
            displayCarInfo("Hyundai", "Creta", "White", "2018", "40,000", "Rs.8.60 Lakh");
            displayCarInfo("Mahindra", "Thar", "Black", "2020", "25,000", "Rs.9.00 Lakh");
            cout << "\n\t\t\t\t\tTo Buy any of these Cars, Visit our nearest Showroom";
        }

        if ((fuel == "2" || fuel == "diesel") && (budg == "1" || budg == "Under 2lakh") && (bt == "1" || bt == "Hatchback"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("NA", "NA", "NA", "NA", "NA", "NA");
        }
        else if ((fuel == "2" || fuel == "diesel") && (budg == "2" || budg == "2-5Lakh") && (bt == "1" || bt == "Hatchback"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("Volkswagen", "Polo", "Black", "2014", "90,000", "Rs.4.35 Lakh");
            displayCarInfo("Maruti Suzuki", "Swift", "White", "2013", "80,000", "Rs.4.60 Lakh");
            displayCarInfo("Hyundai", "i20", "Silver", "2012", "1,10,000", "Rs.3.80 Lakh");
            cout << "\n\t\t\t\t\tTo Buy any of these Cars, Visit our nearest Showroom";
        }
        else if ((fuel == "2" || fuel == "diesel") && (budg == "3" || budg == "Above 5Lakh") && (bt == "1" || bt == "Hatchback"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("Maruti Suzuki", "Baleno", "Silver", "2019", "54,000", "Rs.6.70 Lakh");
            displayCarInfo("Hyundai", "Elite i20", "Red", "2019", "80,000", "Rs.7.20 Lakh");
            displayCarInfo("Tata", "Altroz", "White", "2021", "43,000", "Rs.8.20 Lakh");
            cout << "\n\t\t\t\t\tTo Buy any of these Cars, Visit our nearest Showroom";
        }
        else if ((fuel == "2" || fuel == "diesel") && (budg == "1" || budg == "Under 2Lakh") && (bt == "2" || bt == "Sedan"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("NA", "NA", "NA", "NA", "NA", "NA");
        }
        else if ((fuel == "2" || fuel == "diesel") && (budg == "2" || budg == "2-5Lakh") && (bt == "2" || bt == "Sedan"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("Maruti", "Swift Dzire", "White", "2013", "72,000", "4.45Lakh");
            displayCarInfo("Hyundai", "Verna", "White", "2013", "80,000", "4.00Lakh");
            cout << "\n\t\t\t\t\tTo Buy any of these Cars, Visit our nearest Showroom";
        }
        else if ((fuel == "2" || fuel == "diesel") && (budg == "3" || budg == "Above 5Lakh") && (bt == "2" || bt == "Sedan"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("Maruti", "Ciaz", "White", "2016", "1,20,000", "Rs.6.70 Lakh");
            displayCarInfo("Hyundai", "Verna", "Black", "2021", "48,000", "Rs.14.11 Lakh");
            displayCarInfo("Honda", "City", "Grey", "2017", "50,000", "Rs.6.66 Lakh");
            cout << "\n\t\t\t\t\tTo Buy any of these Cars, Visit our nearest Showroom";
        }
        else if ((fuel == "2" || fuel == "diesel") && (budg == "1" || budg == "Under 2Lakh") && (bt == "3" || bt == "SUV"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("NA", "NA", "NA", "NA", "NA", "NA");
        }
        else if ((fuel == "2" || fuel == "diesel") && (budg == "2" || budg == "2-5Lakh") && (bt == "3" || bt == "SUV"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("Renault", "Duster", "Silver", "2012", "1,15,000", "4.20 Lakh");
            cout << "\n\t\t\t\t\tTo Buy any of these Cars, Visit our nearest Showroom";
        }
        else if ((fuel == "2" || fuel == "diesel") && (budg == "3" || budg == "Above 5Lakh") && (bt == "3" || bt == "SUV"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("Mahindra", "Scorpio", "White", "2022", "5,000", "Rs.18.00 Lakh");
            displayCarInfo("Hyundai", "Creta", "Black", "2015", "86,000", "Rs.8.80 Lakh");
            displayCarInfo("Tata", "Safari", "White", "2021", "16,000", "Rs.21.00 Lakh");
            cout << "\n\t\t\t\t\tTo Buy any of these Cars, Visit our nearest Showroom";
        }

        if ((fuel == "3" || fuel == "cng") && (budg == "1" || budg == "Under 2lakh") && (bt == "1" || bt == "Hatchback"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("Maruti", "Zen Estilo", "Silver", "2012", "70,000", "1.90 Lakh");
            cout << "\n\t\t\t\t\tTo Buy any of these Cars, Visit our nearest Showroom";
        }
        else if ((fuel == "3" || fuel == "cng") && (budg == "2" || budg == "2-5Lakh") && (bt == "1" || bt == "Hatchback"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("Maruti", "Alto", "Blue", "2014", "80,000", "Rs.2.35 Lakh");
            displayCarInfo("Maruti", "Celerio", "White", "2015", "40,000", "Rs.4.10 Lakh");
            displayCarInfo("Maruti", "WagonR", "Silver", "2019", "60,000", "Rs.5.00 Lakh");
            cout << "\n\t\t\t\t\tTo Buy any of these Cars, Visit our nearest Showroom";
        }
        else if ((fuel == "3" || fuel == "cng") && (budg == "3" || budg == "Above 5Lakh") && (bt == "1" || bt == "Hatchback"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("Maruti", "WagonR", "Silver", "2021", "32,000", "Rs.5.90 Lakh");
            displayCarInfo("Hyundai", "Grand i10 Nios", "White", "2021", "32,000", "Rs.6.70 Lakh");
            displayCarInfo("Tata", "Tiago", "Black", "2022", "35,000", "Rs.6.90 Lakh");
            cout << "\n\t\t\t\t\tTo Buy any of these Cars, Visit our nearest Showroom";
        }
        else if ((fuel == "3" || fuel == "cng") && (budg == "1" || budg == "Under 2Lakh") && (bt == "2" || bt == "Sedan"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("NA", "NA", "NA", "NA", "NA", "NA");
        }
        else if ((fuel == "3" || fuel == "cng") && (budg == "2" || budg == "2-5Lakh") && (bt == "2" || bt == "Sedan"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("Honda", "City", "White", "2011", "1,15,000", "2.90 Lakh");
            displayCarInfo("Hyundai", "Xcent", "Red", "2015", "60,000", "4.30 Lakh");
            cout << "\n\t\t\t\t\tTo Buy any of these Cars, Visit our nearest Showroom";
        }
        else if ((fuel == "3" || fuel == "cng") && (budg == "3" || budg == "Above 5Lakh") && (bt == "2" || bt == "Sedan"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("Maruti", "Ciaz", "White", "2016", "1,05,000", "Rs.5.10 Lakh");
            displayCarInfo("Hyundai", "Aura", "White", "2021", "14,000", "Rs.7.50 Lakh");
            displayCarInfo("Maruti", "Swift Dzire", "Grey", "2021", "23,000", "Rs.6.55 Lakh");
            cout << "\n\t\t\t\t\tTo Buy any of these Cars, Visit our nearest Showroom";
        }
        else if ((fuel == "3" || fuel == "cng") && (budg == "1" || budg == "Under 2Lakh") && (bt == "3" || bt == "SUV"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("NA", "NA", "NA", "NA", "NA", "NA");
        }
        else if ((fuel == "3" || fuel == "cng") && (budg == "2" || budg == "2-5Lakh") && (bt == "3" || bt == "SUV"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("NA", "NA", "NA", "NA", "NA", "NA");
        }
        else if ((fuel == "3" || fuel == "cng") && (budg == "3" || budg == "Above 5Lakh") && (bt == "3" || bt == "SUV"))
        {
            cout << "\n\t\t\t\t\t\t\tAvailable Brands under this category :" << endl;
            displayCarInfo("Maruti", "Ertiga", "Black", "2014", "77,000", "Rs.6.00 Lakh");
            displayCarInfo("Hyundai", "Creta", "White", "2019", "86,000", "Rs.11.30 Lakh");
            displayCarInfo("Maruti", "Ertiga", "White", "2016", "34,000", "Rs.8.20 Lakh");
            cout << "\n\t\t\t\t\tTo Buy any of these Cars, Visit our nearest Showroom";
        }
    }
    break;

    default:
        break;
    }
}

void selling()
{
    string brand,model,color,year,km;
    cout << "\t\t\t\t\t\t\t      ----Enter Details of your Car----"<<endl;
    cout << "\n\t\t\t\t\t\t\t      Brand = ";
    cin >> brand;
    cout << "\n\t\t\t\t\t\t\t      Model = ";
    cin >> model;
    cout << "\n\t\t\t\t\t\t\t      Color = ";
    cin >> color;
    cout << "\n\t\t\t\t\t\t\t      Year = ";
    cin >> year;
    cout << "\n\t\t\t\t\t\t\t      Km Driven = ";
    cin >> km;
    cout << "\n\n\t\t\t\t\t\t\tWe have these Details with us..";
    cout << "\n\t\t\t\tTo get the Estimated Value of your Car, visit our Showroom and get your Car reviewed!!!!";
}

int main()
{
    int choice;
    intro();
    options();
    cout << "\t\t\t\t\t\t\t\t" << "       " << "Choice = ";
    cin >> choice;

    select(choice);
    
    if(choice == 1)
    {
        buying();
    }
    else if (choice == 2)
    {
        selling();
    }
    
    return 0;
}
