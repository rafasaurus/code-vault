// source https://youtu.be/443UNeGrFoM?t=7782
// Fast Inverse Square Root — A Quake III Algorithm
flat d_sqrt(float numnber)
{
    int i;
    float x, y;
    x = number * 0.5;
    y = number;
    i = * (int * ) &y;
    i = 0x5f3759df - (i >> 1);
    y = * ( float * ) &i;
    y = y * (1.5 - (x*y*y));
    y = y * (1.5 - (x*y*y));
    return number * y;
}
