#pragma once
#include <string>
#include <Book.h>
#include <vector>

using namespace std;

class User{
    private:
        string name;
        string userId;
        vector<string> borrowBooks;
    
    public:
        virtual void displayUserInfo() = 0;
        virtual void borrowBook(Book& book) = 0;
        virtual void returnBook(Book& book) = 0;
        string getUserId();
};