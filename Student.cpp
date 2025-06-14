#include <string>
#include "Book.h"
#include <vector>
#include "User.h"
#include "Student.h"
#include <iostream>

using namespace std;

Student::Student(string name, string userId):User(name, userId){}

bool Student::borrowBook(Book& book) {
    if (book.isBookAvailable()) {
        if (borrowedBooks.size() < maxBooks) {
            book.borrowBook();
            borrowedBooks.push_back(&book);
            return true;
        } 
        else {
            cout << "You have already borrowed " << maxBooks << " books." << endl;
        }
    } else {
        cout << "'" << book.getTitle() << "' is not available." << endl;
    }
    return false;
}

void Student::displayUserInfo() const{
    cout << "User Name: " << name << endl;
    cout << "UserId: " << userId << endl;
    cout << "Books Borrowed: " << borrowedBooks.size() << endl;
    if (borrowedBooks.size() > 0){
        for (int i=0; i<borrowedBooks.size(); i++){
            cout << "Book " << i+1 << endl;
            borrowedBooks[i]->displayDetails();
        }
    }
}

bool Student::returnBook(Book& book){
    if (!book.isBookAvailable()){
        book.returnBook();
        for (int i=0; i<borrowedBooks.size(); i++){
            if (borrowedBooks[i] == &book){
                // cout << "'" << book.getTitle() << "' returned successfully" << endl;
                borrowedBooks.erase(borrowedBooks.begin() + i);
                return true;
                break;
            }
        }
    }
    else{
        cout << "'" << book.getTitle() << "' is already returned or not yet borrowed" << endl;
        return false;
    }
    cout << "'" << book.getTitle() << "' is not borrowed by you.";
    return false;
}