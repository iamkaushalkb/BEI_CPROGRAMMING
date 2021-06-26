// COLORS IN C
/*
    Black \033[0;30m

    Red \033[0;31m

    Green \033[0;32m

    Yellow \033[0;33m

    Blue \033[0;34m

    Purple \033[0;35m

    Cyan \033[0;36m

    White \033[0;37m
*/

#include <stdio.h>
void seat_available()
{
    printf("\033[0;32m\n");
}
void booked_seat()
{
    printf("\033[0;31m");
}
void selected_seat()
{
    printf("\033[0;33m");
}
void default_color(){
    printf("\033[0;37m");
}
void up_line()
{
    printf(" -------------\n");
}
void down_line()
{
    printf("-------------\n");
}
int main()
{
    // Seat Avaibility
    seat_available();
    up_line();
    printf(" | Seat No 1 |\n ");
    down_line();
    // Booked Seat
    booked_seat();
    up_line();
    printf(" | Seat No 2 |\n ");
    down_line();
    // Selected Seat
    selected_seat();
    up_line();
    printf(" | Seat No 3 |\n ");
    down_line();
    // Note
    // Available Seat
    seat_available();
    printf(" ---------------------------------- \n ");
    printf("| Green refers to available seat | \n ");
    // Selected Seat
    selected_seat();
    printf("| Yellow refers to selected seat |\n ");
    booked_seat();
    printf("| Red refers to booked seat      |\n");
    printf(" ---------------------------------- \n\n ");
    return 0;
}