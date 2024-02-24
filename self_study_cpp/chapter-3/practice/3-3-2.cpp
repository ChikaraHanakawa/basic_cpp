#include <iostream>

class Book{
    std::string title;
    std::string writer;
    int price;

    public:
        Book(std::string title, std::string writer, int price);
        std::string get_title() const;
        std::string get_writer() const;
        int get_price() const;
        Book(const Book& eleven);
};

Book::Book(std::string title, std::string writer, int price){
    this->title = title;
    this->writer = writer;
    this->price = price;
}

Book::Book(const Book& eleven){
    std::cout << "Copy constructor called" << std::endl;
    this->title = eleven.title;
    this->writer = eleven.writer;
    this->price = eleven.price;
}
std::string Book::get_title() const{
    return title;
}
std::string Book::get_writer() const{
    return writer;
}
int Book::get_price() const{
    return price;
}

int main(){
    Book b("title", "writer", 300);
    std::cout << b.get_title() << std::endl;
    std::cout << b.get_writer() << std::endl;
    std::cout << b.get_price() << std::endl;
    Book copy(b);
    std::cout << copy.get_title() << std::endl;
    std::cout << copy.get_writer() << std::endl;
    std::cout << copy.get_price() << std::endl;
}