#include <iostream>
#include <string>

class Book {
private:
    std::string title;
    std::string author;
public:
    Book(const std::string& t, const std::string& a) : title(t), author(a) {}
    void display() const {
        std::cout << "Book Details: Title: " << title << ", Author: " << author << std::endl;
    }
};

int main() {
    Book* ptr = new Book("Harry Potter", "J.K. Rowling");
    ptr->display();
    delete ptr;
    return 0;
}

