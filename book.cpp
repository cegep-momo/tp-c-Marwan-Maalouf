#include <iostream>
#include <sstream>
#include <algorithm>

#include "book.h"

using namespace std;
//constructors
Book::Book(): title(""), author(""), isbn(""), isAvailable(false), borrowerName(""){}
Book::Book(const string& title, const string& author, const string& isbn)
    : title(title), author(author), isbn(isbn) {}

//getters
string Book::getTitle() const {return title;}
string Book::getAuthor() const {return author;}
string Book::getISBN() const {return isbn;}
bool Book::getAvailability() const {return isAvailable;}
string Book::getBorrowerName() const {return borrowerName;}

//setters
void Book::setTitle(const string& title) {this->title = title;}
void Book::setAuthor(const string& author) {this->author = author;}
void Book::setISBN(const string& isbn) {this->isbn = isbn;}
void Book::setAvailability(bool isAvailable) {this->isAvailable = isAvailable;}
void Book::setBorrowerName(const string& borrowerName) {this->borrowerName = borrowerName;}

//checkOut
void Book::checkOut(const string& borrower) {
    if (isAvailable)
    {
        isAvailable = false;
        borrowerName = borrower;
    } else {
        cout << "Book unavailable: already taken"<<endl;
    }
    
}

//returnBook
void Book::returnBook(){
    isAvailable = true;
    borrowerName = "";
}

//toSring
string Book::toString() const {
    string stringPattern = "\nTitre: " + title + "\nAuteur(e): " + author + "\nISBN: " + isbn + "\nDisponible: " + (isAvailable ? "Oui" : "Non") + (isAvailable ? "": ("Nom de l'emprunteur: " + borrowerName));

}

//toFileFormat
string Book::toFileFormat() const {
    string stringPattern = title + "|" + author + "|" + isbn + "|" + (isAvailable ? "1" : "0") + (isAvailable ? "": ("|" + borrowerName));
}

//fromFileFormat
void Book::fromFileFormat(const string& line){
    stringstream ss(line);
    string isAvailableStr;

    getline(ss, title, '|');
    getline(ss, author, '|');
    getline(ss, isbn, '|');
    getline(ss, isAvailableStr, '|');
    getline(ss, borrowerName, '|');

isAvailable = (isAvailableStr == "1");
}