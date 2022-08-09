#include <iostream>

using namespace std;

class Book {
    private:
        string title;
        string author;
        int pages;
    
    public:
        Book(string aTitle, string aAuthor, int aPages){
            cout << "Creating \"" << aTitle << "\" book object" << endl;
            title = aTitle;
            author = aAuthor;
            setPages(aPages);
        }
        Book(){
            cout << "Book object created" << endl;
            title = "No title";
        }
        
        bool isLong(){
            if(pages >= 500){
                return true;
            }
            return false;
         }
        
        void setPages(int aPages){
            if(aPages > 0){
                pages = aPages;
            }
            else{
                pages = 0;
            }
        }
        
        int getPages(){
            return pages;
        }
};

// Inheritance
class Journal : public Book{
    private:
        string doi;
    public:
        void setDoi(string aDoi){
            doi = aDoi;
        }

        string getDoi(){
            return doi;
        }
};

int main(){
    Book book1("Harry Potter", "J.K. Rowling", 326);
    //The next line does not work because the attribute access is private
    //cout << book1.author << endl;

    Book book2("Lord of the Rings", "Talkien", 700);
    //cout << book2.author << endl;
    
    Book book3("The Catcher in the Rye", "J. D. Salinger", -1);

    cout << book1.isLong() << endl;
    cout << book2.isLong() << endl;
    cout << book3.getPages() << endl;

    Journal journal;
    journal.setDoi("abcde");
    cout <<  journal.getPages() << endl;
    cout <<  journal.getDoi() << endl;
    return 0;
}