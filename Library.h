#ifndef LIBRARY_H
#define LIBRARY_H

#include <vector>
#include "Book.h"
#include "Member.h"

class Library{
    private:
        std::vector<Book> books;
        std::vector<Member> members;
    public:
        void addBook(const Book& newBook);
        void registerMember(const Member& newMember);

        void loanBook(int bookID, int memberID);
        void returnBook(int bookID, int memberID);
        void searchByTitle(std::string title) const;

        void displayInventory() const;

};

#endif