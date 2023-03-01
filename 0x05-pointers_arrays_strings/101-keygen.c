#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

int main()
{
char password[PASSWORD_LENGTH + 1];
const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+";
const int charset_size = sizeof(charset) - 1;
srand(time(NULL)); // Initialize random number generator with current time
for (int i = 0; i < PASSWORD_LENGTH; i++) {
int random_index = rand() % charset_size; // Generate random index within charset
password[i] = charset[random_index]; // Add randomly selected character to password
}
password[PASSWORD_LENGTH] = '\0'; // Add null terminator at end of password string
printf("Generated password: %s\n", password);
return 0;
}

