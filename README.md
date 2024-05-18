# VirtualBetFootBall
This C program simulates virtual betting on soccer matches. It randomly generates and displays matches between Serie A teams, shows a list of scheduled matches, waits for a short period, and then displays the match results.
Description

The program performs the following operations:

Defines an array of 10 Serie A teams.
Randomly generates 5 matches without repetitions, ensuring each team plays only once.
Displays the list of scheduled matches.
Waits for 15 seconds to simulate the time before the matches start.
Generates and displays the match results with random scores.
Code Details
Team Definition: Teams are stored in an array of strings.
Random Match Generation: Uses a flag array to track selected teams and ensures each team plays only once.
Match Display: Prints the list of scheduled matches before waiting.
Timer: Uses sleep to wait for 15 seconds, simulating the time before the matches start.
Result Generation: After the wait, generates and prints the match results with random scores.
