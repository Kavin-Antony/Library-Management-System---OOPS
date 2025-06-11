#include "Book.h"
#include <iostream>

int main(){
    Book myBook("The Great Adventure", "John Doe", "987-3625547254");

    myBook.borrowBook();
    myBook.borrowBook();
    myBook.displayDetails();
    cout << myBook.isBookAvailable() << endl;
    myBook.returnBook();
    myBook.returnBook();
    cout << myBook.getISBN() << endl;
    cout << myBook.getTitle() << endl;
    cout << myBook.isBookAvailable() << endl;
}