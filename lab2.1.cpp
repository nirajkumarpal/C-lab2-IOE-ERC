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
   
    cout<<d.mm<<"/";
    cout<<d.dd<<"/";
    cout<<d.yy;
}

int main() {
   
    Date myDate;
    myDate.mm = 11;
    myDate.dd = 28;
    myDate.yy = 2004;
    printDate(myDate);

    return 0;
}
