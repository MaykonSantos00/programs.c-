#include <string>
#include <iostream>
using namespace std;

class Invoice
{
    private:
        string identifier;
        string description;
        int quantities;
        int price;

    public:
        Invoice(string identifier, string description, int quantities, int price)
        {
            setIdentifier(identifier);
            setDescription(description);
            setQuantities(quantities);
            setPrice(price);
        }

        int getInvoiceAmount()
        {
            return this->quantities * this->price;
        }

        void setIdentifier(string identifier)
        {
            this->identifier = identifier;
        }

        string getIdentifier()
        {
            return this->identifier;
        }

        void setDescription(string description)
        {
            this->description = description;
        }

        string getDescription()
        {
            return this->description;
        }

        void setQuantities(int quantities)
        {
            this->quantities = quantities;
        }

        int getQuantities()
        {
            return this->quantities;
        }

        void setPrice(int price)
        {
            this->price = price;
        }

        int getPrice()
        {
            return this->price;
        }


};