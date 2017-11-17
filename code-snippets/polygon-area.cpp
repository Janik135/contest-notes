vector<struct point> points;
// ...
double area = 0;
for (long i = 0; i < points.size(); i++) {
    long j = (i + 1) % n;
    area += p[i].x * p[j].y;
    area -= p[i].y * p[j].x;
}
// ...
