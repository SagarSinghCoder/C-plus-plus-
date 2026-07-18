#include <iostream> 
using namespace std; 
 
class Date { 
public: 
    int day, month, year; 

    void inputDate(string label) { 
        cout << "Enter " << label << " (DD MM YYYY): "; 
        cin >> day >> month >> year; 
    } 
 
    bool operator < (Date d) { 
        if (year != d.year) return year < d.year; 
        if (month != d.month) return month < d.month; 
        return day < d.day; 
    } 
 
    int calculateAge(Date current) { 
        int age = current.year - year; 
 
        if (current.month < month || (current.month == month && current.day < day)) { 
            age--; 
        } 
 
        return age; 
    } 
}; 
 
int main() { 
    Date dob, current; 

    dob.inputDate("Date of Birth"); 
     
    current.inputDate("Current Date"); 
 
    if (current < dob) { 
        cout << "Error: Date of Birth is after Current Date.\n"; 
        return 0; 
    } 
 
    int age = dob.calculateAge(current); 
    cout << "Current Age is: " << age << " years" << endl; 
 
    return 0;
}