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
};

Book::Book(std::string title, std::string writer, int price){
    this->title = title;
    this->writer = writer;
    this->price = price;
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
}