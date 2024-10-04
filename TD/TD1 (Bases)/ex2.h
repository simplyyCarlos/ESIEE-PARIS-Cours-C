int maximum(int x, int y, int* min )
{
    int max;
    if (x >= y)
    {
        max = x;
        *min = y;
    }
    else
    {
        max = y;
        *min = x;
    }

    return max;
}