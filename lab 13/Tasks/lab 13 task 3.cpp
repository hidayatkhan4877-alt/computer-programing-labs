#include <iostream>   // input/output library
using namespace std;  // standard namespace

// Book structure define kar rahe hain
struct Book {

    string title;   // book ka title
    string author;  // book ka author
    float price;    // book ki price
    int pages;      // pages ki total number
};

int main() {

    // book1 object banaya aur values di
    Book book1 = {"C++ Basics", "John Smith", 500.50, 300};

    // book2 object banaya aur values di
    Book book2 = {"Data Structures", "Mark Lee", 750.00, 450};

    // book1 ka output start
    cout << "Book 1 Details:" << endl;

    // book1 ka title print
    cout << "Title: " << book1.title << endl;

    // book1 ka author print
    cout << "Author: " << book1.author << endl;

    // book1 ki price print
    cout << "Price: " << book1.price << endl;

    // book1 ke pages print
    cout << "Pages: " << book1.pages << endl;

    cout << "------------------------" << endl; // separator line

    // book2 ka output start
    cout << "Book 2 Details:" << endl;

    // book2 ka title print
    cout << "Title: " << book2.title << endl;

    // book2 ka author print
    cout << "Author: " << book2.author << endl;

    // book2 ki price print
    cout << "Price: " << book2.price << endl;

    // book2 ke pages print
    cout << "Pages: " << book2.pages << endl;

    return 0; // program end
}