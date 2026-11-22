#include <string>
using namespace std;

struct Score {
    string name;
    int kor;
    int eng;
};

Score plus_(Score a,Score b)
{
    Score total;
    total.name = "Total";
    total.kor = a.kor + b.kor;
    total.eng = a.eng + b.eng;
    return total;
}