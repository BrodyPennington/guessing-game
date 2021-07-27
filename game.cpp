#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>


int main() {

bool keep_playing = true;

while (keep_playing ) {

keep_playing = false;

int number;
int x = 0;
int a = 0;
int tries = 0;

srand (time(NULL));

std::cout << "I have a number between 1 and 10 that i would like you to guess! Please press 0 to start!\n";
    std::cin >> x;


if (x == 0) {
    number = rand() % 10 + 1;
    std::cout << "please give your best guess!\n";
    std::cin >> a;
    
} else if (x != 0) {
    std::cout << "I guess you werent feeling it, have a nice day!";

    system ("pause");
    return 0;
}


while (a != number && tries < 5) {
    std::cout << "That was the wrong number, please try again!\n";

    std::cin >> a;

    tries++;

}

if (a == number) {
    char ans;
    std::cout << "Congrats, you guessed it!\n";
    std::cout << "Would you like to play again? [y/n]\n";
    std::cin >> ans;

        if (ans == 'y') {
            keep_playing = true;
        } else if (ans == 'n') {
            keep_playing = false; }
        
        

} 



if (tries == 5) {
    char ans;
    std::cout << "That was your last guess, sorry!\n";
     std::cout << "Would you like to play again? [y/n]\n";
     std::cin >> ans;

        if (ans == 'y') {
            keep_playing = true;
        } else if (ans == 'n') {
            keep_playing = false; }
} 



}

}
