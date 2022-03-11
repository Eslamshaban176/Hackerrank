

class Student {
    int scors[5],total;
public:
    Student():total(0){}
    void input()
    {
        for (int i = 0; i < 5; i++)
            cin >> scors[i];
    }

    int calculateTotalScore()
    {
        for (int i = 0; i < 5; i++)
            total += scors[i];            
        return total;
    }
};
