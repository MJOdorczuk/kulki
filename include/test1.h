#ifndef TEST1_H
#define TEST1_H


class test1
{
    public:
        test1(x, y, z);
        virtual ~test1();
        double Getx() { return x; }
        void Setx(double val) { x = val; }
        double Gety() { return y; }
        void Sety(double val) { y = val; }
        double Getz() { return z; }
        void Setz(double val) { z = val; }
    protected:
    private:
        double x;
        double y;
        double z;
};

#endif // TEST1_H
