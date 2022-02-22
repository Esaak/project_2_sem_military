/*#include <iostream>
#include <vector>

int main() {
    int number_military, b,c, x, y;
    char direction;
    std:: vector <light_tank*> light_tank_vector;
    std:: vector <medium_tank*> medium_tank_vector;
    std:: vector <heavy_tank*> heavy_tank_vector;
    std:: vector <aircraft_carrier*> aircraft_carrier_vector;
    std:: vector <attack_aircraft*> attack_aircraft_vector;
    std:: vector <boat*> boat_vector;
    std:: vector <destroyer*> destroyer_vector;
    std:: vector <fighter_aircraft*> fighter_aircraft_vector;
    std:: vector <bomber_aircraft*> bomber_aircraft_vector;

    std:: cout<<"Введите количество единиц вооружения: ";
    std:: cin>>number_military;
    std:: cout<<"\n";

    std::cout<<"Введите количество авианосцев: ";
    std::cin>>c;
    aircraft_carrier_vector.resize(c);
    for(int i2=0; i2<c; i2++) {
        std::cout<<" \n Введите координаты и направление: ";
        std::cin>>x>>y>>direction;
        aircraft_carrier_vector[i2] = new aircraft_carrier(x,y,direction);
    }
    std::cout<<" \n Введите количество эсминцев: ";
    std::cin>>c;
    destroyer_vector.resize(c);
    for(int i2=0; i2<c; i2++) {
        std::cout<<"\n Введите координаты и направление: ";
        std::cin>>x>>y>>direction;
        destroyer_vector[i2] = new destroyer(x, y, direction);
    }
    std:: cout<<"\n Введите количество катеров: ";
    std:: cin>>c;
    boat_vector.resize(c);
    for(int i2=0; i2<c; i2++) {
        std::cout<<"\n Введите координаты: ";
        std::cin>>x>>y;
        boat_vector[i2]=new boat(x,y);
    }

    std::cout<<"\n Введите количество тяжелых танков: ";
    std::cin>>c;
    heavy_tank_vector.resize(c);
    for(int i2=0; i2<c; i2++) {
        std::cout<<"\n Введите координаты: ";
        std::cin>>x>>y;
        heavy_tank_vector[i2] = new heavy_tank(x,y);
    }
    std::cout<<"\n Введите количество средних танков: ";
    std::cin>>c;
    medium_tank_vector.resize(c);
    for(int i2=0; i2<c; i2++ ){
        std::cout<<"\n Введите координаты: ";
        std::cin>>x>>y;
        medium_tank_vector[i2] = new medium_tank(x,y);
    }
    std:: cout<<"\n Введите количество легких танков: ";
    std:: cin>>c;
    light_tank_vector.resize(c);
    for(int i2=0; i2<c; i2++) {
        std::cout<<"\n Введите координаты: ";
        std::cin>>x>>y;
        light_tank_vector[i2] = new light_tank(x,y);
    }
    std::cout<<"\n Введите количество истребителей: ";
    std::cin>>c;
    fighter_aircraft_vector.resize(c);
    for(int i2=0; i2<c; i2++) {
        std::cout<<"\n Введите координаты: ";
        std::cin>>x>>y;
        fighter_aircraft_vector[i2] = new fighter_aircraft(x,y);
    }
    std::cout<<"\n Введите количество штурмовиков: ";
    std::cin>>c;
    attack_aircraft_vector.resize(c);
    for(int i2=0; i2<c; i2++) {
        std::cout<<"\n Введите координаты: ";
        std::cin>>x>>y;
        attack_aircraft_vector[i2] = new attack_aircraft(x,y);
    }
    std:: cout<<"\n Введите количество бомбардировщиков: ";
    std:: cin>>c;
    bomber_aircraft_vector.resize(c);
    for(int i2=0; i2<c; i2++) {
        std::cout<<"\n Введите координаты: ";
        std::cin>>x>>y;
        bomber_aircraft_vector[i2] = new bomber_aircraft(x,y);
    }*/