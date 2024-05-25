// Write a function to pass two objects of type LandMeasure and
// return their sum. (16 Ana = 1 Ropani, 4 Paisa= 1 Ana, 4 Dam= 1 Paisa
#include<iostream>
class LandMeasure
{
    int ropani,ana,paisa,dam;
    public:
        LandMeasure(){
        }
        LandMeasure(int a,int b,int c,int d){
            ropani=a;
            ana=b;
            paisa=c;
            dam=d;
        }
        LandMeasure Napi(LandMeasure L1,LandMeasure L2){
            this->ropani=L1.ropani+L2.ropani;
            this->ana=L1.ana+L2.ana;
            this->paisa=L1.paisa+L2.paisa;
            this->dam=L1.dam+L2.dam;

            if(this->dam >= 4){
                this->paisa+=this->dam/4;
                this->dam%=4;
            }
            if(this->paisa >= 4){
                this->ana+=this->paisa/4;
                this->paisa%=4;
            }
            if(this->ana >= 16){
                this->ropani+=this->ana/16;
                this->ana%=16;
            }
            return *this;
        }

        void display(){
            std::cout << "Ropani: " << ropani << ", Ana: " << ana << ", Paisa: " << paisa << ", Dam: " << dam << std::endl;
        }        
};

int main(){
    LandMeasure A(2,3,3,3),B(3,4,4,4);
    LandMeasure Sum;
    Sum.Napi(A,B);
    Sum.display();
    return 0;
}

