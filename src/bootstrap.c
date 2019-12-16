/*
** EPITECH PROJECT, 2019
** bootstrap
** File description:
** 104
*/

int discriminant(int a, int b, int c)
{
    int nb1 = b * b;
    int nb2 = (4 * a) * c;
    int result = nb1 - nb2;

    return (result);
}

int result_equa(int a, int b, int c)
{
    int x;
    int result;

    for(x = 0; result != 0; x++)
        result = (a * (x * x)) + (b * x) + c;
    return (x);
}

int result_equa2(int a, int b, int c)
{
    int x;
    int result;
    int des = descriminant(a, b, c);

    if (des > 0)
        x = (-b + sqrt(des)) / (2 * a);
    return (x);
}

int *line_L(int xp, int yp, int zp, int txv, int tyv, int zp, int tzv)
{
    int *L = malloc(3 * sizeof(int));

    L[0] = xp + txv;
    L[1] = yp + tyv;
    L[2] = zp + tzv;
    return (L);
}
