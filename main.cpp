// 42110167
#include <iostream>
# include<cmath>
using namespace std;

void program_strat ()
{
    cout << "                                                                                   " << endl ;
    cout << "                                                                                   " << endl ;
    cout << "                                     **welcome to RNG program**                   " << endl ;
    cout << "                                                                                   " << endl ;
    cout << "                           =============================================" << endl ;
    cout << "                           ~~~            (1) ICG                    ~~~" << endl ;
    cout << "                           ~~~            (2) LFG                    ~~~" << endl ;
    cout << "                           ~~~            (3) MSM                    ~~~" << endl ;
    cout << "                           ~~~            (4) MRG                    ~~~" << endl ;
    cout << "                           ~~~            (5) Exit                   ~~~" << endl ;
     cout <<"                           =============================================" << endl ;
    cout << "                           ~~~ Please,Enter the number of your choice : " << endl ;

}
class LCG{
    private: int seed;
    private: int mult;
    private: int addition;
    private: int modulus;
    public:
        LCG(int s, int m, int a,int mo){
            seed=s;
            mult=m;
            addition=a;
            modulus=mo;
        }

    int random(float seed,float mult,float add ,int modul){
	int step= (seed*mult)+add;
	int z=step%modul;
	return z;
}


void bubble(float arr[],int size){
	for(int i=0;i<size-1;i++){
		for(int j=0;j<size-i-1;j++){
			if(arr[j]>arr[j+1]){
				float temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}

		}

	}
}

float mergeAndFindMax(float arr1[], int size1, float arr2[], int size2) {
    // Calculate the size of the merged array
    int mergedSize = size1 + size2;

    // Create a new array to store the merged array
    float mergedArr[mergedSize];

    // Copy elements of the first array to the merged array
    for (int i = 0; i < size1; i++) {
        mergedArr[i] = arr1[i];
    }

    // Copy elements of the second array to the merged array
    for (int i = 0; i < size2; i++) {
        mergedArr[size1 + i] = arr2[i];
    }

    // Find the maximum value in the merged array
    float maxVal = mergedArr[0];
    for (int i = 1; i < mergedSize; i++) {
        if (mergedArr[i] > maxVal) {
            maxVal =mergedArr[i];
        }
    }

    return maxVal;
}

float testKs(int alpha,int count){
    float cal=0.0;
      switch(alpha){
       case 1:

               switch(count){
         case 1:
            cal=0.950;
            break;
        case 2:
            cal=0.776;
            break;
        case 3:
            cal=0.642;
            break;
        case 4:
            cal=0.564;
            break;
       case 5:
            cal=0.510;
            break;
       case 6:
            cal=0.470;
            break;
       case 7:
            cal=0.438;
            break;
      case 8:
            cal=0.411;
            break;
      case 9:
            cal=0.388;
            break;
      case 10:
            cal=0.368;
            break;
      case 11:
            cal=0.352;
            break;
      case 12:
            cal=0.338;
            break;
      case 13:
            cal=0.325;
            break;
      case 14:
            cal=0.314;
            break;
      case 15:
            cal=0.304;
            break;
      case 16:
            cal=0.295;
            break;
     case 17:
            cal=0.286;
            break;
     case 18:
            cal=0.287;
            break;
      case 19:
            cal=0.272;
            break;
       case 20:
            cal=0.264;
            break;
        case 25:
            cal=0.24;
            break;
        case 30:
            cal=0.22;
            break;
        case 35:
            cal=0.21;
            break;
            defuault:
                cal=0.0;
                break;
        }
            break;

            case 2:
              switch (count){
              case 1:
                cal=0.975;
                break;
            case 2:
                cal=0.842;
                break;
            case 3:
                cal=0.708;
                break;
            case 4:
                cal=0.624;
                break;
            case 5:
                cal=0.565;
                break;
            case 6:
                cal=0.521;
                break;
            case 7:
                cal=0.486;
                break;
            case 8:
                cal=0.457;
                break;
            case 9:
                cal=0.432;
                break;
            case 10:
                cal=0.410;
                break;
            case 11:
                cal=0.391;
                break;
            case 12:
                cal=0.375;
                break;
            case 14:
                cal=0.361;
                break;
            case 15:
                cal=0.349;
                break;
            case 16:
                cal=0.338;
                break;
            case 17:
                cal=0.328;
                break;
            case 18:
                cal=0.318;
                break;
            case 19:
                cal=0.309;
                break;
            case 20:
                cal=0.301;
                break;
            case 25:
                cal=0.294;
                break;
            case 30:
                cal=0.27;
                break;
            case 35:
                cal=0.23;
                break;
            }break;

            case 3:
                switch(count){
                 case 1:
                   cal=0.995;
                   break;
                 case 2:
                   cal=0.929;
                   break;
                 case 3:
                   cal=0.828;
                   break;
                case 4:
                   cal=0.733;
                   break;
                case 5:
                   cal=0.669;
                   break;
                case 6:
                   cal=0.618;
                   break;
                case 7:
                   cal=0.577;
                   break;
                case 8:
                   cal=0.543;
                   break;
                case 9:
                   cal=0.514;
                   break;
                case 10:
                   cal=0.490;
                   break;
                case 11:
                   cal=0.468;
                   break;
                case 12:
                   cal=0.450;
                   break;
                 case 13:
                   cal=0.433;
                   break;
                case 14:
                   cal=0.418;
                   break;
                case 15:
                   cal=0.404;
                   break;
                case 16:
                   cal=0.392;
                   break;
                case 17:
                   cal=0.381;
                   break;
                case 18:
                   cal=0.371;
                   break;
               case 19:
                   cal=0.363;
                   break;
               case 20:
                   cal=0.356;
                   break;
               case 25:
                   cal=0.32;
                   break;
               case 30:
                   cal=0.29;
                   break;
               case 35:
                   cal=0.27;
                   break;
                }break;
          }
            return cal;

     }



double overTest(int alpha,int count){
    double result=0.0;
    if(alpha==1)
        result=1.22/sqrt(count);
    else if(alpha==2)
        result=1.36/sqrt(count);
    else
        result=1.63/sqrt(count);
    return result;
}
};
class  LaggedFibonacciGenerator{

    private:
        int j,k,mod ,number,n;
        string operation;
        long long arr[10000];
    public:
        void L_F_G(){
        cout << "                                      " << endl ;
        cout << "   **-**-**-**-**-**-**-**-**-**-**-**-**" << endl ;
        cout << "   *-    Lagged Fibonacci generator    -*" << endl ;
        cout << "   **-**-**-**-**-**-**-**-**-**-**-**-**" << endl ;
        cout << "                                      " << endl ;

        cout<<"   ";
        cout << "*** Enter the lag (j): ";
        cout<<"   ";cin >> j;
        while (j <= 0) {
         cout<<"   ";  cout << "Invalid j. Please enter a positive integer: ";
         cout<<"   ";  cin >> j;
        }

        cout<<"   ";
        cout << "*** Enter the lag (k): ";
        cout<<"   ";cin >> k;
        while (k <= 0 & k <= j) {
         cout<<"   ";  cout << "Invalid k. Please enter a positive number and grater than j: ";
         cout<<"   ";  cin >> k;
        }

        cout<<"   ";
        cout << "*** Enter the modulus: ";
        cout<<"   ";cin >> mod;
        while (mod <= 0) {
         cout<<"   ";cout << "Invalid modulus. Please enter a positive integer: ";
         cout<<"   ";cin >> mod;
        }

        cout<<"   ";
        cout << "*** Enter "<<k<<" values:" << endl;
        for (int i = 0; i < k; i++) {
             cout<<"         ";
             cin >> arr[i];
             while (arr[i] <= 0) {
              cout<<"        ";
              cout << "Invalid initial value. Please enter a positive integer: ";
              cin >> arr[i];
             }
        }
        cout<<"   ";
        cout<< "*** please,Enter the number of elements to generate:";
        cout<<"   ";
        cin>>number;
        while (number <= 0) {
         cout<<"   ";  cout << "Invalid number. Please enter a positive integer: ";
         cout<<"   ";  cin >> number;
        }

        cout<<endl;
        cout << "   *** What is the operator do you want to use? "<<endl;
        cout<<  "   _____________________________________________"<<endl;
        cout<<  "   |         1-Addition(+)                     | "<<endl;
        cout<<  "   |         2-Subtraction(-)                  | "<<endl;
        cout<<  "   |         3-Multiplication(*)               | "<<endl;
        cout<<  "   |         5-XOr                             | "<<endl;
        cout<<  "   |         6-XNor                            | "<<endl;
        cout<<  "   |         7-And                             | "<<endl;
        cout<<  "   |         8-Or                              | "<<endl;
        cout<<  "   --------------------------------------------- "<<endl;
        cout<<  "   *** Please,Enter the number of Operator:-  ";
        cout<<"   ";
        cin >> operation;

        while (operation != "1" && operation != "2" && operation != "3" && operation != "4" && operation != "5" && operation != "6" && operation != "7" && operation != "8") {
         cout<<"   ";  cout << "Invalid number. Please,Enter the number of Operator:- ";
         cin >> operation;
          if(operation == "1" || operation == "2" || operation == "3" || operation == "4" || operation == "5" || operation == "6" || operation == "7" || operation == "8"){
                 break;
           }
        }

         cout<<endl;

        }
        void generateSequence() {

        long long validate_number;
         char ch = operation.at(0);
         n=number+k;
         for (int i = k; i <= n; i++) {

             switch (ch){
                case '1' :
                      arr[i] = (arr[i - j] + arr[i - k]) % mod;
                       break;
                case '3':
                      arr[i] = (arr[i - j] * arr[i - k]) % mod;
                       break;
                case '2':
                   arr[i] = (arr[i - j] - arr[i - k]) % mod;
                   if (arr[i] < 0){
                       arr[i] += mod;
                    }
                    break;
                case '5':
                    arr[i] = (arr[i - j] ^ arr[i - k]) % mod;
                    break;
                case  '6':
                    arr[i] = ( !(arr[i - j] ^ arr[i - k]) )% mod;
                    break;
                case '4':
                        if (arr[i - k] != 0) {
                        arr[i] = (arr[i - j] / arr[i - k]) % mod;
                        break;
                     }
                    break;
                case '7':
                    arr[i] = (arr[i - j] & arr[i - k]) % mod;
                    break;
                case '8':
                    arr[i] = (arr[i - j] | arr[i - k]) % mod;
                    break;
                default:
                     cout << "Invalid operation \n";
                     break;
             }
         }
        }
        void printSequence() {
        cout<<"   ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
        cout<<"   ";
        cout << "^ Generated sequence: ";
        for (int i = k; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout<<"   ";
        cout << "^ Random Number Generated:";
        for (int i = 0 ; i < n; i++) {
            cout << ( static_cast<double>(arr[i]) ) / mod << " ";
        }

        cout << endl;
        cout<<"   ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
    }

};

class MidSquareRNG {
private:
    long long seed;
    long long current;

public:
    MidSquareRNG(long long seed) : seed(seed), current(seed) {}

    long long generate() {
        current = seed * seed;
        current /= 100;
        seed = current % 10000;
        return seed;
    }
};
class MRGRNG {
private:
    long long seeds[3];
    long long modulus;
    long long multipliers[3];

public:
    MRGRNG(long long seed1, long long seed2, long long seed3,
           long long modulus,
           long long multiplier1,
           long long multiplier2,
           long long multiplier3)
           : modulus(modulus) {
               seeds[0] = seed1;
               seeds[1] = seed2;
               seeds[2] = seed3;
               multipliers[0] = multiplier1;
               multipliers[1] = multiplier2;
               multipliers[2] = multiplier3;
           }
    long long generate() {
        long long result = 0;
        for (size_t i = 0; i < 3; ++i) {
            result += multipliers[i] * seeds[i];
            seeds[i] = result % modulus;
            result /= modulus;
        }
        return seeds[2];
    }
};

int main()
{
      program_strat () ;
      int start_choice ;
      cout<<"   ";
      cin >> start_choice ;
      if(start_choice==1){
                    cout << "                                      " << endl ;
        cout << "     **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-*" << endl ;
        cout << "     *-  Inversive Congruential generator & KS test       -*" << endl ;
        cout << "     **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-*" << endl ;
        cout << "                                      " << endl ;

	    int seed,a,c,m;
	    cout << "     *** Enter seed: ";
        cout<<"   ";cin >> seed;
        cout << "     *** Enter Multiplier: ";
        cout<<"   ";cin >> a;
        cout << "     *** Enter Increment: ";
        cout<<"   ";cin >> c;
        cout << "     *** Enter Modulus: ";
        cout<<"   ";cin >> m;

        LCG lcg(seed,m,a,m);
        int numbers;
        cout<< "     *** How many Numbers of Random ? ";
        cout<<"   ";cin>>numbers;
        float arr[numbers];
        cout<<"   ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
        for(int i=0;i<numbers;i++){
                float x=lcg.random(seed,a,c,m);
                float randomm=x/100;
                cout<< "  ^^      Random : "<<randomm<<"               ^^"<<endl;
                arr[i]=randomm;
                seed=x;
	    }
        cout<<"   ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;

        cout<<endl;
        cout << "    *** Do you want Test Generated Numbers ? "<<endl;
        cout<< "    ____________________________________________"<<endl;
        cout<< "    |         1-YES                             | "<<endl;
        cout<< "    |         2-No                              | "<<endl;
        cout<< "    --------------------------------------------- "<<endl;
        cout<< "    *** Please,Enter the number of choise:-  ";
        cout<<"   ";
        int choiceTest;
        cin>>choiceTest;

        if(choiceTest==1){
        int size;
        cout<< "    *** How many numbers you want testing? ";
        cin>>size;
        float arrx[size];
        cout<< "    *** Enter generated number testing: "<<endl;

        for(int i=0;i<size;i++){
                cout<<"          ";
                cin>>arrx[i];
                while(arrx[i]>1 || arrx[i]<0){
                        cout<<"Enter number again"<<endl;
                       cin>>arrx[i];

                }
        }

        lcg.bubble(arrx,size);

        cout<<"   ________________________________________________________"<<endl;
        cout<< "   |*** random number sorted : ";
        for(int i=0;i<size;i++){
                cout<<arrx[i]<<"    ";
	    }
        float arr2[size];
        for(int i=0;i<size;i++){
                arr2[i]=static_cast<float>(i+1)/size;
	    }
        cout<<endl;

        cout<< "   |***     CDF(i/n)         : ";
        for(int i=0;i<size;i++){
                cout<<arr2[i]<<"    ";
        }
        float arr3[size];
        for(int i=0;i<size;i++){
              arr3[i]=arr2[i]-arrx[i];
         }
        cout<<endl;

        cout<< "   |***       D+             : ";
        for(int i=0;i<size;i++){
              cout<< arr3[i]<<"    ";
        }
        float arr4[size];
                arr4[0]=arrx[0];
        for(int i=1;i<size;i++){
                arr4[i]=static_cast<float>(arrx[i])-arr2[i-1];
        }
        cout<<endl;

        cout<< "   |***       D-             : ";
       for(int i=0;i<size;i++){
            cout<<arr4[i]<<"    ";
       }
        cout<<endl;
        cout<<"   ________________________________________________________"<<endl;
        cout<<endl;

        float maxVal = lcg.mergeAndFindMax(arr3, size, arr4, size);
        cout<<"    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        cout << "    *** Maximum value in the merged array: " << maxVal <<"~"<<endl;
        cout<<"    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        cout<<endl;
        double cal,over;
        int alpha;
        cout<< "         ***  Number of alpha:-  "<<endl;
        cout<< "    ______________________________________________"<<endl;
        cout<< "    |         1-0.10                             | "<<endl;
        cout<< "    |         2-0.05                             | "<<endl;
        cout<< "    |         3-0.01                             | "<<endl;
        cout<< "    --------------------------------------------- "<<endl;
        cout<< "    *** Please,choose number of alpha:-  ";
        cout<<"     ";
        cin>>alpha;
        cout<<endl;
        cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        if(size<35){
          cal=lcg.testKs(alpha,size);
          if(maxVal<cal){
            cout<< "   ~ *** number random valid "<<endl;
            cout<< "   ~ *** critical value : "<<cal<<endl;
            }else{
                 cout<< "   ~ *** Number random not valid"<<endl;
            }
       }


       if(size>35){

                over=lcg.overTest(alpha,size);
                if(maxVal<over){
                cout<< "   ~ *** number random valid "<<endl;
                cout<< "   ~ *** critical value : "<<over<<endl;
              }else{
              cout<< "   ~ *** Number random not valid"<<endl;}
       }
       }else{
	      cout<<" ~~~~~~~~~~~~~~~~~~~~~~  EXIT PROGRAM  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
       }

      }
      if(start_choice==2){
            LaggedFibonacciGenerator lfg;
            lfg.L_F_G();
            lfg.generateSequence();
            lfg.printSequence();
      }
      if(start_choice==3){
                               cout << "                                      " << endl ;
        cout << "     **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-*" << endl ;
        cout << "     *-             Mid-Square Method                      -*" << endl ;
        cout << "     **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-*" << endl ;
        cout << "                                      " << endl ;

           long long seed;
           double n,m;
           cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
           cout<<"   ";
           cout << "*** Enter seed value: ";
            cout<<"   ";cin >> seed;
            cout << "*** Enter Modulous: ";
            cout<<"   ";cin >> m;

            cout<<"   ";
            cout << "*** Enter the number of random numbers to generate: ";
            cout<<"   ";cin >> n;
            cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
            cout<<endl;
            MidSquareRNG rng(seed);
            cout << "Generated random numbers:" <<endl;
            cout<< "    ______________________________________________"<<endl;
            for (int i = 0; i < n; ++i) {
            long long midNumbers = rng.generate();

            long long seed_power = seed * seed;
            cout << "X("<<i+1<<"):      " << midNumbers <<"     ";
            cout << "X("<<i+1<<")power2:" << seed_power <<"   ";
            cout << "R("<<i+1<<"): " << midNumbers / static_cast<double>(m) << endl;

            }
            cout<< "    ______________________________________________"<<endl;
            cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
      }
  if(start_choice==4){
        cout << "                                      " << endl ;
        cout << "   **-**-**-**-**-**-**-**-**-**-**-**-**" << endl ;
        cout << "  *-    Multiple Recursive Generator    -*" << endl ;
        cout << "   **-**-**-**-**-**-**-**-**-**-**-**-**" << endl ;
        cout << "                                            "<<endl;
        long long seeds[3];
        long long multipliers[3];
        long long modulus;
        int n;
        cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        cout<<"   ";
        cout << "*** Enter seeds: ";
        cout<<"   ";
        cout<<"   ";cin >> seeds[0] >> seeds[1] >> seeds[2];

        cout<<"   ";
        cout << "*** Enter multipliers: ";
        cout<<"   ";cout<<"   ";
        cin >> multipliers[0] >> multipliers[1] >> multipliers[2];

        cout << "*** Enter modulus: ";
        cout<<"   "; cin >> modulus;

        cout << "*** Enter the number of random numbers to generate: ";
        cout<<"   ";cin >> n;
          MRGRNG rng(seeds[0], seeds[1], seeds[2], modulus, multipliers[0], multipliers[1], multipliers[2]);
        cout << "*** Generated random numbers:" << endl;
          for (int i = 0; i < n; ++i) {
            cout<<"   "; cout << rng.generate() << endl;
          }
          cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
      }
      if(start_choice==5){
             exit(0) ;
      }

    return 0;
}
