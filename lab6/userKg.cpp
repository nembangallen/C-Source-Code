#include<iostream>
#include<stdlib.h>
using namespace std;
class kiloGram{
    private:
        float kg;
    public:
        // kiloGram():kg(0){}
        kiloGram(float z):kg(z){}
        void show()
        {
            cout<<"Before conversion.\nWeight in kilogram: "<<kg<<"kg"<<endl;
        }
        float getKg()
        {
            return kg;
        }
};
class gram{
    private:
        float gm;
    public:
        gram():gm(0){}
        void show()
        {
            cout<<"After Conversion.\nWeight in gram: "<<gm<<endl;
        }
        gram(kiloGram k)
        {
            float a;
            a=(1000*k.getKg());
            gm=a;
        }
};
int main()
{
    float wt;
    cout<<"Enter the weight in kilogram: ";
    cin>>wt;
    if(wt<=0)
    {
        cout<<"Invalid"<<endl;
        exit(0);
    }
    kiloGram obj_kg(wt);
    obj_kg.show();
    gram obj_gm;
    obj_gm=obj_kg;
    obj_gm.show();
    return 0;
}