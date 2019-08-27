//Gentry Atkinson
//CS1428 Fall 2018
//Lab 9


#include <iostream>
#include <string>


using namespace std;

struct Property{
    string address;
    string city;
    float price;
    bool available;
};

void printProperty(Property item);
bool updateProperty(string address, Property properties[], int size);

int main() {
    Property properties[6];

    properties[0].address = "123 Lovely Ln";
    properties[0].city = "San Marcos";
    properties[0].price = 155000;
    properties[0].available = true;

    properties[1].address = "246 Awful Way";
    properties[1].city = "Buda";
    properties[1].price = 144.25;
    properties[1].available = true;

    properties[2].address = "135 Bigol Hill";
    properties[2].city = "Kyle";
    properties[2].price = 123888.99;
    properties[2].available = true;

    properties[3].address = "235 LBJ Court";
    properties[3].city = "San Marcos";
    properties[3].price = 200000;
    properties[3].available = true;

    properties[4].address = "1123 Van Zandt Dr";
    properties[4].city = "Austin";
    properties[4].price = 900000;
    properties[4].available = true;

    properties[5].address = "136 Triangle Pl";
    properties[5].city = "New Braunfels";
    properties[5].price = 66000;
    properties[5].available = true;

    updateProperty("1123 Van Zandt Dr", properties, 6);
    updateProperty("123 Lovely Ln", properties, 6);
    updateProperty("136 Triangle Pl", properties, 6);

    for (int i = 0; i < 6; i++){
        if (properties[i].available)
            printProperty(properties[i]);
    }

    return 0;
}

void printProperty(Property item){
    cout << "Address:\t" << item.address << endl;
    cout << "City:\t\t" << item.city << endl;
    cout << "Price:\t\t" << item.price << endl;
    cout << "Available:\t";
    if (item.available)
        cout << "true" << endl;
    else
        cout << "false" << endl;
    cout << endl;
    return;
}

bool updateProperty(string add, Property properties[], int size){
    //cout << "Updating " << add << endl;
    for(int i = 0; i < size; i++){
        if(properties[i].address.compare(add) == 0) {
            properties[i].available = false;
            //cout << properties[i].address << " removed from " << i << endl;
            return true;
        }
    }
    return false;
}
