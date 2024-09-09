

# Flappy Bird Game in C

**Author**: Abdulrehman (BEIS-03)

## Description

This project is a command-line version of the classic **Flappy Bird** game, written in C. The player controls a bird represented by "O>" and must navigate through an array of tunnels (pillars), trying to avoid collisions with the obstacles or the boundaries of the screen.

The game continuously updates, and the bird falls downward unless the player makes it fly by pressing the **spacebar** or **w** key.

## Features

- **Basic game mechanics**: The bird moves through the screen, avoiding obstacles.
- **Pillars**: There are three pillars with gaps at different heights.
- **Score Calculation**: Players earn points each time they pass through the gaps between the pillars.
- **Simple Controls**: 
  - **w** or **spacebar**: Fly upward
  - **a**: Move left
  - **d**: Move right
  - **s**: Move downward
- **Game Over Condition**: The game ends when the bird collides with a pillar or the top/bottom boundary of the screen.

## Controls

- Press **spacebar** to make the bird fly upwards.
- Use **a** to move left, **d** to move right, and **s** to move downward.
- The bird falls automatically when no input is detected.

## How to Run the Game

### Prerequisites

- A C compiler like **GCC**.
- A terminal or command-line interface.

### Compilation and Execution

1. Clone or download the project.
2. Open the terminal in the directory where the code is saved.
3. Compile the code using the following command:

   ```bash
   gcc flappy_bird.c -o flappy_bird.exe
   ```

4. Run the game with:

   ```bash
   ./flappy_bird.exe
   ```

### Sample Gameplay

When you start the game, you will see the following instructions:

```
Hi!
This is the flappy bird game.
You have to pass through the spaces between the tunnels.

Press space for flying
GOOD LUCK!!!
```

Press the **spacebar** to start and keep the bird flying while avoiding obstacles. The game will display your score and notify you when it's over.

## Future Enhancements

- Add difficulty levels.
- Introduce more dynamic obstacles.
- Improve graphics with colors.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.



