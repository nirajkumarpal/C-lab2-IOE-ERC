#include <iostream>


using namespace std;

// Define the structure to hold the date
struct Date {
    int mm;
    int dd;
    int yy;
};

// Function to print the date in the desired format
void printDate(Date d) {
    // Using std::setw and std::setfill to ensure two-digit month and day with leading zeros if necessary
    cout<<d.mm<<"/";
    cout<<d.dd<<"/";
    cout<<d.yy;
}

int main() {
    // Declare a variable of type struct Date
    Date myDate;

    // Assign values to the members of the structure
    myDate.mm = 11;
    myDate.dd = 28;
    myDate.yy = 2004;

    // Print the date using the printDate function
    printDate(myDate);

    return 0;
}
