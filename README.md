# Simple Word Game

In this project, I created a simple word game that challenges players to form as many words as possible from a given set of letters. The program will provide a random set of letters, and the player will try to come up with words using those letters within a time limit.

Tech Stack:

- Programming Language: C
- Standard Libraries: `stdio.h`, `stdlib.h`, `ctype.h`, `string.h`, `time.h`

Features:

1. Random Letter Generation:
   - The program will generate a random set of letters using the `time.h` library and a random number generator.
   - The number of letters can be adjusted based on the desired difficulty level.

2. Input Validation:
   - The program will validate the words entered by the player to ensure they are valid and can be formed using the given letters.
   - It will use the `ctype.h` library to check for valid characters and `string.h` library for string manipulation.

3. Word Scoring:
   - The program will assign scores to words entered by the player based on their length or complexity.
   - It will provide feedback on the score achieved for each word entered.

4. Timer and Time Limit:
   - The program will utilize the `time.h` library to implement a timer for the game.
   - It will set a time limit for the player to come up with as many words as possible.

5. Leaderboard:
   - The program can keep track of high scores and display a leaderboard showing the top scores achieved by players.
_Overall this is my simple practice project to use the libraries functions in C programming language_
