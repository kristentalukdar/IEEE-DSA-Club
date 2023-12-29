#include <iostream>

using namespace std;

class pattern{
    public:

        /*
            ***
            ***
            ***
        */
        void pattern1(int n){
            int row=1;
            while (row<=n)
            {
                int col=1;
                while (col<=n)
                {
                    cout<< "* ";
                    col++;
                }
                cout<<endl;
                row++;               

            }
            
        }

        /*
            111
            222
            333
            444
            555

        */
        void pattern2UsingFor(const int noOfRows){
            for(int row=1; row<=noOfRows; row++){
                for(int col=1; col<=3; col++){
                    cout<<row;
                }
                cout<<endl;
            }
        }

        void pattern2UsingWhile(const int noOfRows){
            int row=1;

            while(row<=noOfRows){
                int col=1;
                while(col<=3){
                    cout<<row;
                    col++;
                }
                cout<<endl;
                row++;
            }
        }

        /*
            12345
            12345
            12345
            12345
            12345

        */
        void pattern3(const int noOfRows){
            for(int row=1; row<=noOfRows; row++){
                for(int col=1; col<=noOfRows; col++){
                    cout<<col;
                }
                cout<<endl;
            }
        }

        /*
            54321
            54321
            54321
            54321
            54321
        */
        void pattern4(const int noOfRows){
            for(int row=1; row<=noOfRows; row++){
                for(int col=noOfRows; col>0; col--){
                    cout<<col;
                }
                cout<<endl;
            }           
        }

        /*
            *
            **
            ***
            ****
        */
       void pattern5(int noOfRows){
            for(int row=1; row<=noOfRows; row++){
                for(int col=1; col<=row; col++){
                    cout<<"*";
                }
                cout<<endl;
            }
       }

       /*
        1
        23
        345
        4567
       */
      void pattern6(int noOfRows){
        for(int row=1; row<=noOfRows; row++){
                for(int col=0; col<row; col++){
                    int val=row+col;
                    cout<<val;
                }
                cout<<endl;
            }
        }

      /*
        1
        21
        321
        4321
      */
        void pattern7(int noOfRows){
            for(int row=1; row<=noOfRows; row++){
                for(int col=0; col<row; col++){
                    int val=row-col;
                    cout<<val;
                }
                cout<<endl;
            } 
        }

        /*
            AAA
            BBB
            CCC
        */
       void pattern8(int noOfRows){
            for(int row=0; row<=noOfRows-1; row++){
                for(int col=0; col<=noOfRows-1; col++){
                    int val=row+65;
                    cout<<char(val);
                }
                cout<<endl;
            }
        
       }

       /*
            ABC
            ABC
            ABC
       */
        void pattern9(int noOfRows){
            for(int row=0; row<=noOfRows-1; row++){
                for(int col=0; col<=noOfRows-1; col++){
                    int val=col+65;
                    cout<<char(val);
                }
                cout<<endl;
            }
        }

        /*
            ABC
            BCD
            CDE
            
        */
        void pattern10(int noOfRows){
            for(int row=0; row<=noOfRows-1; row++){
                for(int col=0; col<=noOfRows-1; col++){
                    int val=row+col+65;
                    cout<<char(val);
                }
                cout<<endl;
            }
        }

        /*
            ABC
            DEF
            GHI
        */
        void pattern11(int noOfRows){
              for(int row=0; row<=noOfRows-1; row++){
                for(int col=row+1; col<=row+3; col++){
                    int val=(2*row)+col+64;
                    cout<<char(val);
                }
                cout<<endl;
            }
        }

        /*
            **
            **
            **
        */
       void pattern12(int noOfRows){
        for(int row=1; row<=noOfRows; row++){
            for(int col=1; col<=2; col++){
                cout<<"*";
            }
            cout<<endl;
        }
       }

       /*
        **
        *
        **
        *
        **
       */
        void pattern13(int noOfRows){
            for(int row=1; row<=noOfRows; row++){
                if(row%2==0){
                    for (int colEven=1; colEven<=2; colEven++){
                        cout<<"*";
                    }
                }
                else{
                    for(int colOdd=1; colOdd<2; colOdd++){
                        cout<<"*";
                    }
                }
                cout<<endl;
            }
        }

        /*
            1111
            222
            33
            4
        */

        void pattern14(int noOfRows){
            for(int row=1; row<=noOfRows; row++){
                for(int col=0; col<=noOfRows-row; col++){
                    cout<<row;
                }
                cout<<endl;
            }
        }

        /*
                *
               ***
              *****
             *******
        */
        void pattern15(){
            int noOfRows=5;
            for(int row=0; row<noOfRows+1; row++){
                for(int colSpace=noOfRows-row; colSpace>0; colSpace--){
                    cout<<" ";
                }
                for(int colStar=1; colStar<=(2*row)+1; colStar++){
                    cout<<"*";
                }
                cout<<endl;
            }
            
        }

        /*
            1
            23
            456
        */

        void pattern16(int noOfRows){
            int b=1;
            for(int row=1;row<=noOfRows;row++)
            {
                cout<<"\n";
                for(int col=1;col<=row;col++)
                {
                    cout<<" "<<b;
                    b++;
                }
            }
        }



        


    
};

int main(){
    //cout<<"hello";
    //cout<<char(65);

    pattern p;
    //p.pattern1(5);
    // p.pattern3(5);
    // p.pattern4(5);
    // p.pattern5(5);
    // p.pattern6(5);
    // p.pattern7(5);
    //p.pattern8(5);
    //p.pattern9(5);
    //p.pattern10(3);
    //p.pattern11(3);
    //p.pattern12(5);
    //p.pattern13(10);
    //p.pattern14(4);
    p.pattern16(5);

    for(int i=0; i<0; i++){
        cout<<"Hello";
    }
    return 0;
}