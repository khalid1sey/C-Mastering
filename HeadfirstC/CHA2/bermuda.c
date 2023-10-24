#include <stdio.h>
#include <stdlib.h>

void go_south_east(int lat, int lon)
{
    lat = lon - 1;
    lon = lon + 1;
}

int main(void)
{
    int latitude = 32;
    int longtude = -64;
    go_south_east(latitude, longtude);
    printf("Avast: Now at: {%i, %i}\n", latitude, longtude);
    return (0);
}