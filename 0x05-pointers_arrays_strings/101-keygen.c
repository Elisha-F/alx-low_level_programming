#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates password
 *
 * Return: 0 Always
 */
#define PASSWORD_LENGTH 12
int main(void)
{
char password[PASSWORD_LENGTH + 1];
const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+";
const int charset_size = sizeof(charset) - 1;
srand(time(NULL));
for (int i = 0; i < PASSWORD_LENGTH; i++)
{
int random_index = rand() % charset_size;
password[i] = charset[random_index];
}
password[PASSWORD_LENGTH] = '\0';
printf("Generated password: %s\n", password);
return (0);
}

