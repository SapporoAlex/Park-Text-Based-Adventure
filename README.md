# The Park - A Text-Based Adventure Game

Welcome to "The Park", a text-based adventure game where you explore a mysterious park, face dangerous encounters, and interact with wildlife. Navigate through the park using simple controls, make decisions that will affect your survival, and discover hidden items along the way.
This was my first game made in C++. I hope to make more games in the future.
*<i>This game is still pretty bare-bones. Feel free to add different events at different time markers or locations, or something to do with the key. Currently, the only 'win' condition is reuniting a duckling with its mother.</i>

## How to Play

1. **Start the Game:**
   - Run the game in your terminal or preferred C++ IDE.
   - You will be presented with a menu with the following options:
     1. Play
     2. Controls
     3. Exit Game

2. **Controls:**
   - Use the following keys to move around the park:
     - `w`: Move north
     - `s`: Move south
     - `a`: Move east
     - `d`: Move west
     - `p`: Exit the park

3. **Objective:**
   - Explore the park and interact with its environment.
   - Survive dangerous encounters, such as a bear or getting hit by a garbage truck.
   - Find items such as a duckling or a key.
   - Your choices will determine the outcome of your adventure.

4. **Game Over:**
   - The game will end if your character dies from a deadly encounter.
   - You can always restart from the main menu.

## Key Locations in the Park

- **Center of the Park:** The starting point with a hill to the north, trees to the west, and various other paths to explore.
- **Northwest Corner (Pond):** A small pond where you may find a duckling.
- **Hill (Northeast):** A location where you might find a mysterious box containing a key.
- **Bear Encounter (Southwest):** Beware of the bear lurking in the southwest. Your choices will affect your survival.
  
## Sample Gameplay

- **Bear Encounter:**
  ```text
  You come face to face with a bear.
  (f)ight, (r)un, (w)ait
If you fight, you might meet an unfortunate end. But if you wait, the bear may offer you a sandwich!

Duckling at the Pond:
```bash
A lone little duckling paddles out toward you.
Pick up duckling? (y/n)
```

## Requirements
C++ compiler (e.g., GCC or an IDE like Visual Studio)
How to Compile and Run
Clone or download the game source files.
Compile using a C++ compiler. Example with GCC:
```bash
g++ -o ParkGame park.cpp
```
## Run the compiled game:
```bash
./ParkGame
```

## Future Plans
- Adding more locations and encounters.
- Expanding the park map with additional secrets to uncover.
- Implementing a scoring system based on survival time and decisions.

## Contributing
Feel free to fork this repository and submit pull requests if you'd like to contribute new features or fixes.

## License
This project is open-source and available under the MIT License.
