int countingValleys(int steps, string path)
{
    int count_v = 0, count_h = 0;
    int sea_level = 0;
    int i = 0;
    int n = path.length();
    for (i = 0; i != n; i++)
    {
        if (path[i] == 'D')
        {
            sea_level -= 1;
            while (sea_level != 0)
            {
                i++;
                if (path[i] == 'D')
                    sea_level -= 1;
                else
                    sea_level += 1;
            }
            count_v++;
        }
        else if (path[i] == 'U')
        {
            sea_level += 1;
            while (sea_level != 0)
            {
                i++;
                if (path[i] == 'U')
                    sea_level += 1;
                else
                    sea_level -= 1;
            }
            count_h++;
        }
    }
    return count_v;
}