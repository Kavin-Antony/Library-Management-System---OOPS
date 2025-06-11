#pragma once
#include <User.h>
#include <vector>
#include <string>
#include <Book.h>

class Student : public User{
    private:
        const int maxBooks = 3;

    public:
        void displayUserInfo() override;
        void borrowBook(Book& book) override;
        void returnBook(Book& book) override;
};