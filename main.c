#include <stdio.h>
#include "helpers.h"
#include <stdbool.h>
#include "canada.h"
#include <math.h>
#include <ctype.h>

int modulo_testing();

int integer_division_testing();

int float_cast_to_integer_division_testing();

float for_loop_testing();

float integer_float_addition();

string print_ascii_string_value();

void change_machine();

string rock_paper_scissors();

void vigenere_cipher();

string rock_paper_scissors_choices();

bool is_in_ascii_range(char ltr);

char vigenere_offset_letter(char msgLtr, char keyLtr);

int main(int argc, char *argv[])
{

    printf("Choose one of the following options:\n");
    printf("0. Modulo Calculator\n");
    printf("1. Integer Division Calculator\n");
    printf("2. Float & Integer Calculator\n");
    printf("3. For Loop Counter\n");
    printf("4. Integer and Float Addition \n");
    printf("5. Print ASCII values of letters in a string\n");
    printf("6. Print the provinces of Canada\n");
    printf("8. Change Machine\n");
    printf("9. Rock Paper Scissors\n");
    printf("10. Vigenere Cipher\n");

    int selection = get_int("What is your selection?\n");

    //TODO:: Write a 11 case switch statement to run the appropriate function.
    switch (selection)
    {
    case 0:
        modulo_testing();
        break;
        case 1:
        integer_division_testing();
        break;
        case 2:
        float_cast_to_integer_division_testing();
        break;
        case 3:
        for_loop_testing();
        case 4:
        integer_float_addition();
        break;
        case 5:
        print_ascii_string_value();
        break;
        case 6:
        print_provinces();
        break;
        case 8:
        rock_paper_scissors();
        break;
        case 10:
        vigenere_cipher();
        break;
        

        





    
    default:
        break;
    }
    return 0;
}

int modulo_testing()
{

    int x = get_int("Enter the numerator : ");
    int y = get_int("Enter the denominator : ");
    int modulo = 0;
    modulo = x % y;

    printf("The remainder of %d divided by %d is %d", x, y, modulo);
    return 1;
}

int integer_division_testing()
{
    int x = get_int("Enter the numerator : ");
    int y = get_int("Enter the denominator : ");
    int result = x / y;



    printf("The result of %d divided by %d is %d", x, y, result);

    return 0;
}

int float_cast_to_integer_division_testing()
{
    float x = get_float("Enter the numerator : ");
    float y = get_float("enter the denominator : ");
    float result = x / y;
    int int_result = (int)result;
    printf("The result of %f divided by %f is %f, once cast to an int the result is %d\n", x, y, result, int_result);
    return ;
}

float for_loop_testing()
{
    float counter = get_float("What should be the initial value of the counter?\n");

    int loop_count = get_int("How many times should the loop run?\n");

    float increment = get_float("How much should the counter increment by?\n");

    bool is_positive = get_char("Should the counter decrement instead of incrementing? y / n \n") == 'n' ? true : false;
    
     if(!is_positive)
        {
            increment = increment * -1;
        }

        for (int iterator = 0; iterator < loop_count; iterator++)
        {
            counter= counter + increment;
        }
        
    
    printf("The final value of the counter is %f\n", counter);

    //TODO:: Write a for loop that increments a counter the appropriate amount of times by a custom amount
    //TODO:: Write an if check that will optionally decrement instead of incrementing.

    

    return counter;
}

float integer_float_addition()
{
    int x = get_int("Enter the integer : ");
    float y = get_float("Enter the float : ");
    float result = x + y;


    //Get an int and a float and add them together, make sure the result comes out as a float

    printf("The result of %d plus %f is %f", x, y, result);

    return 1.0;
}

string print_ascii_string_value()
{
    string str = get_string(" Enter your desired word : ");
    int strsize = strlen(str);
    int i = 0;
    int result = 0;
    while (i < strsize)
    {
        printf("the char at position %d is %C and the ascii value is %d\n", i, str[i], str[i]);
        i++;
     
    }
    
    //TODO:: Write a while loop that takes a string that you query the user for then print out each letter with their matching ascii value
    //TODO:: Also print out the characters position in the string
}

void change_machine()
{

    int coins[] = {25, 10, 5};
    int coinCounts[] = {0,
                        0,
                        0};

    

    //TODO: Get a float from the user and return the change needed for that amount IE: 2.95
    //      returns 3 quarters and 2 dimes.

    //Optional TODO::The government makes businesses round up the nickels for numbers ending in 3 and 8.
}

string rock_paper_scissors()
{    //ask the user to choose either 1,2 or 3 and assign it as rock paper and scissor
    int number_choice;
    int ai_number_choice
    do
    {
        number_choice = get_int("make a choice :\n 1.Rock\n 2.Paper\n 3.Scissor\n");

    } while (number_choice > 0 && number_choice < 4);
    int random = rand() % 30;
    random = (random + 10) / 10 ;
    

    /*while (choice < 1 || choice > 3) 
    {
        printf("Enter your choice for rock, paper or scissors(1,2,3): ");
        scanf("%d", &choice);
    }
    int random = rand() % 30;
    printf("Random number generated: %d\n", random);
     printf("You chose ");
    if (choice == 1 && random == 1) {
        printf("rock.\n");
    } else if (choice == 2 && random == 2) {
        printf("paper.\n");
    } else {
        printf("scissors.\n");
    }*/




    //TODO:: Query the user for an int between 1 and 3 for their choice of rock, paper scissors.
    //      Use a do while loop to guarantee their input is valid

    // Generates a pseudo random int between 0 and 29
    // Use this to determine the "AI" choice
    

    //TODO:: Write the game logic with if checks and determine who won
}

//Convenience function you can call
string rock_paper_scissors_choices(int choice)
{
    // No need to break out of cases when you return since no code runs after that.
    switch (choice)
    {
    case 1:
        return "rock";

    case 2:
        return "paper";

    case 3:
        return "scissors";

    default:
        break;
    }
}

void vigenere_cipher()
{
    string message = get_string("What is the message to encode? ");

    string key = get_string("What is your encoding key? ");
    int length = strlen(message);
    char vigenere[length + 1];
    for (int i = 0; i < length; i++) 
    {
    int shift = key[i % length] - 'a';
    char encrypted_char = ((message[i] - 'a' + shift) % 26) + 'a';
    vigenere[i] = encrypted_char;
    }
    vigenere[length] = '\0';
    printf("encrypted word : %s\n", vigenere);
    return ;

    //TODO:: Write the for loop for the vigenere cipher
}

//Convenice function you can call
char vigenere_offset_letter(char msgLtr, char keyLtr)
{
    //Determine if you need to offset by 97 or 65 to make the choice between 0 for 'a' and 25 for 'z'
    int capital_offset = islower(msgLtr) ? 97 : 65;

    //The key offset doesn't matter because you only offset by the characters value, doesn't matter if its capital
    int key_offset = tolower(keyLtr) - 97;

    //The letters position between 0 and 25
    int ltr_position = msgLtr - capital_offset;

    //Modulo the offset by 26 in case the value is more than 25 and we need to circle back,
    //Re-add the capital offset so the shifted message letter regains it's original cases
    ltr_position = (ltr_position + key_offset) % 26 + capital_offset;

    return (char)ltr_position;
}

//Convenice function you can call
bool is_in_ascii_range(char ltr)
{
    //Only need to check if between 96 and 123 if you tolower the char
    int lowerLtr = tolower(ltr);

    if (lowerLtr > 96 && lowerLtr < 123)
    {
        return true;
    }
    else
    {
        return false;
    }
}