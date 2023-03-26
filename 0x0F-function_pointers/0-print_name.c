/**
 * print_name - prints name
 * @name: name variable
 * @f: funtion pointer
 * Return: 0 always
 */
void print_name(char *name, void(*f)(char *))
{
f(name);
}
