# Game-of-Nim

The game of Nim is the following game played by two players. To start, there are
three piles of sticks: there can be any number of sticks greater than zero in each of the piles. The
players then take turns removing sticks. In one turn, a player may remove any number of sticks
greater than zero, but all the sticks must come out of the same pile. The goal is to force the other
player to remove the last of the sticks (i.e., the player who removes the last stick loses).

For this problem, you will implement the game of Nim. Your implementation will be a two-player
game, where one player interacts and the other is the computer. The human player will be asked for the pile from which to remove sticks and how many to remove. The computer’s strategy will
be very straightforward (and not very intelligent): choose a pile at random, choose a number n at
random such that 0 < n ≤ N , where N is the number of sticks in that pile, and remove n sticks
from that pile. Note that it is very easy to win when your opponent uses this strategy. Do not use
recursion to implement the game of Nim.

Your implementation will be a self-contained program, with its own main function and any other
functions you choose to write. If you find that in your main function you perform a well-defined
task more than once, you should encapsulate that task into a function that you call. 

Your main
function will probably perform roughly the following tasks:

(1) Initialize three piles of sticks to randomly-chosen values between 1 and 10 inclusive (see
below on how to generate random numbers).

(2) Repeat the game loop:

    (a) Print out the number of sticks in each pile.
    
    (b) Ask the user to choose a pile from which to draw sticks and how many sticks to draw.
    You may assume that the user will always enter a non-negative integer in both cases.
    Make sure to perform basic error-checking to ensure that the user chooses a legal pile,
    that the pile has some sticks in it, that the user chooses at least one stick, and that
    the user does not choose more sticks than are in the pile.
    
    (c) Remove the sticks from the pile.
    
    (d) If there are no sticks left in any pile, report that the user has lost. The game should
    end at this point.
    
    (e) Otherwise choose a pile at random for the computer player. The pile must not be
    empty. If you like, you can just repeatedly choose a pile until you choose one that is
    not empty.
    
    (f) Choose a number at random between 1 and the number of sticks in the chosen pile.
    
    (g) Remove the sticks from the pile.
    
    (h) If there are no sticks left in any pile, report that the computer player has lost. The
    game should end at this point.


