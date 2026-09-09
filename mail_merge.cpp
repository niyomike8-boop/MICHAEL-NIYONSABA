
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main()
{

    string firstName, lastName, program;
    int academicYear;


    // prpomppting the user to enter the name

    cout << "Enter your first name: ";
    cin >> firstName;


    cout << "Enter your last name: ";
    cin >> lastName;

    cin.ignore();

    cout << "Enter your study program: ";
    getline(cin, program);


    cout << "Enter your academic year: ";

    cin >> academicYear;


    // Get the current date today of present

  
time_t now = time(0);
tm *currentDate = localtime(&now);

int day = currentDate->tm_mday;
int month = currentDate->tm_mon + 1;
int year = currentDate->tm_year + 1900;


// Display the date
cout << "Date: " << day;

if (day >= 11 && day <= 13)

cout << "th";
else if (day % 10 == 1)
    cout << "st";
else if (day % 10 == 2)

cout << "nd";
else if (day % 10 == 3)
    cout << "rd";
else

cout << "th";

string months[] = {
    "January", "February", "March", "April",
    "May", "June", "July", "August",
    "September", "October", "November", "December"
}; 

cout << " " << months[month - 1] << " " << year << "\n\n";

    // Display the acceptance letter
    cout << "\n\n";



    cout << "To: " << firstName << " " << lastName << ",\n\n";

    cout << "Dear " << firstName << ",\n\n";


    cout << "CONGRATULATIONS! I am pleased to inform you that the "
         << "Makerere University\n";

    cout << "Admissions Board has approved your application for admission "
    
    << "to the\n";

    cout << academicYear << "/" << academicYear + 1
         << " academic year.\n\n";


    cout << "You have been offered a place for the following course:\n\n";

    cout << "PROGRAM: " << program << "\n\n";

    cout << "As a student of Makerere University, you will be part of a "
         << "historic\n";

    cout << "institution dedicated to academic excellence and innovation. "
         << "Please ensure\n";

    cout << "that you report to the Academic Registrar's office with your "
         << "original\n";

    cout << "academic documents for verification during the orientation "
         << "week.\n\n";

    cout << "We look forward to welcoming you to the Makerere University.\n\n";

    cout << "Yours sincerely,\n\n\n";

    cout << "John Doe\n";
    cout << "Registra\n";

    return 0;
}