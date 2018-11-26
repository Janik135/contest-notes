vector<struct point> points;
// ...
double area = 0;
for (long i = 0; i < points.size(); i++) {
    long j = (i + 1) % n;
    area += points[I].x * points[j].y;
    area -= points[I].y * points[j].x;
}
area /= 2;
// ...
