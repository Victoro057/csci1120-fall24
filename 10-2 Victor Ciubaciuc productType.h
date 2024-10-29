#include <string> 
#include <iostream>
using namespace std;

class productType                               
{        
    private:                                        
    string productName;                         
    string id;                                  
    string manufacturer;                        
    int quantitiesInStock;                      
    double price;                               
    double discount; 

public:                                         
    productType(){


    }                             
    productType(int quant, double cost, double sale){
        quantitiesInStock = quant;
        price = cost;
        discount = sale;
    }           
    productType(string name, int quant, double cost, double sale){
        productName = name;
        quantitiesInStock = quant;
        price = cost;
        discount = sale;
    }   
    productType(string name, string ID, string maker, int quant, double cost, double sale){
        productName = name;
        id = ID;
        manufacturer = maker;
        quantitiesInStock = quant;
        price = cost;
        discount = sale;
    }           

    void set(string name, string ID, string manufact, int numInStock, double pric, double discou) {
        productName = name;
        id = ID;
        manufacturer = manufact;
        quantitiesInStock = numInStock;
        price = pric;
        discount = discou;
    }                 
    void print() const{
        cout << "Product Name: " << productName << endl;
        cout << "ID: " << id << endl;
        cout << "Manufacturer: " << manufacturer << endl;
        cout << "In Stock: " << quantitiesInStock << endl;
        cout << "Price: " << price << endl;
        cout << "Discount: " << discount << endl;
        cout << endl;
    }                         

    void setQuantitiesInStock(int x){
        quantitiesInStock = x;
    }          

    void updateQuantitiesInStock(int x){
        quantitiesInStock = x;
    }       
    int getQuantitiesInStock() const{
        return quantitiesInStock;
    }           

    void setPrice(double x){
        price = x;
    }                    
    double getPrice() const{
        return price;
    }    

    void setDiscount(double d){
        discount = d;
    }                 
    double getDiscount() const{
        return discount;
    }                                        
}; 



