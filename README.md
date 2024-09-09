

# Flappy Bird Game in C

**Author**: Shoun, Bharat, Abhishek (1MCA B)

## Description

This project is a command-line version of the classic **Flappy Bird** game, written in C. The player controls a bird represented by "O>" and must navigate through an array of tunnels (pillars), trying to avoid collisions with the obstacles or the boundaries of the screen.

The game continuously updates, and the bird falls downward unless the player makes it fly by pressing the **spacebar** or **w** key.

## Features

- **Basic game mechanics**: The bird moves through the screen, avoiding obstacles.
- **Pillars**: There are three pillars with gaps at different heights.
- **Score Calculation**: Players earn points each time they pass through the gaps between the pillars.

## Controls

- Press **spacebar** to make the bird fly upwards.
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

![Flappy Bird GIF]([https://raw.githubusercontent.com/sho6000/flappyBird/main/flappybird.gif](https://github.com/sho6000/flappyBird/blob/main/fb.gif))

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



