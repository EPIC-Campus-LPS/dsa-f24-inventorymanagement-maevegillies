#include <iostream>
#include <string>
#include <vector>
using namespace std;




class Item {
    private:
        string name;
        int quantity;
        double price;
    public:
        //constructor
        Item(string n, int q, double p) : name(n), quantity(q), price(p) {}

        void displayItem() {
            cout << name << quantity << price;
            //displays items
        }

        void addItem(int amount) {

            quantity = quantity + amount;
            //increase quantity
        }

        void removeItem(int amount) {
            
            quantity = quantity - amount;
            //decrease quantity
        }

        double calculateTotalValue() {
            return quantity * price;
        }
}


class Inventory {
    private:
        int itemCount = 0;
        vector<Item>items(64);

    public:
        //inventory
        itemCount = 0;

        void addItem(const Item& newItem) {
            //add a new item to inventory
            if (itemCount < 64) {
                itemCount = items.push_back(newItem);
            }
            
        }

        void removeItem(const string& itemName) {
            //remove item from inventory by name
            if (itemCount > 0) {
                for (int i = items.size() - 1; i > -1; i = i - 1) {
                //for loop to subtract, format vector to subtract from the end
                    itemCount = items.begin() + [64];
                }
            else {
                std::cout << "Invalid :(";
            }
            }
        }
    
        void displayInventory() {
            //print details of all items in the inventory
            //displays each item in the inventory
            for (int i = 0; i < items.size(); i = i + 1) {
                items.at(i).displayItems();
            }
        
        //create name method to call the name of the item
            
            


    Item* findItem(const string& itemName) {
        //finds an item by name, if cant find name - null
        if () {
        //finds an item by name

        }

        else {
        //can't find name
            std::cout << "null :(";
        }
    }

}
}

int main() {
    //con
    inventory Inventory("food", 3, 21);
    Inventory.displayInventory();

    std::cout << "Add or subtract from inventory"
    //displayInventory
    //ask user to add or subtract
    //if user asks to add, method addItem
    //if user asks to subtract, method removeItem
    //else, invalid input



}