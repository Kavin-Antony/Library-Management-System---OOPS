#pragma once
#include <string>
#include <vector>
#include <Book.h>
#include <User.h>

using namespace std;

class Teacher : public User{
    private:
        const int maxBooks = 5;
    
    public:
        void displayUserInfo() override;
        void borrowBook(Book& book) override;
        void returnBook(Book& book) override;
};