#include <iostream>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;
public:
    Date() : day(1), month(1), year(2000) {}
    friend ostream& operator<<(ostream& os, const Date& dt);
    friend istream& operator>>(istream& is, Date& dt);
};

ostream& operator<<(ostream& os, const Date& dt) {
    os << dt.day << '/' << dt.month << '/' << dt.year;
    return os;
}

istream& operator>>(istream& is, Date& dt) {
    is >> dt.day >> dt.month >> dt.year;
    return is;
}

int main() {
    Date date;
    cout << "Enter a date (day month year): ";
    cin >> date;
    cout << "Date entered: " << date << endl;
    return 0;
}

