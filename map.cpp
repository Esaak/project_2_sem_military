//
// Created by derev on 16.02.2022.
//


#include "Gameworld.h"
#include "GameTile.h"
#include "military.h"
#include "aircraft_carrier.h"
#include "attack_aircraft.h"
#include "bomber_aircraft.h"
#include "destroyer.h"
#include "fighter_aircraft.h"
#include "heavy_tank.h"
#include "light_tank.h"
#include "medium_tank.h"
#include "boat.h"



using std::cout;
using std::endl;






int main() {
    // create the window
    //cout << "Select and type the unit from this list: " << endl; // the type of unit is chosen at this point
    //int n;
    //std::cin >> n; // the amount of unit the player want to set



    int number_military, number_aircraft_carrier, number_attack_aircraft, number_boat, number_bomber_aircraft,
    number_destroyer,number_fighter_aircraft, number_heavy_tank, number_light_tank, number_medium_tank, x, y, schet=0;
    char direction;
    std::pair<int,int>temp;
    int j=0;
    Gameworld *gameworld = new Gameworld[15];
    std:: vector <light_tank*> light_tank_vector;
    std:: vector <medium_tank*> medium_tank_vector;
    std:: vector <heavy_tank*> heavy_tank_vector;
    std:: vector <aircraft_carrier*> aircraft_carrier_vector;
    std:: vector <attack_aircraft*> attack_aircraft_vector;
    std:: vector <boat*> boat_vector;
    std:: vector <destroyer*> destroyer_vector;
    std:: vector <fighter_aircraft*> fighter_aircraft_vector;
    std:: vector <bomber_aircraft*> bomber_aircraft_vector;

    //std:: vector<military*>military_vector;
    std:: cout<<"Enter the number of military: ";
    std:: cin>>number_military;
    std:: cout<<"\n";

    std::cout<<"Enter the number of aircraft_carrier: ";
    std::cin>>number_aircraft_carrier;
    aircraft_carrier_vector.resize(number_aircraft_carrier);
    for(int i2=0; i2<number_aircraft_carrier; i2++) {
        std::cout<<" \n Enter coordinates and direction: ";
        std::cin>>x>>y>>direction;
        aircraft_carrier_vector[i2] = new aircraft_carrier(x,y,direction);
        temp = aircraft_carrier_vector[i2]->get_coordinates();
        gameworld[j].set(temp.first, temp.second, aircraft_carrier_vector[i2]->get_link()); // the name of fileName depends on the chosen unit
        gameworld[j].setUpInitialStateinsert();
        j++;
    }

    std::cout<<" \n Enter the number of destroyer: ";
    std::cin>>number_destroyer;
    destroyer_vector.resize(number_destroyer);
    for(int i2=0; i2<number_destroyer; i2++) {
        std::cout<<"\n Enter coordinates and direction: ";
        std::cin>>x>>y>>direction;
        destroyer_vector[i2] = new destroyer(x, y, direction);
        temp = destroyer_vector[i2]->get_coordinates();
        gameworld[j].set(temp.first, temp.second, destroyer_vector[i2]->get_link()); // the name of fileName depends on the chosen unit
        gameworld[j].setUpInitialStateinsert();
        j++;
        //std::string qw = destroyer_vector[i2]->get_link();
        //std::cout<<qw<<'\t'<<temp.first<<'\n';

    }

    std:: cout<<"\n Enter the number of boat: ";
    std:: cin>>number_boat;
    boat_vector.resize(number_boat);
    for(int i2=0; i2<number_boat; i2++) {
        std::cout<<"\n Enter coordinates: ";
        std::cin>>x>>y;
        boat_vector[i2]=new boat(x,y);
        temp = boat_vector[i2]->get_coordinates();
        gameworld[j].set(temp.first, temp.second, boat_vector[i2]->get_link()); // the name of fileName depends on the chosen unit
        gameworld[j].setUpInitialStateinsert();
        j++;
    }

    std::cout<<"\n Enter the number of heavy tank: ";
    std::cin>>number_heavy_tank;
    heavy_tank_vector.resize(number_heavy_tank);
    for(int i2=0; i2<number_heavy_tank; i2++) {
        std::cout<<"\n Enter coordinates: ";
        std::cin>>x>>y;
        heavy_tank_vector[i2] = new heavy_tank(x,y);
        temp = heavy_tank_vector[i2]->get_coordinates();
        gameworld[j].set(temp.first, temp.second, heavy_tank_vector[i2]->get_link()); // the name of fileName depends on the chosen unit
        gameworld[j].setUpInitialStateinsert();
        j ++;
    }

    std::cout<<"\n Enter the number of medium tank: ";
    std::cin>>number_medium_tank;
    medium_tank_vector.resize(number_medium_tank);
    for(int i2=0; i2<number_medium_tank; i2++ ){
        std::cout<<"\n Enter coordinates: ";
        std::cin>>x>>y;
        medium_tank_vector[i2] = new medium_tank(x,y);
        temp = medium_tank_vector[i2]->get_coordinates();
        gameworld[j].set(temp.first, temp.second, medium_tank_vector[i2]->get_link()); // the name of fileName depends on the chosen unit
        gameworld[j].setUpInitialStateinsert();
        j++;
    }

    std:: cout<<"\n Enter the number of light tank: ";
    std:: cin>>number_light_tank;
    light_tank_vector.resize(number_light_tank);
    for(int i2=0; i2<number_light_tank; i2++) {
        std::cout<<"\n Enter coordinates: ";
        std::cin>>x>>y;
        light_tank_vector[i2] = new light_tank(x,y);
        temp = light_tank_vector[i2]->get_coordinates();
        gameworld[j].set(temp.first, temp.second, light_tank_vector[i2]->get_link()); // the name of fileName depends on the chosen unit
        gameworld[j].setUpInitialStateinsert();
        j++;
    }

    std::cout<<"\n Enter the number of attack aircraft: ";
    std::cin>>number_attack_aircraft;
    attack_aircraft_vector.resize(number_attack_aircraft);
    for(int i2=0; i2<number_attack_aircraft; i2++) {
        std::cout<<"\n Enter coordinates: ";
        std::cin>>x>>y;
        attack_aircraft_vector[i2] = new attack_aircraft(x,y);
        temp = attack_aircraft_vector[i2]->get_coordinates();
        gameworld[j].set(temp.first, temp.second, attack_aircraft_vector[i2]->get_link()); // the name of fileName depends on the chosen unit
        gameworld[j].setUpInitialStateinsert();
        j++;
    }
    std::cout<<"\n Enter the number of fighter aircraft: ";
    std::cin>>number_fighter_aircraft;
    fighter_aircraft_vector.resize(number_fighter_aircraft);
    for(int i2=0; i2<number_fighter_aircraft; i2++) {
        std::cout<<"\n Enter coordinates: ";
        std::cin>>x>>y;

        fighter_aircraft_vector[i2] = new fighter_aircraft(x,y);
        temp = fighter_aircraft_vector[i2]->get_coordinates();
        gameworld[j].set(temp.first, temp.second, fighter_aircraft_vector[i2]->get_link()); // the name of fileName depends on the chosen unit
        gameworld[j].setUpInitialStateinsert();
        j++;
    }
    std:: cout<<"\n Enter the number of bomber aircraft: ";
    std:: cin>>number_bomber_aircraft;
    bomber_aircraft_vector.resize(number_bomber_aircraft);
    for(int i2=0; i2<number_bomber_aircraft; i2++) {
        std::cout<<"\n Enter coordinates: ";
        std::cin>>x>>y;
        bomber_aircraft_vector[i2] = new bomber_aircraft(x,y);
        temp = bomber_aircraft_vector[i2]->get_coordinates();
        gameworld[j].set(temp.first, temp.second, bomber_aircraft_vector[i2]->get_link()); // the name of fileName depends on the chosen unit
        gameworld[j].setUpInitialStateinsert();
        j++;
    }


    int rows[15], columns[15];


    /*int temp_iterator=0;
    for (int i = 0; i < number_military; i++) {
        // also the type of unit should be enterd here
        if(i<number_aircraft_carrier){
            temp = aircraft_carrier_vector[i]->get_coordinates();
            gameworld[i].set(temp.first, temp.second, aircraft_carrier_vector[i]->get_link()); // the name of fileName depends on the chosen unit
            gameworld[i].setUpInitialStateinsert();
            continue;
        }

        if(temp_iterator<number_destroyer){
            temp = destroyer_vector[temp_iterator]->get_coordinates();
            gameworld[i].set(temp.first, temp.second, destroyer_vector[temp_iterator]->get_link()); // the name of fileName depends on the chosen unit
            gameworld[i].setUpInitialStateinsert();
            temp_iterator++;
            continue;
        }
        temp_iterator=0;
        if(temp_iterator<number_boat){
            temp = boat_vector[temp_iterator]->get_coordinates();
            gameworld[i].set(temp.first, temp.second, boat_vector[temp_iterator]->get_link()); // the name of fileName depends on the chosen unit
            gameworld[i].setUpInitialStateinsert();
            temp_iterator++;
            continue;
        }
        temp_iterator=0;
        if(temp_iterator<number_heavy_tank){
            temp = heavy_tank_vector[temp_iterator]->get_coordinates();
            gameworld[i].set(temp.first, temp.second, heavy_tank_vector[temp_iterator]->get_link()); // the name of fileName depends on the chosen unit
            gameworld[i].setUpInitialStateinsert();
            temp_iterator++;
            continue;
        }
        temp_iterator=0;
        if(temp_iterator<number_medium_tank){
            temp = medium_tank_vector[temp_iterator]->get_coordinates();
            gameworld[i].set(temp.first, temp.second, medium_tank_vector[temp_iterator]->get_link()); // the name of fileName depends on the chosen unit
            gameworld[i].setUpInitialStateinsert();
            temp_iterator++;
            continue;
        }
        temp_iterator=0;
        if(temp_iterator<number_light_tank){
            temp = light_tank_vector[temp_iterator]->get_coordinates();
            gameworld[i].set(temp.first, temp.second, light_tank_vector[temp_iterator]->get_link()); // the name of fileName depends on the chosen unit
            gameworld[i].setUpInitialStateinsert();
            temp_iterator++;
            continue;
        }
        temp_iterator=0;
        if(temp_iterator<number_attack_aircraft){
            temp = attack_aircraft_vector[temp_iterator]->get_coordinates();
            gameworld[i].set(temp.first, temp.second, attack_aircraft_vector[temp_iterator]->get_link()); // the name of fileName depends on the chosen unit
            gameworld[i].setUpInitialStateinsert();
            temp_iterator++;
            continue;
        }
        temp_iterator=0;
        if(temp_iterator<number_fighter_aircraft){
            temp = fighter_aircraft_vector[temp_iterator]->get_coordinates();
            gameworld[i].set(temp.first, temp.second, fighter_aircraft_vector[temp_iterator]->get_link()); // the name of fileName depends on the chosen unit
            gameworld[i].setUpInitialStateinsert();
            temp_iterator++;
            continue;
        }
        temp_iterator = 0;
        if(temp_iterator<number_bomber_aircraft){
            temp = bomber_aircraft_vector[temp_iterator]->get_coordinates();
            gameworld[i].set(temp.first, temp.second, bomber_aircraft_vector[temp_iterator]->get_link()); // the name of fileName depends on the chosen unit
            gameworld[i].setUpInitialStateinsert();
            temp_iterator++;
            continue;
        }

        //gameworld[i].set(x[i], y[i], "../picture/torpedo1.png"); // the name of fileName depends on the chosen unit
        //gameworld[i].setUpInitialStateinsert();
    }*/
    Gameworld basic = Gameworld();
    basic.setUpInitialStatebasic();


    sf::RenderWindow window(sf::VideoMode(1024, 1024), "Tilemap");
    //std::cout << "haha";
    // run the main loop
    while (window.isOpen()) {
        // handle events
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // draw the map
        window.clear();
        for (int i = 0; i < 8; i++) {
            for (int j1 = 0; j1 < 8; j1++) {
                window.draw(basic.tiles[i][j1]->sprite);
            }
        }
        for (int i = 0; i < number_military; i++) window.draw(gameworld[i].tiles[0][0]->sprite);
        //window.draw(gameworld[1].tiles[0][0]->sprite);
        /*for(int i = 0; i < gameWorld.gridLength; i ++)
        {
            for(int j = 0; j < gameWorld.gridLength; j ++)
            {
                window.draw(gameWorld.tiles[i][j]->sprite);
            }
        }*/

        window.display();
    }

    return 0;
}
