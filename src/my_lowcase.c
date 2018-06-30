char my_lowcase(char c)
{
    if (c >= 'A' && c <= 'Z')
        c += 32;
    return (c);
}
