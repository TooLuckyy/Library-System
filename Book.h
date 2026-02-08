#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book{
    private:
        std::string title;
        std::string author;
        int bookID;
        bool avalible;
    public:
        Book(std::string t, std::string a, int i);
        std::string getAuthor() const;
        std::string getTitle() const;
        int getBookID() const;
        bool isAvalible() const;
        void displayInfo() const;
        void setAvalible(bool status);
};

#endif