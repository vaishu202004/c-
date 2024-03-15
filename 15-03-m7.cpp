#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    int pages;
public:
    Book(string t, string a, int p) : title(t), author(a), pages(p) {}
    bool operator==(const Book& other) {
        return title == other.title;
    }
    bool operator!=(const Book& other) {
        return title != other.title;
    }
};

int main() {
    Book book1("Title1", "Author1", 200);
    Book book2("Title2", "Author2", 250);
    cout << "Book comparison: " << (book1 == book2 ? "Equal" : "Not Equal") << endl;
    return 0;
}

