class Shape
{
protected:
    int x, y;

public:
    void draw()
    {
        cout << x << "," << y << endl;
    }
    void move() {}
};
class Reactangle : public Shape
{
protected:
    int width;
    int height;

public:
    int calcArea()
    {
        cout << x << "," << y << endl;
        return width * height;
    }
};

int main()
{
    Reactangle r;
    r.x = 10;      // protected는 비공개 - 에러
    r.width = 200; // protected는 비공개 - 에러

    r.calcArea();
    r.move();
    return 0;
}