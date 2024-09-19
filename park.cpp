#include <iostream>
#include <string>
using namespace std;

int main() {
bool run = true;
bool menu = true;
bool play = false;

void game_over(bool &play, bool &menu);


while (run == true) {
    bool meet_bear = false;
    bool bear_alive = true;
    bool sandwich = false;
    bool duckling_reunited = false;
    bool duckling = false;
    bool mother_duck = false;
    bool davis = false;
    bool key = false;
    int time = 0;
    int pos_x = 0;
    int pos_y = 0;
    while (menu == true) {
    cout << "Welcome to 'the Park'" << endl << endl;
    cout << "1. Play" << endl;
    cout << "2. Controls" << endl;
    cout << "3. Exit game" << endl;
    cout << "Enter you choice: ";

    int choice;
    cin >> choice;

    switch (choice) {
        case 1: 
            play = true;
            menu = false;
            break;
        case 2:
            cout << "w: move north" << endl;
            cout << "s: move south" << endl;
            cout << "a: move east" << endl;
            cout << "d: move west" << endl;
            cout << "p: exit park" << endl;
            break;
        case 3:
            menu = false;
            run = false;
            break;
        default:
            cout << "Invalid input" << endl;
            break;
    }
    }

    while (play == true) {
            cout << endl << "Enter move direction: " << endl << endl;

        if (pos_x == 3 || pos_x == -3 || pos_y == 3 || pos_y == -3) {
            cout << "     " << endl;
            cout << "     " << endl;
            cout << "  ); " << endl;
            cout << "     " << endl;
            cout << "     " << endl;            
            cout << "You step onto the street." << endl;
            cout << "A garbage truck hits you at full speed." << endl;
            cout << "You die." << endl;
            game_over(play, menu);
            break;
        }

        if (pos_x == -2 && pos_y == 2) {
            cout << "o++++" << endl;
            cout << "+++++" << endl;
            cout << "+++++" << endl;
            cout << "+++++" << endl;
            cout << "+++++" << endl;
            cout << "You stand at the north west corner of the park." << endl;
            cout << "a major road surrounds the park." << endl;
        }

        if (pos_x == -1 && pos_y == 2) {
            cout << "+o+++" << endl;
            cout << "+++++" << endl;
            cout << "+++++" << endl;
            cout << "+++++" << endl;
            cout << "+++++" << endl;
            if (!duckling_reunited && !duckling && time < 50) {
                cout << "A small pond is here." << endl;
                cout << "You see a faint movement in the reeds." << endl;
                cout << "Investigate? (y/n)" << endl;
                char investigate;
                cin >> investigate;
                if (investigate == 'y') {
                    cout << "You get closer to the reeds." << endl;
                    cout << "A lone little duckling paddles out toward you." << endl;
                    cout << "pick up duckling? (y/n)" << endl;
                    char pick_up_duckling;
                    cin >> pick_up_duckling;
                    if (pick_up_duckling == 'y') {
                        cout << "     " << endl;
                        cout << "     " << endl;
                        cout << "  (: " << endl;
                        cout << "     " << endl;
                        cout << "     " << endl;
                        cout << "You gently gather the duckling into your bag." << endl;
                        duckling = true;
                    }
                    else {
                        cout << "You watch the duckling paddle around the little pond." << endl;
                    }
                }
                else {
                    cout << "the surface of the pond is serene and relaxing to view." << endl;
                }
            cout << "the surface of the pond is serene and relaxing to view." << endl;
            }

        }
        if (pos_x == 0 && pos_y == 2) {
            cout << "++o++" << endl;
            cout << "+++++" << endl;
            cout << "+++++" << endl;
            cout << "+++++" << endl;
            cout << "+++++" << endl;
            cout << "You stand at the top of a small hill." << endl;
            if (time > 15) {
                cout << "A small box rests at the top of the hill." << endl;
                cout << "Open it? (y/n)" << endl;
                char open_box;
                cin >> open_box;
                if (open_box == 'y') {
                    cout << "     " << endl;
                    cout << "  0  " << endl;
                    cout << "  |  " << endl;
                    cout << "  E  " << endl;
                    cout << "     " << endl;
                cout << "You find a large golden key." << endl;
                cout << "You collect the item." << endl;
                key = true;
                }
            }

        }
                if (pos_x == 1 && pos_y == 2) {
            cout << "+++o+" << endl;
            cout << "+++++" << endl;
            cout << "+++++" << endl;
            cout << "+++++" << endl;
            cout << "+++++" << endl;
            cout << "" << endl;
            cout << "" << endl;
        }

        if (pos_x == 2 && pos_y == 2) {
            cout << "++++o" << endl;
            cout << "+++++" << endl;
            cout << "+++++" << endl;
            cout << "+++++" << endl;
            cout << "+++++" << endl;
            cout << "You stand at the north east corner of the park." << endl;
            cout << "a major road surrounds the park." << endl;
        }
        if (pos_x == -2 && pos_y == 1) {
            cout << "+++++" << endl;
            cout << "o++++" << endl;
            cout << "+++++" << endl;
            cout << "+++++" << endl;
            cout << "+++++" << endl;
            cout << "You stand at the base of a very tall tree." << endl;
            cout << "You look up, and cannot see the top." << endl;
        }
        if (pos_x == -1 && pos_y == 1) {
            cout << "+++++" << endl;
            cout << "+o+++" << endl;
            cout << "+++++" << endl;
            cout << "+++++" << endl;
            cout << "+++++" << endl;
            cout << "" << endl;
            cout << "" << endl;
        }
        if (pos_x == 0 && pos_y == 1) {
            cout << "+++++" << endl;
            cout << "++o++" << endl;
            cout << "+++++" << endl;
            cout << "+++++" << endl;
            cout << "+++++" << endl;
            cout << "" << endl;
            cout << "" << endl;
        }
        if (pos_x == 1 && pos_y == 1) {
            cout << "+++++" << endl;
            cout << "+++o+" << endl;
            cout << "+++++" << endl;
            cout << "+++++" << endl;
            cout << "+++++" << endl;
            cout << "" << endl;
            cout << "" << endl;
        }
        if (pos_x == 2 && pos_y == 1) {
            cout << "+++++" << endl;
            cout << "++++o" << endl;
            cout << "+++++" << endl;
            cout << "+++++" << endl;
            cout << "+++++" << endl;
            cout << "" << endl;
            cout << "" << endl;
        }
        if (pos_x == -2 && pos_y == 0) {
            cout << "+++++" << endl;
            cout << "+++++" << endl;
            cout << "o++++" << endl;
            cout << "+++++" << endl;
            cout << "+++++" << endl;
            cout << "You are standing in the trees." << endl;
            cout << "It is peaceful." << endl;
        }
        if (pos_x == -1 && pos_y == 0) {
            cout << "+++++" << endl;
            cout << "+++++" << endl;
            cout << "+o+++" << endl;
            cout << "+++++" << endl;
            cout << "+++++" << endl;
            cout << "" << endl;
            cout << "" << endl;
        }

        if (pos_x == 0 && pos_y == 0) {
            cout << "+++++" << endl;
            cout << "+++++" << endl;
            cout << "++o++" << endl;
            cout << "+++++" << endl;
            cout << "+++++" << endl;
            cout << "You are in the center of the park." << endl;
            cout << "You see a hill to the north, play equipment to the south," << endl;
            cout << "trees to the west, and some buildings to the east." << endl;
        }

        if (pos_x == 1 && pos_y == 0) {
            cout << "+++++" << endl;
            cout << "+++++" << endl;
            cout << "+++o+" << endl;
            cout << "+++++" << endl;
            cout << "+++++" << endl;
            cout << "" << endl;
            cout << "" << endl;
        }
        if (pos_x == 2 && pos_y == 0) {
            cout << "+++++" << endl;
            cout << "+++++" << endl;
            cout << "++++o" << endl;
            cout << "+++++" << endl;
            cout << "+++++" << endl;
            cout << "" << endl;
            cout << "" << endl;
        }

        if (pos_x == -2 && pos_y == -1) {
            cout << "+++++" << endl;
            cout << "+++++" << endl;
            cout << "+++++" << endl;
            cout << "o++++" << endl;
            cout << "+++++" << endl;

            if (!meet_bear && bear_alive) {
                meet_bear = true;
                char input;
                cout << "You come face to face with a bear." << endl;
                cout << "(f)ight, (r)un, (w)ait" << endl;
                cin >> input;
                if (input == 'f') {
                    cout << "     " << endl;
                    cout << "     " << endl;
                    cout << "  ); " << endl;
                    cout << "     " << endl;
                    cout << "     " << endl;  
                    cout << "You choose to fight the bear." << endl;
                    cout << "The bear swings its paw at you throwing you into a tree" << endl;
                    cout << "You die.";
                    game_over(play, menu);
                }
                else if (input == 'r') {
                    cout << "+++++" << endl;
                    cout << "+++++" << endl;
                    cout << "+++++" << endl;
                    cout << "+o+++" << endl;
                    cout << "+++++" << endl;
                    cout << "You run away." << endl;
                    cout << "You look back, and no longer see the bear." << endl;
                    pos_x = -1;
                }
                else if (input == 'w') {
                    cout << "     " << endl;
                    cout << "     " << endl;
                    cout << "  (: " << endl;
                    cout << "     " << endl;
                    cout << "     " << endl;  
                    cout << "The bear sniffs you and examines you up close." << endl;
                    cout << "It then sits down and pulls a marmelaide sandwich out of a paper bag." << endl;
                    cout << "It is about to eat it, and looks to you, and asks if you'd like some." << endl;
                    cout << "You pick up sandwich." << endl;
                    sandwich = true;
                }
                else {
                    cout << "     " << endl;
                    cout << "     " << endl;
                    cout << "  ); " << endl;
                    cout << "     " << endl;
                    cout << "     " << endl;  
                    cout << "You fail to react. The bear crushes you with its paws." << endl;
                    cout << "You die.";
                    game_over(play, menu);
                }
            }
            if (!sandwich && pos_x == -2) {
                cout << "     " << endl;
                cout << "     " << endl;
                cout << "  (: " << endl;
                cout << "     " << endl;
                cout << "     " << endl;  
                cout << "You find a paper bag with a marmelaide sandwich inside." << endl;
                cout << "You pick up sandwich." << endl;
                sandwich = true;
            }
            else {
                cout << "     " << endl;
                cout << "     " << endl;
                cout << "  ); " << endl;
                cout << "     " << endl;
                cout << "     " << endl;  
                cout << "The smell of bear feces pervades your senses." << endl;
            }
        }

        if (pos_x == -1 && pos_y == -1) {
            cout << "+++++" << endl;
            cout << "+++++" << endl;
            cout << "+++++" << endl;
            cout << "+o+++" << endl;
            cout << "+++++" << endl;
            cout << "" << endl;
            cout << "" << endl;
        }
        if (pos_x == 0 && pos_y == -1) {
            cout << "+++++" << endl;
            cout << "+++++" << endl;
            cout << "+++++" << endl;
            cout << "++o++" << endl;
            cout << "+++++" << endl;
            cout << "" << endl;
            cout << "" << endl;
        }
        if (pos_x == 1 && pos_y == -1) {
            cout << "+++++" << endl;
            cout << "+++++" << endl;
            cout << "+++++" << endl;
            cout << "+++o+" << endl;
            cout << "+++++" << endl;
            cout << "" << endl;
            cout << "" << endl;
        }
        if (pos_x == 2 && pos_y == -1) {
            cout << "+++++" << endl;
            cout << "+++++" << endl;
            cout << "+++++" << endl;
            cout << "++++o" << endl;
            cout << "+++++" << endl;
            cout << "" << endl;
            cout << "" << endl;
        }

        if (pos_x == -2 && pos_y == -2) {
            cout << "+++++" << endl;
            cout << "+++++" << endl;
            cout << "+++++" << endl;
            cout << "+++++" << endl;
            cout << "o++++" << endl;
            cout << "You stand at the south west corner of the park." << endl;
            cout << "a major road surrounds the park." << endl;
        }
        
        if (pos_x == -1 && pos_y == -2) {
            cout << "+++++" << endl;
            cout << "+++++" << endl;
            cout << "+++++" << endl;
            cout << "+++++" << endl;
            cout << "+o+++" << endl;
            cout << "" << endl;
            cout << "" << endl;
        }
        
        if (pos_x == 0 && pos_y == -2) {
            cout << "+++++" << endl;
            cout << "+++++" << endl;
            cout << "+++++" << endl;
            cout << "+++++" << endl;
            cout << "++o++" << endl;
            cout << "" << endl;
            cout << "" << endl;
        }
        
        if (pos_x == 1 && pos_y == -2) {
            cout << "+++++" << endl;
            cout << "+++++" << endl;
            cout << "+++++" << endl;
            cout << "+++++" << endl;
            cout << "+++o+" << endl;
            if (!davis && time) {
                davis = true;
                cout << "You see a man standing on a swingset, swinging wildly." << endl;
                cout << "Man: Hey, did you know we're all fish?" << endl;
                int choice;
                cout << "1. Well, yeah. Obviously." << endl;
                cout << "2. Maybe you should get off that swing." << endl;
                cin >> choice;
                switch (choice) {
                    case 1:
                    cout << "Man: That's what I'm talking about!" << endl;
                    cout << "Davis: My name's Davis. I'm a marine biologist." << endl;
                    int follow_up;
                    cout << "1. Nice to meet you." << endl;
                    cout << "2. Right. Well, I better be going." << endl;
                    cin >> follow_up;
                    if (follow_up == 1) {
                        cout << "Dave: So, check out this fish. It's a mother duck fish." << endl;
                        if (sandwich) {
                            int offer_deal;
                            cout << "Would you like to trade that... mother duck fish for a marmelaide sandwich?" << endl;
                            cout << "Davis: Wow! A marmelaide sandwich fish? You got a deal." << endl;
                            cout << "You trade the sandwich for the mother duck." << endl;
                            mother_duck = true;
                            sandwich = false;

                        }
                        if (follow_up == 2) {
                        cout << "Davis: Seeya, my fish-man friend!" << endl;
                        }
                        else {
                            cout << "Wow, wish I could trade that for something. Oh well." << endl;
                            davis = false;
                        }
                    }
                    break;
                    case 2:
                    cout << "Man: What are you talking about!?" << endl;
                    cout << "The man falls from the swing, and lands hard on his neck." << endl;
                    cout << "A mother duck jumps out from his jacket." << endl;
                    cout << "You collect the mother duck." << endl;
                    mother_duck = true;
                    break;
                }   
            }
        }
        if (duckling && mother_duck) {
            mother_duck = false;
            cout << "     " << endl;
            cout << "     " << endl;
            cout << "  (: " << endl;
            cout << "     " << endl;
            cout << "     " << endl;  
            cout << "You reunite the duckling with the mother duck." << endl;
            cout << "They waddle off together." << endl;
            duckling_reunited = true;
        }

        if (pos_x == 2 && pos_y == -2) {
            cout << "+++++" << endl;
            cout << "+++++" << endl;
            cout << "+++++" << endl;
            cout << "+++++" << endl;
            cout << "++++o" << endl;
            cout << "You stand at the south east corner of the park." << endl;
            cout << "a major road surrounds the park." << endl;
        }

        char move_dir;
        cin >> move_dir;

        switch (move_dir) {
            case 'w':
                pos_y += 1;
                time++;
                break;
            case 's':
                pos_y -= 1;
                time++;
                break;
            case 'a':
                pos_x -= 1;
                time++;
                break;
            case 'd':
                pos_x += 1;
                time++;
                break;
            case 'p':
                play = false;
                menu = true;
                break;
            default:
                cout << "Invalid input" << endl;
                break;
        }

    }
}
return 0;
}

void game_over(bool &play, bool &menu) {
    cout << endl;
    cout << "GAME OVER" << endl;
    cout << endl;
    play = false;
    menu = true;
}