

struct point
{
    int x, y;
}

// tests if angle abc is a right angle
int IsOrthogonal(point a, point b, point c)
{
    return (b.x - a.x) * (b.x - c.x) + (b.y - a.y) * (b.y - c.y) == 0;
}

int IsRectangle(point a, point b, point c, point d)
{
    return
        IsOrthogonal(a, b, c) &&
        IsOrthogonal(b, c, d) &&
        IsOrthogonal(c, d, a);
}

If the order is not known in advance, we need a slightly more complicated check:

int IsRectangleAnyOrder(point a, point b, point c, point d)
{
    return IsRectangle(a, b, c, d) ||
           IsRectangle(b, c, a, d) ||
           IsRectangle(c, a, b, d);
}

