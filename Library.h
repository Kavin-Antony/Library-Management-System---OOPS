#pragma once
#include <string>
#include <vector>
#include <Book.h>
#include <User.h>

using namespace std;

class Library{
    private:
        vector<Book> books;
        vector<User*> users;

    public:
        void addBook(Book book);
        void addUser(User* user);
        Book* searchBookISBN(string isbn);
        User* searchUserById(string userId);
        void issueBook(string userId, string isbn);
        void returnBook(string userId, string isbn);
        void displayAllBooks();
        void displayAllUsers();
};