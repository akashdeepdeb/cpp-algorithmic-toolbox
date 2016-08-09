#include <algorithm>
#include <iostream>
#include <climits>
#include <vector>

using std::vector;

struct Segment {
    int start, end;
};

bool endComparator (Segment const &a, Segment const &b)   {
    return a.end < b.end;
}

vector<int> optimal_points(vector<Segment> &segments) {
    vector<int> points;
    int i = 0, j, n = segments.size();
    sort(segments.begin(), segments.end(), endComparator);
    while(i<n)  {
        points.push_back(segments[i].end);
        j = i;
        while(i<n && segments[i].start <= segments[j].end)  {
            i++;
        }
    }
    return points;
}

int main() {
  int n;
  std::cin >> n;
  vector<Segment> segments(n);
  for (size_t i = 0; i < segments.size(); ++i) {
    std::cin >> segments[i].start >> segments[i].end;
  }
  vector<int> points = optimal_points(segments);
  std::cout << points.size() << "\n";
  for (size_t i = 0; i < points.size(); ++i) {
    std::cout << points[i] << " ";
  }
}