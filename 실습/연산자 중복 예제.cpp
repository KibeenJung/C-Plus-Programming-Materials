/******************************************************************************

Book 클래스 다음을 구현

1) +=, -= 연산자 구현
2) == 연산자 구현
3) <, > 연산자 구현
4) ! 연산자 구현
5) +, - 연산자 구현
6) [] 연산자 구현

출력 :
청춘 20500원 300페이지
미래 29500원 500페이지
정   30000원
명품 C++입니다
고품 C++이 사전상 더 앞에 있다
고품 C++이 사 상 더 앞에 있다
공짜다
tempast 1원 50페이지
tempast 1원 50페이지
tempast 2원 50페이지
tempast 502원 50페이지
tempast 402원 50페이지
aempast 402원 50페이지

*******************************************************************************/
#include <iostream>

using namespace std;


class Book
{
    string title;
    int price;
    int pages;
public:
    Book() {}
    Book(string title, int price, int pages)
    {
        this->title = title;
        this->price = price;
        this->pages = pages;
    }
    
    Book(Book& book) 
    {
        title = book.title;
        price = book.price;
        pages = book.pages;
    }
    
    void setPrice(int price) { this->price = price; }
    int getPrice() { return price; }
    
    inline string getTitle() { return title; }
    void show() 
    {
        cout << title << ' ' << price << "원 " << pages << "페이지" << endl;
    }

/*
    Book operator+=(int price)
    {
        this->price += price;
        return *this;
    }
    
    Book operator-=(int price)
    {
        this->price -= price;
        return *this;
    }
    
    bool operator==(int price)
    {
        return this->price == price;
    }
    
    bool operator==(string title)
    {
        return this->title == title;
    }
    
    bool operator==(Book& book)
    {
        return (this->title == book.title) && (this->price == book.price) && (this->pages == book.pages);
    }
    
    bool operator<(Book& book)
    {
        return title < book.title;
    }
    
        bool operator>(Book& book)
    {
        return title > book.title;
    }
    
    bool operator!()
    {
        return !price;
    }
    
    Book operator++()
    {
        price++;
        return *this;
    }
    
    Book operator++(int x)
    {
        Book temp = *this;
        price++;
        return temp;
    }
    
    Book operator+(int price)
    {
        Book temp(*this);
        temp.setPrice(temp.getPrice() + price);
        return temp;
    }
    
    Book operator-(int price)
    {
        Book temp(*this);
        temp.setPrice(temp.getPrice() - price);
        return temp;
    }
    
    char& operator[](int index)
    {
        return title[index];
    }
*/
};

int main()
{
    Book a("청춘", 20000, 300);
    Book b("미래", 30000, 500);
    
    a += 500;
    b -= 500;
    
    a.show();
    b.show();
    
    Book c("명품 C++", 30000,  500), d("고품 C++", 30000,  500);
    if (c == 30000)
    {
        cout << "정가 30000원" << endl;
    }
    if (c == "명품 C++")
    {
        cout << "명품 C++입니다" << endl;
    }
    if (c == d)
    {
        cout << "두 책이 같습니다" << endl;
    }
    if (c < d)
    {
        cout << c.getTitle() << "이 사전상 더 앞에 있다" << endl;
    }
    else
    {
        cout << d.getTitle() << "이 사전상 더 앞에 있다" << endl;
    }
    
    if (c > d)
    {
        cout << d.getTitle() << "이 사전상 더 앞에 있다" << endl;
    }
    else
    {
        cout << c.getTitle() << "이 사전상 더 앞에 있다" << endl;
    }
    
    
    Book e("tempast", 0, 50);
    if (!e)
    {
        cout << "공짜다" << endl;
    }
    
    ++e;
    e.show();
    (e++).show();
    e.show();

    Book f;
    f = e + 500;
    f.show();
    
    Book g;
    g = f - 100;
    g.show();
    
    g[0] = 'a';
    g.show();

    return 0;
}
