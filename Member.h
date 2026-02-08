#ifndef MEMBER_H
#define MEMBER_H

#include <string>
#include <vector>

class Member{
    private:
        std::string name;
        int memberID;
        std::vector<int> borrowedBookIDs;
    public:
        Member(std::string n, int id);

        std::string getName() const;
        int getMemberID() const;

        const std::vector<int>& getBorrowedBooks() const;

        void borrowBook(int bookID);
        void returnBook(int bookID);
        void displayMemeberInfo() const;
};

#endif