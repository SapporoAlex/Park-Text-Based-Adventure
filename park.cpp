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
        cout << "Your current position is" << endl;
        cout << "x: " << pos_x << endl;
        cout << "y: " << pos_y << endl;
        cout << "Enter move direction: ";

        if (pos_x == 0 && pos_y == 0) {
            cout << "You are in the center of the park." << endl;
            cout << "You see a hill to the north, play equipment to the south," << endl;
            cout << "trees to the west, and some buildings to the east." << endl;
        }
        if (pos_x == -2 && pos_y == 0) {
            cout << "You are standing in the trees." << endl;
            cout << "It is peaceful." << endl;
        }
        if (pos_x == -2 && pos_y == 1) {
            cout << "You stand at the base of a very tall tree." << endl;
            cout << "You look up, and cannot see the top." << endl;
        }
        if (pos_x == -2 && pos_y == 2) {
            cout << "You stand at the north west corner of the park." << endl;
            cout << "a major road surrounds the park." << endl;
        }
                if (pos_x == 2 && pos_y == 2) {
            cout << "You stand at the north east corner of the park." << endl;
            cout << "a major road surrounds the park." << endl;
        }

        if (pos_x == -2 && pos_y == -2) {
            cout << "You stand at the south west corner of the park." << endl;
            cout << "a major road surrounds the park." << endl;
        }

        if (pos_x == 2 && pos_y == -2) {
            cout << "You stand at the north west corner of the park." << endl;
            cout << "a major road surrounds the park." << endl;
        }

        if (pos_x == -2 && pos_y == -1) {

            if (!meet_bear && bear_alive) {
                meet_bear = true;
                char input;
                cout << "You come face to face with a bear." << endl;
                cout << "(f)ight, (r)un, (w)ait" << endl;
                cin >> input;
                if (input == 'f') {
                    cout << "You choose to fight the bear." << endl;
                    cout << "The bear swings its paw at you throwing you into a tree" << endl;
                    cout << "You die.";
                    game_over(play, menu);
                }
                if (input == 'r') {
                    cout << "You run away." << endl;
                    cout << "You look back, and no longer see the bear." << endl;
                    pos_x = -1;
                }
                if (input == 'w') {
                    cout << "The bear sniffs you and examines you up close." << endl;
                    cout << "It then sits down and pulls a marmelaide sandwich out of a paper bag." << endl;
                    cout << "It is about to eat it, and looks to you, and asks if you'd like some." << endl;
                }
                else {
                    cout << "You fail to react. The bear crushes you with its paws." << endl;
                    game_over(play, menu);
                }
            }
            else {
                cout << "You find a paper bag with a marmelaide sandwich inside." << endl;
            }
        }

        if (pos_x == -2 && pos_y == 3) {
            cout << "You step onto the street." << endl;
            cout << "A garbage truck hits you at full speed." << endl;
            cout << "You die." << endl;
            game_over(play, menu);
            break;
        }
                if (pos_x == -3 && pos_y == 2) {
            cout << "You step onto the street." << endl;
            cout << "A garbage truck hits you at full speed." << endl;
            cout << "You die." << endl;
            game_over(play, menu);
            break;
        }
                if (pos_x == -3 && pos_y == 1) {
            cout << "You step onto the street." << endl;
            cout << "A garbage truck hits you at full speed." << endl;
            cout << "You die." << endl;
            game_over(play, menu);
            break;
        }
                if (pos_x == -3 && pos_y == 0) {
            cout << "You step onto the street." << endl;
            cout << "A garbage truck hits you at full speed." << endl;
            cout << "You die." << endl;
            game_over(play, menu);
            break;
        }
                if (pos_x == -3 && pos_y == -1) {
            cout << "You step onto the street." << endl;
            cout << "A garbage truck hits you at full speed." << endl;
            cout << "You die." << endl;
            game_over(play, menu);
            break;
        }
                if (pos_x == -3 && pos_y == -2) {
            cout << "You step onto the street." << endl;
            cout << "A garbage truck hits you at full speed." << endl;
            cout << "You die." << endl;
            game_over(play, menu);
            break;
        }
                if (pos_x == -2 && pos_y == -3) {
            cout << "You step onto the street." << endl;
            cout << "A garbage truck hits you at full speed." << endl;
            cout << "You die." << endl;
            game_over(play, menu);
            break;
        }
                if (pos_x == -1 && pos_y == -3) {
            cout << "You step onto the street." << endl;
            cout << "A garbage truck hits you at full speed." << endl;
            cout << "You die." << endl;
            game_over(play, menu);
            break;
        }
                if (pos_x == 0 && pos_y == -3) {
            cout << "You step onto the street." << endl;
            cout << "A garbage truck hits you at full speed." << endl;
            cout << "You die." << endl;
            game_over(play, menu);
            break;
        }
                if (pos_x == 1 && pos_y == -3) {
            cout << "You step onto the street." << endl;
            cout << "A garbage truck hits you at full speed." << endl;
            cout << "You die." << endl;
            game_over(play, menu);
            break;
        }
                if (pos_x == 2 && pos_y == -3) {
            cout << "You step onto the street." << endl;
            cout << "A garbage truck hits you at full speed." << endl;
            cout << "You die." << endl;
            game_over(play, menu);
            break;
        }
                if (pos_x == 3 && pos_y == -2) {
            cout << "You step onto the street." << endl;
            cout << "A garbage truck hits you at full speed." << endl;
            cout << "You die." << endl;
            game_over(play, menu);
            break;
        }
                if (pos_x == 3 && pos_y == -1) {
            cout << "You step onto the street." << endl;
            cout << "A garbage truck hits you at full speed." << endl;
            cout << "You die." << endl;
            game_over(play, menu);
            break;
        }
                if (pos_x == 3 && pos_y == 0) {
            cout << "You step onto the street." << endl;
            cout << "A garbage truck hits you at full speed." << endl;
            cout << "You die." << endl;
            game_over(play, menu);
            break;
        }
                if (pos_x == 3 && pos_y == 1) {
            cout << "You step onto the street." << endl;
            cout << "A garbage truck hits you at full speed." << endl;
            cout << "You die." << endl;
            game_over(play, menu);
            break;
        }
                if (pos_x == 3 && pos_y == 2) {
            cout << "You step onto the street." << endl;
            cout << "A garbage truck hits you at full speed." << endl;
            cout << "You die." << endl;
            game_over(play, menu);
            break;
        }

                if (pos_x == 2 && pos_y == 3) {
            cout << "You step onto the street." << endl;
            cout << "A garbage truck hits you at full speed." << endl;
            cout << "You die." << endl;
            game_over(play, menu);
            break;
        }
                if (pos_x == 1 && pos_y == 3) {
            cout << "You step onto the street." << endl;
            cout << "A garbage truck hits you at full speed." << endl;
            cout << "You die." << endl;
            game_over(play, menu);
            break;
        }
                if (pos_x == 0 && pos_y == 3) {
            cout << "You step onto the street." << endl;
            cout << "A garbage truck hits you at full speed." << endl;
            cout << "You die." << endl;
            game_over(play, menu);
            break;
        }
                if (pos_x == -1 && pos_y == 3) {
            cout << "You step onto the street." << endl;
            cout << "A garbage truck hits you at full speed." << endl;
            cout << "You die." << endl;
            game_over(play, menu);
            break;
        }
            
            

        char move_dir;
        cin >> move_dir;

        switch (move_dir) {
            case 'w':
                pos_y += 1;
                break;
            case 's':
                pos_y -= 1;
                break;
            case 'a':
                pos_x -= 1;
                break;
            case 'd':
                pos_x += 1;
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