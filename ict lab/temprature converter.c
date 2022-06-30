#include <stdio.h>
#include <stdlib.h>
int main()
{
    // declaring float value for input of the temprature
    int temprature;
    // declaring character that will specify the input from user about the type of temprature he gave
    char c, f, k;
    // declaring extra characters for switch,if and such statements
    char t, q, w;
    // taking value from user of temprature
    printf("Enter the temprature value:\n");
    scanf("%d", &temprature);
    // taking input about the choice of user
    printf("Which is the type of value that you have provided:\nc for celcius\nf for faranheit\nk for kelvin\n");
    scanf(" %c", &t);
    // now asking to convert to farenheit and kelvin if entered in celcius

    // starting if

    if (t == 'c' || t == 'C') // as we have assigned the values to t
    {
        printf("Enter the type in which you want to convert:\nf for faranheit\nk for kelvin\n");
        scanf(" %c", &q); // assigning these values to q
        switch (q)        // starting switch
        {
        case 'f': // in case to convert to faranheit
            int conv1;
            conv1 = (temprature * 9 / 5) + 32;
            printf("The Conversion Of %d Celcius In Faranheit Gives %d", temprature, conv1);
            break;
        case 'k': // in case to convert to kelvin
            int conv2;
            conv2 = (temprature + 273.15);
            printf("The Conversion Of %d Celcius In Faranheit Gives %d", temprature, conv2);
            break;
        // incase of nothing
        default:
            printf("No Correct Option! Retry!");
            break;
        }
        // ending switch
    }
    // ending if for celcius case is now closed

    // using else if for faranheit conversions
    else if (t == 'f' || t == 'F')
    {
        printf("Enter the type in which you want to convert:\nc for celcius\nk for kelvin\n");
        scanf(" %c", &q); // assigning these values to q
        switch (q)        // starting switch
        {
        case 'c': // in case to convert to celcius
            int conv1;
            conv1 = (temprature - 32) * 5 / 9;
            printf("The Conversion Of %d Faranheit In Celcius Gives %d", temprature, conv1);
            break;
        case 'k': // in case to convert to kelvin
            int conv2;
            conv2 = (temprature - 32) * (5 / 9) + (273);
            printf("The Conversion Of %d Faranheit In Kelvin Gives %d", temprature, conv2);
            break;
        // incase of nothing
        default:
            printf("No Correct Option! Retry!");
            break;
        }
        // ending switch
    }
    // ending second else if

    // now using final else if for kelvin
    else if (t == 'k' || t == 'K')
    {
        printf("Enter the type in which you want to convert:\nf for faranheit\nc for celcius\n");
        scanf(" %c", &q); // assigning these values to q
        switch (q)        // starting switch
        {
        case 'f': // in case to convert to faranheit
            int conv1;
            conv1 = (temprature - 273) * 9 / 5 + 32;
            printf("The Conversion Of %d Kelvin In Faranheit Gives %d", temprature, conv1);
            break;
        case 'c': // in case to convert to celcius
            int conv2;
            conv2 = (temprature - 273.15);
            printf("The Conversion Of %d Kelvin In Celcius Gives %d", temprature, conv2);
            break;
        // in case of nothing
        default:
            printf("No Correct Option! Retry!");
            break;
        }
        // ending switch
    }
    // main else showing that if user inputs any other value than celcius,aranheit or kelvin, it will display error
    else
    {
        // in case of error in executing the main else statement to make the user aware that he has inputted a variable that is not provided
        printf("Error! Please Open Your Eyes And Read The Screen\n\a");
    }
    // using error counter return
    return 0;
}