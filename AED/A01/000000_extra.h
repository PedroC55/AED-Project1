//
// Tomás Oliveira e Silva, AED, November 2021
//
// List of small subset sum problems for the student with number 0 --- 128-bit version
//

#define min_n       10
#define max_n       64
#define n_sums      20
#define n_problems  (max_n - min_n + 1)

typedef unsigned __int128 integer_t; // 128-bit unsigned integer

typedef struct
{
  int n;                   // number of elements of the set (for a valid problem, min_n <= n <= max_n)
  integer_t p[max_n];      // the elements of the set, already sorted in increasing order (only the first n elements are used)
  integer_t sums[n_sums];  // several sums (problem: for each sum find the corresponding subset)
}
subset_sum_problem_data_t; // weights p[] and sums for a given value of n

subset_sum_problem_data_t all_subset_sum_problems[n_problems + 1] = // the list of problems is terminated with an extra entry with n=0
{
  {
    10,
    {
      (integer_t)234ull,
      (integer_t)429ull,
      (integer_t)769ull,
      (integer_t)835ull,
      (integer_t)858ull,
      (integer_t)874ull,
      (integer_t)998ull,
      (integer_t)1200ull,
      (integer_t)1592ull,
      (integer_t)1655ull
    },
    {
      (integer_t)5963ull, // 0111111100
      (integer_t)5105ull, // 0111011100
      (integer_t)4376ull, // 1100100101
      (integer_t)5339ull, // 1111011100
      (integer_t)7840ull, // 1100111111
      (integer_t)4367ull, // 1011010001
      (integer_t)5161ull, // 1110010101
      (integer_t)4219ull, // 0100001110
      (integer_t)4430ull, // 1101110100
      (integer_t)1432ull, // 1110000000
      (integer_t)7411ull, // 1000111111
      (integer_t)5319ull, // 0110010011
      (integer_t)3120ull, // 0101101000
      (integer_t)8180ull, // 1010111111
      (integer_t)2356ull, // 1101100000
      (integer_t)4533ull, // 1001011010
      (integer_t)6138ull, // 0111100011
      (integer_t)5174ull, // 1001100011
      (integer_t)3930ull, // 0000111100
      (integer_t)769ull // 0010000000
    }
  },
  {
    11,
    {
      (integer_t)304ull,
      (integer_t)526ull,
      (integer_t)575ull,
      (integer_t)609ull,
      (integer_t)856ull,
      (integer_t)1088ull,
      (integer_t)1823ull,
      (integer_t)1856ull,
      (integer_t)3071ull,
      (integer_t)3499ull,
      (integer_t)3663ull
    },
    {
      (integer_t)9146ull, // 10110100110
      (integer_t)10599ull, // 01000110011
      (integer_t)6901ull, // 01001001001
      (integer_t)8035ull, // 00011000110
      (integer_t)11816ull, // 01110101011
      (integer_t)9401ull, // 01010111010
      (integer_t)11283ull, // 10011101110
      (integer_t)6116ull, // 01101100100
      (integer_t)3533ull, // 01110010000
      (integer_t)11414ull, // 10011110101
      (integer_t)10775ull, // 01000011110
      (integer_t)9423ull, // 11101000011
      (integer_t)6570ull, // 00000000110
      (integer_t)7815ull, // 11100110010
      (integer_t)10370ull, // 00001101110
      (integer_t)8095ull, // 10110101001
      (integer_t)2248ull, // 10001100000
      (integer_t)6925ull, // 11010010001
      (integer_t)11329ull, // 10111010011
      (integer_t)11266ull // 10001101011
    }
  },
  {
    12,
    {
      (integer_t)1462ull,
      (integer_t)1671ull,
      (integer_t)2219ull,
      (integer_t)2381ull,
      (integer_t)2843ull,
      (integer_t)2924ull,
      (integer_t)3217ull,
      (integer_t)3300ull,
      (integer_t)3519ull,
      (integer_t)3571ull,
      (integer_t)4429ull,
      (integer_t)4804ull
    },
    {
      (integer_t)23348ull, // 101111001110
      (integer_t)19571ull, // 100101000111
      (integer_t)19708ull, // 010010011101
      (integer_t)13243ull, // 110100010010
      (integer_t)18367ull, // 001111000110
      (integer_t)23675ull, // 010100011111
      (integer_t)23864ull, // 010001111011
      (integer_t)18579ull, // 100100101110
      (integer_t)12247ull, // 001110000001
      (integer_t)24847ull, // 000110011111
      (integer_t)19537ull, // 011010000111
      (integer_t)19829ull, // 101111000110
      (integer_t)17590ull, // 110110000011
      (integer_t)13842ull, // 001000011001
      (integer_t)18304ull, // 111111000001
      (integer_t)18037ull, // 000010011101
      (integer_t)26768ull, // 110110111101
      (integer_t)16157ull, // 000011011100
      (integer_t)24545ull, // 000110110111
      (integer_t)16376ull // 100100010011
    }
  },
  {
    13,
    {
      (integer_t)724ull,
      (integer_t)1021ull,
      (integer_t)2901ull,
      (integer_t)5621ull,
      (integer_t)6513ull,
      (integer_t)7405ull,
      (integer_t)8219ull,
      (integer_t)9433ull,
      (integer_t)10092ull,
      (integer_t)10339ull,
      (integer_t)11242ull,
      (integer_t)11423ull,
      (integer_t)11607ull
    },
    {
      (integer_t)81011ull, // 1001111111110
      (integer_t)64557ull, // 1010001111101
      (integer_t)66868ull, // 1010111111100
      (integer_t)45656ull, // 1000110101100
      (integer_t)40873ull, // 0001110010100
      (integer_t)46553ull, // 0010111010010
      (integer_t)47028ull, // 0001001001101
      (integer_t)27951ull, // 0100010110000
      (integer_t)50734ull, // 0001110101010
      (integer_t)33915ull, // 0010000101100
      (integer_t)26468ull, // 0101001000001
      (integer_t)22665ull, // 0000000000110
      (integer_t)62872ull, // 1101111001011
      (integer_t)59431ull, // 0001111011100
      (integer_t)66599ull, // 1011101101101
      (integer_t)42708ull, // 0101101010100
      (integer_t)15753ull, // 0100101000000
      (integer_t)40527ull, // 0000010010011
      (integer_t)56371ull, // 1001010101101
      (integer_t)33066ull // 0010001001001
    }
  },
  {
    14,
    {
      (integer_t)1340ull,
      (integer_t)2599ull,
      (integer_t)3324ull,
      (integer_t)9247ull,
      (integer_t)10053ull,
      (integer_t)18795ull,
      (integer_t)18841ull,
      (integer_t)18887ull,
      (integer_t)20831ull,
      (integer_t)21818ull,
      (integer_t)23514ull,
      (integer_t)26168ull,
      (integer_t)26191ull,
      (integer_t)28890ull
    },
    {
      (integer_t)145378ull, // 11101111110001
      (integer_t)133952ull, // 11000101111100
      (integer_t)134237ull, // 10010001001111
      (integer_t)136519ull, // 00111001110110
      (integer_t)110134ull, // 01001001001011
      (integer_t)118290ull, // 00000001101101
      (integer_t)96746ull, // 01111000011010
      (integer_t)83541ull, // 11001010010001
      (integer_t)45000ull, // 01000001001000
      (integer_t)58709ull, // 00101000011000
      (integer_t)199857ull, // 10101011111111
      (integer_t)121545ull, // 00100100101011
      (integer_t)169203ull, // 01101111101110
      (integer_t)124481ull, // 10010010111001
      (integer_t)67218ull, // 11110000010001
      (integer_t)130781ull, // 01011111000110
      (integer_t)113599ull, // 11010000011011
      (integer_t)128010ull, // 10001001110011
      (integer_t)101154ull, // 01010100101100
      (integer_t)116667ull // 00011100001101
    }
  },
  {
    15,
    {
      (integer_t)5956ull,
      (integer_t)10669ull,
      (integer_t)11912ull,
      (integer_t)21338ull,
      (integer_t)29780ull,
      (integer_t)35423ull,
      (integer_t)47183ull,
      (integer_t)51610ull,
      (integer_t)60973ull,
      (integer_t)62538ull,
      (integer_t)67868ull,
      (integer_t)70135ull,
      (integer_t)75427ull,
      (integer_t)78073ull,
      (integer_t)82374ull
    },
    {
      (integer_t)300710ull, // 011101000010110
      (integer_t)253043ull, // 111111000100100
      (integer_t)288437ull, // 111100101110000
      (integer_t)415088ull, // 001111101110010
      (integer_t)380896ull, // 001101110011100
      (integer_t)420299ull, // 001000011011101
      (integer_t)298025ull, // 101001110010010
      (integer_t)531675ull, // 101000111111110
      (integer_t)403901ull, // 010101101010011
      (integer_t)332851ull, // 000011010100110
      (integer_t)303782ull, // 111000010001110
      (integer_t)238605ull, // 010000000001101
      (integer_t)104257ull, // 100110100000000
      (integer_t)172492ull, // 011110110000000
      (integer_t)328726ull, // 101101101010010
      (integer_t)311511ull, // 111010011100010
      (integer_t)595383ull, // 101101111111011
      (integer_t)311200ull, // 100100000110110
      (integer_t)480251ull, // 101111111011010
      (integer_t)415184ull // 110011100101110
    }
  },
  {
    16,
    {
      (integer_t)3785ull,
      (integer_t)4655ull,
      (integer_t)4932ull,
      (integer_t)9934ull,
      (integer_t)11210ull,
      (integer_t)12120ull,
      (integer_t)47204ull,
      (integer_t)52410ull,
      (integer_t)54774ull,
      (integer_t)67072ull,
      (integer_t)68305ull,
      (integer_t)71444ull,
      (integer_t)122907ull,
      (integer_t)131678ull,
      (integer_t)132771ull,
      (integer_t)143323ull
    },
    {
      (integer_t)255850ull, // 0000000010100010
      (integer_t)468989ull, // 1111000111110100
      (integer_t)391313ull, // 1000000010100110
      (integer_t)400691ull, // 0011101100000101
      (integer_t)287404ull, // 1101110111010000
      (integer_t)659199ull, // 0110101011011101
      (integer_t)461240ull, // 0111000110101001
      (integer_t)457592ull, // 1000011101000101
      (integer_t)691802ull, // 0111110011111110
      (integer_t)652030ull, // 1011111110101110
      (integer_t)637312ull, // 0100001010001111
      (integer_t)367325ull, // 1001111000110001
      (integer_t)475656ull, // 0011111110110001
      (integer_t)577553ull, // 0100011010011110
      (integer_t)563224ull, // 1111111011010011
      (integer_t)617358ull, // 1101000000101111
      (integer_t)374298ull, // 1010101110100100
      (integer_t)527165ull, // 1101000111101001
      (integer_t)416225ull, // 0010010010100011
      (integer_t)525273ull // 1010001000011101
    }
  },
  {
    17,
    {
      (integer_t)1358ull,
      (integer_t)3395ull,
      (integer_t)7469ull,
      (integer_t)14259ull,
      (integer_t)27160ull,
      (integer_t)28711ull,
      (integer_t)57036ull,
      (integer_t)60138ull,
      (integer_t)98222ull,
      (integer_t)108284ull,
      (integer_t)112714ull,
      (integer_t)117560ull,
      (integer_t)118964ull,
      (integer_t)194407ull,
      (integer_t)227465ull,
      (integer_t)235212ull,
      (integer_t)239873ull
    },
    {
      (integer_t)880558ull, // 01101101110101010
      (integer_t)777584ull, // 10110101111010100
      (integer_t)1236070ull, // 11000011100011111
      (integer_t)1065789ull, // 11110111001011101
      (integer_t)799979ull, // 00100110001010011
      (integer_t)697226ull, // 00000011001000101
      (integer_t)704964ull, // 11101110011010001
      (integer_t)620975ull, // 00000010110100001
      (integer_t)451132ull, // 11000000110000001
      (integer_t)1131025ull, // 11110000101111110
      (integer_t)1139492ull, // 11001101001111011
      (integer_t)1227034ull, // 11001101111101011
      (integer_t)945275ull, // 00001000110110011
      (integer_t)888879ull, // 10100110111000011
      (integer_t)1048365ull, // 10110111011111100
      (integer_t)587794ull, // 11000001101101000
      (integer_t)513154ull, // 01111000011000001
      (integer_t)772615ull, // 01110110000001101
      (integer_t)496587ull, // 00110100101000010
      (integer_t)614431ull // 10000001110010100
    }
  },
  {
    18,
    {
      (integer_t)28726ull,
      (integer_t)38272ull,
      (integer_t)140204ull,
      (integer_t)193311ull,
      (integer_t)196203ull,
      (integer_t)250763ull,
      (integer_t)276297ull,
      (integer_t)291037ull,
      (integer_t)308215ull,
      (integer_t)322962ull,
      (integer_t)353017ull,
      (integer_t)365383ull,
      (integer_t)388763ull,
      (integer_t)429385ull,
      (integer_t)439729ull,
      (integer_t)490714ull,
      (integer_t)526826ull,
      (integer_t)542250ull
    },
    {
      (integer_t)1519066ull, // 000100001000000110
      (integer_t)4193649ull, // 000110111111110011
      (integer_t)2154170ull, // 101000100110000101
      (integer_t)3073437ull, // 001111011100101001
      (integer_t)2978404ull, // 111010000101011110
      (integer_t)2854807ull, // 001111000111000101
      (integer_t)3584200ull, // 110010110001101111
      (integer_t)1689818ull, // 000011100000001010
      (integer_t)3011641ull, // 010000001110010111
      (integer_t)3916031ull, // 000000011111111110
      (integer_t)3389642ull, // 010100101110101011
      (integer_t)2780868ull, // 110110010101110010
      (integer_t)2792316ull, // 000101111000001101
      (integer_t)2734606ull, // 100111101111001000
      (integer_t)3521533ull, // 011011010011011110
      (integer_t)2492390ull, // 100010000001011101
      (integer_t)948825ull, // 100000000000010100
      (integer_t)2088174ull, // 111100100000011001
      (integer_t)3181001ull, // 010111010001101110
      (integer_t)3229503ull // 111010100101101101
    }
  },
  {
    19,
    {
      (integer_t)83373ull,
      (integer_t)139555ull,
      (integer_t)176607ull,
      (integer_t)339731ull,
      (integer_t)436401ull,
      (integer_t)455717ull,
      (integer_t)461978ull,
      (integer_t)502855ull,
      (integer_t)530271ull,
      (integer_t)546779ull,
      (integer_t)557012ull,
      (integer_t)597933ull,
      (integer_t)618119ull,
      (integer_t)680137ull,
      (integer_t)828653ull,
      (integer_t)855844ull,
      (integer_t)883842ull,
      (integer_t)1019259ull,
      (integer_t)1059631ull
    },
    {
      (integer_t)4753249ull, // 1110110001101001100
      (integer_t)5162329ull, // 0011110011010000011
      (integer_t)2869125ull, // 0001100000100101000
      (integer_t)7203755ull, // 0100011011010110111
      (integer_t)3412840ull, // 1000001100000111000
      (integer_t)4697724ull, // 0011000011011010001
      (integer_t)6567506ull, // 0111001110010001111
      (integer_t)4330566ull, // 0011001101001011000
      (integer_t)5464869ull, // 0011100100100110101
      (integer_t)5066426ull, // 0111011010010111000
      (integer_t)3809890ull, // 1010100010000100110
      (integer_t)5393136ull, // 1010110100110100110
      (integer_t)7133014ull, // 1011010011100111011
      (integer_t)4804082ull, // 0101001001100100011
      (integer_t)3640348ull, // 0101100010101000010
      (integer_t)2796126ull, // 0111000100001000010
      (integer_t)5704271ull, // 1001111000110010101
      (integer_t)5421777ull, // 0001111001010100110
      (integer_t)5953723ull, // 1100101110011100110
      (integer_t)5665162ull // 0010111001000110011
    }
  },
  {
    20,
    {
      (integer_t)79010ull,
      (integer_t)94231ull,
      (integer_t)170944ull,
      (integer_t)196348ull,
      (integer_t)270282ull,
      (integer_t)275073ull,
      (integer_t)288567ull,
      (integer_t)435036ull,
      (integer_t)542988ull,
      (integer_t)550146ull,
      (integer_t)642472ull,
      (integer_t)685287ull,
      (integer_t)700527ull,
      (integer_t)710764ull,
      (integer_t)852207ull,
      (integer_t)870072ull,
      (integer_t)878540ull,
      (integer_t)929918ull,
      (integer_t)956550ull,
      (integer_t)1100292ull
    },
    {
      (integer_t)4891057ull, // 01101000010000011011
      (integer_t)7730928ull, // 01100101111011110110
      (integer_t)4822089ull, // 00000100010101111000
      (integer_t)5992915ull, // 01001100110011011001
      (integer_t)7170403ull, // 10000011011101110011
      (integer_t)6600780ull, // 01011011000100111101
      (integer_t)5008529ull, // 01011101100110100010
      (integer_t)2665753ull, // 00101010010110000000
      (integer_t)5529097ull, // 10011001101001110100
      (integer_t)4370305ull, // 01111011011000110000
      (integer_t)3404879ull, // 11011000000000001110
      (integer_t)5795926ull, // 00100010111010010101
      (integer_t)5933036ull, // 01101101110100100011
      (integer_t)5359874ull, // 01011011000111001001
      (integer_t)5592568ull, // 11010001100101011001
      (integer_t)7159996ull, // 01011101111111000011
      (integer_t)4498476ull, // 00100110100110001010
      (integer_t)6932498ull, // 10001010110101011011
      (integer_t)4115136ull, // 00010011100000110100
      (integer_t)6526199ull // 01111010101100011110
    }
  },
  {
    21,
    {
      (integer_t)78097ull,
      (integer_t)261169ull,
      (integer_t)497213ull,
      (integer_t)589808ull,
      (integer_t)1389125ull,
      (integer_t)1466514ull,
      (integer_t)1855322ull,
      (integer_t)2166741ull,
      (integer_t)2433354ull,
      (integer_t)2546083ull,
      (integer_t)2646130ull,
      (integer_t)3666285ull,
      (integer_t)3907818ull,
      (integer_t)4133451ull,
      (integer_t)4244764ull,
      (integer_t)4882608ull,
      (integer_t)5092166ull,
      (integer_t)5179096ull,
      (integer_t)5225393ull,
      (integer_t)5292260ull,
      (integer_t)5732526ull
    },
    {
      (integer_t)47130434ull, // 101101110101101111101
      (integer_t)28248381ull, // 001100000010011001101
      (integer_t)36612620ull, // 001011111010110010011
      (integer_t)33495805ull, // 000101110111110000110
      (integer_t)49896312ull, // 001111011100111011111
      (integer_t)29396810ull, // 110011110010010100110
      (integer_t)23140865ull, // 010111111001010001000
      (integer_t)35968317ull, // 101011000011000110111
      (integer_t)31607611ull, // 010011011011111000010
      (integer_t)19868084ull, // 001110101111001000000
      (integer_t)30231017ull, // 011100000101111010010
      (integer_t)39352066ull, // 000101110001011011101
      (integer_t)42921887ull, // 001111111111011101100
      (integer_t)31063955ull, // 011010000001100010111
      (integer_t)28360690ull, // 011101000101010110100
      (integer_t)26189291ull, // 011010000110011001010
      (integer_t)18191757ull, // 101100010000001100001
      (integer_t)27092626ull, // 001111011100000011001
      (integer_t)19872046ull, // 110000000011110001000
      (integer_t)24061108ull // 011100010110000101010
    }
  },
  {
    22,
    {
      (integer_t)992937ull,
      (integer_t)1754867ull,
      (integer_t)1985874ull,
      (integer_t)2097016ull,
      (integer_t)2611344ull,
      (integer_t)2887334ull,
      (integer_t)3467821ull,
      (integer_t)3509734ull,
      (integer_t)4096228ull,
      (integer_t)4380410ull,
      (integer_t)4753166ull,
      (integer_t)5015641ull,
      (integer_t)5056295ull,
      (integer_t)5699939ull,
      (integer_t)5774668ull,
      (integer_t)6044912ull,
      (integer_t)6160255ull,
      (integer_t)6188629ull,
      (integer_t)6594430ull,
      (integer_t)6825223ull,
      (integer_t)6931429ull,
      (integer_t)7019468ull
    },
    {
      (integer_t)57417954ull, // 0010001001101110110011
      (integer_t)45074012ull, // 1100010010011101001010
      (integer_t)48201442ull, // 1111101010001100001101
      (integer_t)52491908ull, // 0001001011000101101011
      (integer_t)62274228ull, // 1101011100111010010111
      (integer_t)47711271ull, // 1001000011100110100110
      (integer_t)40551054ull, // 0111110100000100100101
      (integer_t)37657652ull, // 0110000001011001001100
      (integer_t)53159765ull, // 0110001100110001011101
      (integer_t)45946550ull, // 1011011100010001010110
      (integer_t)30414390ull, // 1000000010000001110010
      (integer_t)47804031ull, // 0001111010000001101101
      (integer_t)52101896ull, // 0111111101100110100001
      (integer_t)65755448ull, // 1011111011001110101011
      (integer_t)30037935ull, // 0010010011100010100000
      (integer_t)57283339ull, // 1100011001010011010111
      (integer_t)36928727ull, // 1011000000000011010101
      (integer_t)44994111ull, // 0101110000110000111010
      (integer_t)65701368ull, // 0001011110100111001111
      (integer_t)36805639ull // 0001101000101100010010
    }
  },
  {
    23,
    {
      (integer_t)2689008ull,
      (integer_t)4058667ull,
      (integer_t)4459123ull,
      (integer_t)4859579ull,
      (integer_t)5882994ull,
      (integer_t)6301249ull,
      (integer_t)6867355ull,
      (integer_t)7725830ull,
      (integer_t)7802959ull,
      (integer_t)8875131ull,
      (integer_t)10307834ull,
      (integer_t)10723046ull,
      (integer_t)11535243ull,
      (integer_t)11803611ull,
      (integer_t)13582073ull,
      (integer_t)15097174ull,
      (integer_t)15756089ull,
      (integer_t)16234668ull,
      (integer_t)17622231ull,
      (integer_t)18020372ull,
      (integer_t)19645922ull,
      (integer_t)20465497ull,
      (integer_t)20563728ull
    },
    {
      (integer_t)87522622ull, // 01010000000110000100110
      (integer_t)154888838ull, // 01000100111001011110011
      (integer_t)90234321ull, // 10110101110100000100001
      (integer_t)134589903ull, // 01111011000100101000111
      (integer_t)119894208ull, // 00111001100000010110101
      (integer_t)180106180ull, // 00010001100111101011111
      (integer_t)103394564ull, // 01010101011001100100100
      (integer_t)148706730ull, // 01110110000111001111010
      (integer_t)174233389ull, // 01110011011110011110110
      (integer_t)84279832ull, // 00000100101100110000010
      (integer_t)90425665ull, // 11001100010100010100001
      (integer_t)117496049ull, // 00100000110011001100011
      (integer_t)101478550ull, // 11011101110000010010001
      (integer_t)148169415ull, // 11011001011111110000011
      (integer_t)121288645ull, // 01010001110010001000111
      (integer_t)137528639ull, // 10111000001110101010110
      (integer_t)81235241ull, // 00000101011001001000010
      (integer_t)107943883ull, // 10000100101001011010001
      (integer_t)138607923ull, // 01011101110101001101001
      (integer_t)135840017ull // 11111000101011000111001
    }
  },
  {
    24,
    {
      (integer_t)52606ull,
      (integer_t)734211ull,
      (integer_t)3694679ull,
      (integer_t)3890643ull,
      (integer_t)3995855ull,
      (integer_t)4705844ull,
      (integer_t)5267715ull,
      (integer_t)5659643ull,
      (integer_t)5709576ull,
      (integer_t)9249708ull,
      (integer_t)9751574ull,
      (integer_t)10888073ull,
      (integer_t)11319286ull,
      (integer_t)12234996ull,
      (integer_t)12735643ull,
      (integer_t)12811090ull,
      (integer_t)12935375ull,
      (integer_t)13793572ull,
      (integer_t)16688706ull,
      (integer_t)17192974ull,
      (integer_t)21574858ull,
      (integer_t)23002785ull,
      (integer_t)23349643ull,
      (integer_t)23443724ull
    },
    {
      (integer_t)68013949ull, // 100001000001010000100001
      (integer_t)164607904ull, // 010101111110010011110011
      (integer_t)100487532ull, // 111110010101110000011000
      (integer_t)98864251ull, // 001001100100000100100101
      (integer_t)146152666ull, // 111100101001001111010101
      (integer_t)159950116ull, // 001110110110000111111001
      (integer_t)164517927ull, // 010111000110100100101111
      (integer_t)162961798ull, // 011100010100100101111110
      (integer_t)118315771ull, // 110000110011100010101001
      (integer_t)162691327ull, // 110111001011011010101011
      (integer_t)125642839ull, // 100011001101010000111010
      (integer_t)150210907ull, // 110111110100101001111010
      (integer_t)139066256ull, // 010101111110101100110010
      (integer_t)136807020ull, // 010100100110111101001001
      (integer_t)145322666ull, // 110101011100010111010110
      (integer_t)127531148ull, // 100010101001001110100101
      (integer_t)137322235ull, // 101110001010010010101011
      (integer_t)177930429ull, // 001011000111111001011011
      (integer_t)102341892ull, // 110011011100101101001000
      (integer_t)70337403ull // 010010000000011000010001
    }
  },
  {
    25,
    {
      (integer_t)3223897ull,
      (integer_t)4915714ull,
      (integer_t)8756753ull,
      (integer_t)11436363ull,
      (integer_t)12746690ull,
      (integer_t)12754704ull,
      (integer_t)18818590ull,
      (integer_t)20824285ull,
      (integer_t)21530031ull,
      (integer_t)22429220ull,
      (integer_t)23699316ull,
      (integer_t)26731259ull,
      (integer_t)27013027ull,
      (integer_t)29171622ull,
      (integer_t)30651911ull,
      (integer_t)35349674ull,
      (integer_t)36836655ull,
      (integer_t)38794399ull,
      (integer_t)39720973ull,
      (integer_t)43060062ull,
      (integer_t)47539516ull,
      (integer_t)48706030ull,
      (integer_t)52318765ull,
      (integer_t)55468213ull,
      (integer_t)57175502ull
    },
    {
      (integer_t)301504335ull, // 1000111100010110010000110
      (integer_t)390302612ull, // 0000110011110011000101011
      (integer_t)330806232ull, // 1010001110011110000101100
      (integer_t)302713449ull, // 0100110100001100010001110
      (integer_t)214415636ull, // 1110100000010011001000100
      (integer_t)207336544ull, // 0010111000100000010101000
      (integer_t)410428975ull, // 0001010011100111110110001
      (integer_t)186978283ull, // 1011010100100010110000000
      (integer_t)224631870ull, // 1101000111010011000010000
      (integer_t)347437390ull, // 1000011011011000110111000
      (integer_t)480195686ull, // 0100101110000101110011111
      (integer_t)311565196ull, // 0010001010110101001000110
      (integer_t)316461948ull, // 1001010110010001100110001
      (integer_t)274758078ull, // 0001010101101011000110000
      (integer_t)291020947ull, // 1011110110011010111000000
      (integer_t)365518331ull, // 0000100101011010101011100
      (integer_t)204270440ull, // 1011111000000010000001001
      (integer_t)391491748ull, // 0000110101000100100101111
      (integer_t)347895449ull, // 0011101111001101010001100
      (integer_t)317047965ull // 1100011111100010000001101
    }
  },
  {
    26,
    {
      (integer_t)2466211ull,
      (integer_t)7216657ull,
      (integer_t)7448106ull,
      (integer_t)16610086ull,
      (integer_t)22575767ull,
      (integer_t)42988045ull,
      (integer_t)45151534ull,
      (integer_t)51677643ull,
      (integer_t)63136174ull,
      (integer_t)70724741ull,
      (integer_t)72966453ull,
      (integer_t)73099964ull,
      (integer_t)78120443ull,
      (integer_t)87729154ull,
      (integer_t)89721542ull,
      (integer_t)92528401ull,
      (integer_t)98663565ull,
      (integer_t)101204898ull,
      (integer_t)103495393ull,
      (integer_t)108551857ull,
      (integer_t)111089352ull,
      (integer_t)112878835ull,
      (integer_t)113561425ull,
      (integer_t)119746239ull,
      (integer_t)120525800ull,
      (integer_t)126211267ull
    },
    {
      (integer_t)710865676ull, // 11100001100101101010000001
      (integer_t)908133455ull, // 00000111111101111000000100
      (integer_t)836107321ull, // 00000101111010000101000011
      (integer_t)648041234ull, // 01011100011100000001001100
      (integer_t)816513480ull, // 00000011011101010101010000
      (integer_t)1326180189ull, // 00011111011011111101011010
      (integer_t)1051714237ull, // 10010111001100011110101001
      (integer_t)898035851ull, // 11011001001001011100101100
      (integer_t)878617433ull, // 01101101110100100101000110
      (integer_t)1007778840ull, // 01011110100110011100000111
      (integer_t)995194070ull, // 11110110101010101000110011
      (integer_t)843216729ull, // 01011000101111100100100100
      (integer_t)918038406ull, // 01100010011100101001110010
      (integer_t)965668999ull, // 01001001010110001101001110
      (integer_t)1049822860ull, // 11111001111100010101010011
      (integer_t)1015222189ull, // 01001010101110110000110011
      (integer_t)731815207ull, // 00100001111110010001001000
      (integer_t)1098655719ull, // 00101100111000111111101000
      (integer_t)880538404ull, // 01001100010011000110000111
      (integer_t)1063993520ull // 01110111010110001001111001
    }
  },
  {
    27,
    {
      (integer_t)47575763ull,
      (integer_t)49174861ull,
      (integer_t)76532942ull,
      (integer_t)86902128ull,
      (integer_t)97308342ull,
      (integer_t)99130757ull,
      (integer_t)99391102ull,
      (integer_t)104571105ull,
      (integer_t)119856871ull,
      (integer_t)138202852ull,
      (integer_t)142842166ull,
      (integer_t)149086653ull,
      (integer_t)155047983ull,
      (integer_t)204942551ull,
      (integer_t)210704864ull,
      (integer_t)222627524ull,
      (integer_t)226710153ull,
      (integer_t)244238179ull,
      (integer_t)258837761ull,
      (integer_t)267077979ull,
      (integer_t)270912286ull,
      (integer_t)276975426ull,
      (integer_t)285602690ull,
      (integer_t)285678203ull,
      (integer_t)289694154ull,
      (integer_t)289768210ull,
      (integer_t)299251714ull
    },
    {
      (integer_t)2318431001ull, // 110011000101101000111010010
      (integer_t)2373934147ull, // 111010011101000101100100101
      (integer_t)3032620164ull, // 001110001011011001100101111
      (integer_t)2054863196ull, // 100110100000010111110000001
      (integer_t)2873721591ull, // 001101110110001010011011110
      (integer_t)2169599010ull, // 011010111000010000010011110
      (integer_t)2364971860ull, // 011010000011010000111111000
      (integer_t)2588683146ull, // 011100001111011000100101101
      (integer_t)3158835732ull, // 010101101110111101111000101
      (integer_t)2522696359ull, // 110000000101000101101110110
      (integer_t)1993142709ull, // 001000000011110110101010000
      (integer_t)1683409472ull, // 100100101101000010110000010
      (integer_t)1500270894ull, // 100110000000100000011001010
      (integer_t)2115328686ull, // 000100010010010011101001100
      (integer_t)3253816331ull, // 100001110110011010101011111
      (integer_t)3038597271ull, // 001101000101110011111011100
      (integer_t)1311219460ull, // 010010101000011001000010000
      (integer_t)2144576976ull, // 000011010101001011000001101
      (integer_t)3023479336ull, // 101001111111001110011111000
      (integer_t)2109813379ull // 110001010100110110000110001
    }
  },
  {
    28,
    {
      (integer_t)27167660ull,
      (integer_t)59585638ull,
      (integer_t)106622339ull,
      (integer_t)166644199ull,
      (integer_t)227458101ull,
      (integer_t)235984984ull,
      (integer_t)332674266ull,
      (integer_t)370545657ull,
      (integer_t)376640307ull,
      (integer_t)377791986ull,
      (integer_t)378393748ull,
      (integer_t)381145136ull,
      (integer_t)398990944ull,
      (integer_t)414448918ull,
      (integer_t)449501907ull,
      (integer_t)480603973ull,
      (integer_t)498114941ull,
      (integer_t)555245538ull,
      (integer_t)561538541ull,
      (integer_t)580504216ull,
      (integer_t)662301207ull,
      (integer_t)673727985ull,
      (integer_t)681582261ull,
      (integer_t)696587726ull,
      (integer_t)722162521ull,
      (integer_t)732359615ull,
      (integer_t)747191748ull,
      (integer_t)774783219ull
    },
    {
      (integer_t)7269824966ull, // 0110000000101001111101001111
      (integer_t)5467162276ull, // 1000100011110010110001000011
      (integer_t)5689843642ull, // 1100111110101101101100000010
      (integer_t)5854112750ull, // 0101010011010100101100001110
      (integer_t)6315671236ull, // 0100000101111100101000111001
      (integer_t)6388693377ull, // 1100010001000011010100111011
      (integer_t)9248376055ull, // 0011011101110101011101110111
      (integer_t)7392533951ull, // 0100010010111010101111101100
      (integer_t)8209995118ull, // 0100011110100001101011111110
      (integer_t)7627955820ull, // 0010111010011110001110110011
      (integer_t)8309615668ull, // 1000001111110011101110111100
      (integer_t)6258216608ull, // 0111011011110001100010001110
      (integer_t)3200288538ull, // 1101000011001001000100000100
      (integer_t)7332860172ull, // 0011111111101110000011100110
      (integer_t)6950319317ull, // 1001001110101010111001100110
      (integer_t)7395819696ull, // 1010111011101110100001011110
      (integer_t)6444772557ull, // 0110011001011100000101101110
      (integer_t)6595608505ull, // 1001101011111101111000011000
      (integer_t)6539418458ull, // 0110101110110110001010010011
      (integer_t)7223920008ull // 1101111110000101110100011110
    }
  },
  {
    29,
    {
      (integer_t)36801726ull,
      (integer_t)91270181ull,
      (integer_t)122245839ull,
      (integer_t)168886639ull,
      (integer_t)217194106ull,
      (integer_t)400435126ull,
      (integer_t)451210468ull,
      (integer_t)476600309ull,
      (integer_t)495001172ull,
      (integer_t)514373197ull,
      (integer_t)571032529ull,
      (integer_t)633250435ull,
      (integer_t)741649110ull,
      (integer_t)747248813ull,
      (integer_t)814373587ull,
      (integer_t)934314174ull,
      (integer_t)953200618ull,
      (integer_t)998474404ull,
      (integer_t)1008454095ull,
      (integer_t)1060195204ull,
      (integer_t)1139253348ull,
      (integer_t)1158206705ull,
      (integer_t)1159919408ull,
      (integer_t)1229015637ull,
      (integer_t)1257057648ull,
      (integer_t)1289282205ull,
      (integer_t)1305800227ull,
      (integer_t)1335933511ull,
      (integer_t)1359259164ull
    },
    {
      (integer_t)10884690324ull, // 00100101100101101000011100011
      (integer_t)10609159127ull, // 00110001111110000011101101000
      (integer_t)13554554285ull, // 10011110110101110011110111000
      (integer_t)8052054949ull, // 01000001110100010010000010110
      (integer_t)11649687572ull, // 11100001011101000011010100111
      (integer_t)11822399990ull, // 01011101111000101100110101100
      (integer_t)10183485507ull, // 00110000001101011010100011001
      (integer_t)7688422857ull, // 10001000111110001010010000001
      (integer_t)10909513092ull, // 00000110010101010011000101110
      (integer_t)12822153148ull, // 10111000100100111101010100111
      (integer_t)11045964918ull, // 01011000000001111110010001101
      (integer_t)10907933194ull, // 10011000101110100010101010101
      (integer_t)5543237403ull, // 00000001000001001110000000001
      (integer_t)7242151827ull, // 00100000100001010000011001010
      (integer_t)12195032048ull, // 01111010001011101101000010111
      (integer_t)10125141528ull, // 01111011101001110000010101001
      (integer_t)10151878927ull, // 11100010100010010000111110010
      (integer_t)8738422056ull, // 01010010010101000010100001011
      (integer_t)5674047204ull, // 00100001000000101010101000000
      (integer_t)7995233868ull // 01100111100101001010000010001
    }
  },
  {
    30,
    {
      (integer_t)4733383ull,
      (integer_t)459038012ull,
      (integer_t)845196071ull,
      (integer_t)863957623ull,
      (integer_t)880208960ull,
      (integer_t)972580103ull,
      (integer_t)986157913ull,
      (integer_t)1035184537ull,
      (integer_t)1161806693ull,
      (integer_t)1366997292ull,
      (integer_t)1376464058ull,
      (integer_t)1396987964ull,
      (integer_t)1497198457ull,
      (integer_t)1616454511ull,
      (integer_t)1830443698ull,
      (integer_t)2058698111ull,
      (integer_t)2077162237ull,
      (integer_t)2185459323ull,
      (integer_t)2323613386ull,
      (integer_t)2329358136ull,
      (integer_t)2396935649ull,
      (integer_t)2412783232ull,
      (integer_t)2542621471ull,
      (integer_t)2654808058ull,
      (integer_t)2733994584ull,
      (integer_t)2793975928ull,
      (integer_t)2816783074ull,
      (integer_t)2929008841ull,
      (integer_t)2951756637ull,
      (integer_t)3069060397ull
    },
    {
      (integer_t)31180402230ull, // 100011111001111110110100110001
      (integer_t)25600626739ull, // 110000001011101110010000110110
      (integer_t)37345180259ull, // 101101110101111101111110011001
      (integer_t)31834279823ull, // 000110000101110111111110001001
      (integer_t)22951124877ull, // 110100000000101010100011001110
      (integer_t)31284658226ull, // 001001011011100010111011010110
      (integer_t)33066539123ull, // 101001111000111101011001011110
      (integer_t)24926186071ull, // 010100110010001010100010101110
      (integer_t)28791086700ull, // 000110111100110011111010110000
      (integer_t)31942943141ull, // 010101010101011011011110110100
      (integer_t)27285750368ull, // 110101011100101101100000110101
      (integer_t)31873701351ull, // 101001000101111110111001101010
      (integer_t)27961882572ull, // 010100011000100111001010100111
      (integer_t)36163794007ull, // 110110111111001111101011011010
      (integer_t)31868318079ull, // 111101100010110011001110011011
      (integer_t)24118845170ull, // 100000010000111001001110110001
      (integer_t)32653292180ull, // 110110101010011110001011010111
      (integer_t)22725209570ull, // 111110010001011000000110001011
      (integer_t)16498520070ull, // 110000110101110000000100010100
      (integer_t)32942346617ull // 001011000111001001000111110111
    }
  },
  {
    31,
    {
      (integer_t)27875924ull,
      (integer_t)64875753ull,
      (integer_t)98266247ull,
      (integer_t)126371473ull,
      (integer_t)147679677ull,
      (integer_t)239055682ull,
      (integer_t)244635235ull,
      (integer_t)295359354ull,
      (integer_t)307994061ull,
      (integer_t)372187221ull,
      (integer_t)450903968ull,
      (integer_t)505653024ull,
      (integer_t)744374442ull,
      (integer_t)845409401ull,
      (integer_t)861457691ull,
      (integer_t)901807936ull,
      (integer_t)1010804652ull,
      (integer_t)1335093150ull,
      (integer_t)1369304609ull,
      (integer_t)1677632271ull,
      (integer_t)1860936105ull,
      (integer_t)1966860248ull,
      (integer_t)1990687611ull,
      (integer_t)2109482225ull,
      (integer_t)2348822219ull,
      (integer_t)2562787359ull,
      (integer_t)2610055766ull,
      (integer_t)2729725763ull,
      (integer_t)2920177535ull,
      (integer_t)2998375535ull,
      (integer_t)3102402787ull
    },
    {
      (integer_t)19189234453ull, // 1110101110011010110101101100010
      (integer_t)18169572692ull, // 0101100011111001111101011001000
      (integer_t)14719420324ull, // 1110110111110011000010000100101
      (integer_t)18524290637ull, // 1011111000100110000010100010111
      (integer_t)15478273797ull, // 1111111010111010101011001000001
      (integer_t)22533748512ull, // 1011101101010011110111001001101
      (integer_t)21398678256ull, // 0111011001100110100101001110110
      (integer_t)30287230315ull, // 0011100100111111111111011010111
      (integer_t)14213800726ull, // 1010001011011101010000000001011
      (integer_t)8336997416ull, // 1111000000000011001001000000100
      (integer_t)18147045036ull, // 1000001110011010100101010101001
      (integer_t)19327427962ull, // 0001101101101000111010001000111
      (integer_t)20344618029ull, // 1011011101010000110000011010111
      (integer_t)22635674486ull, // 0101011110111010100010101100111
      (integer_t)19209595090ull, // 1010010111100010010010101000111
      (integer_t)26418051519ull, // 1010110010101101101010110101111
      (integer_t)20300088299ull, // 0101111011010001010010000110111
      (integer_t)10015271725ull, // 1011100000111110000101000100000
      (integer_t)21515141112ull, // 0110001101010111101111110011000
      (integer_t)14838419613ull // 1100001110101000001101001011000
    }
  },
  {
    32,
    {
      (integer_t)177526650ull,
      (integer_t)429905489ull,
      (integer_t)560340401ull,
      (integer_t)1335664457ull,
      (integer_t)2251058158ull,
      (integer_t)2287124131ull,
      (integer_t)3238583805ull,
      (integer_t)4725364823ull,
      (integer_t)4736307616ull,
      (integer_t)5277428003ull,
      (integer_t)5427144750ull,
      (integer_t)5465621861ull,
      (integer_t)5688014574ull,
      (integer_t)5902998229ull,
      (integer_t)6092328362ull,
      (integer_t)6241759528ull,
      (integer_t)6258110454ull,
      (integer_t)6779400732ull,
      (integer_t)7812832067ull,
      (integer_t)7929376178ull,
      (integer_t)7948769286ull,
      (integer_t)8359691246ull,
      (integer_t)10112148494ull,
      (integer_t)10124975255ull,
      (integer_t)10186864077ull,
      (integer_t)10405232395ull,
      (integer_t)11245829936ull,
      (integer_t)11918366025ull,
      (integer_t)11923178655ull,
      (integer_t)11937065065ull,
      (integer_t)12266908179ull,
      (integer_t)12744997125ull
    },
    {
      (integer_t)135751811134ull, // 00101111000111001101110110011110
      (integer_t)85800219819ull, // 10011000101000110010110001000011
      (integer_t)115760532967ull, // 10111101001101100101001011010110
      (integer_t)119349121528ull, // 00100000111011100100001011101011
      (integer_t)120465378201ull, // 00000111100110001110101110110100
      (integer_t)116645960793ull, // 00101101001010001111100100011011
      (integer_t)133957256807ull, // 01101010001110010001111010101111
      (integer_t)136140334463ull, // 10111101110100101111011101100110
      (integer_t)101632627946ull, // 11101110010111000011010100001110
      (integer_t)99691865240ull, // 01101000110001000001111001011100
      (integer_t)126224433283ull, // 11101011110011001010001101011101
      (integer_t)83401878976ull, // 11110000100010010111010010110000
      (integer_t)42275490954ull, // 10110100000000010010000000001100
      (integer_t)82713219413ull, // 10010010100100111001100100110000
      (integer_t)120138593605ull, // 10000101100001111100001111011010
      (integer_t)129742046993ull, // 11011101110001010000111010111101
      (integer_t)123337239851ull, // 01010100011111110011011110010001
      (integer_t)138029080892ull, // 00001110110010011110101101010111
      (integer_t)91176685752ull, // 01110111101101001100001001100010
      (integer_t)148157319167ull // 11000000011001010011011111111101
    }
  },
  {
    33,
    {
      (integer_t)1199653463ull,
      (integer_t)2380553555ull,
      (integer_t)2701637125ull,
      (integer_t)3238345935ull,
      (integer_t)3667512875ull,
      (integer_t)4147244415ull,
      (integer_t)4232523414ull,
      (integer_t)5370844724ull,
      (integer_t)5489383949ull,
      (integer_t)7254248822ull,
      (integer_t)7335025750ull,
      (integer_t)9977720861ull,
      (integer_t)10104616465ull,
      (integer_t)10331040901ull,
      (integer_t)10533253971ull,
      (integer_t)11270151709ull,
      (integer_t)13239965724ull,
      (integer_t)14540221545ull,
      (integer_t)14831605356ull,
      (integer_t)15501844423ull,
      (integer_t)15710291508ull,
      (integer_t)16588977660ull,
      (integer_t)17743686879ull,
      (integer_t)18346349964ull,
      (integer_t)21671052081ull,
      (integer_t)21732511473ull,
      (integer_t)22011841157ull,
      (integer_t)23516895369ull,
      (integer_t)23770686577ull,
      (integer_t)25079278088ull,
      (integer_t)25337727927ull,
      (integer_t)25518989443ull,
      (integer_t)25715443603ull
    },
    {
      (integer_t)208507928925ull, // 110101100001110000000010010111101
      (integer_t)211175122605ull, // 010101101000000110110100010110011
      (integer_t)206609283467ull, // 111101000101111100010000110011001
      (integer_t)221691095557ull, // 000001101101000100111101000110101
      (integer_t)240087937051ull, // 010111010011100001101110111100010
      (integer_t)176057309461ull, // 000011110001010001100011001000110
      (integer_t)201757007267ull, // 000000010010100111110101000010110
      (integer_t)236627983539ull, // 010100101001101111000101101110001
      (integer_t)172668906297ull, // 001101011000100111001100100101000
      (integer_t)183576461704ull, // 001011110010110000001000110000111
      (integer_t)216960077852ull, // 010100111000110000001100101101011
      (integer_t)291659398963ull, // 101001100100000101110111111111010
      (integer_t)221321167324ull, // 110010110001111000101101010001011
      (integer_t)216965595002ull, // 001010100110000011100111010100011
      (integer_t)210910494121ull, // 011001111110110000010001110101001
      (integer_t)295555597614ull, // 000101001100011101101111100110111
      (integer_t)137755984715ull, // 010010000010110001100000000011001
      (integer_t)236995172538ull, // 011010010010001111011100110100011
      (integer_t)215449676729ull, // 011111110100100000010101001011101
      (integer_t)213828156868ull // 000111101101001110011100011100001
    }
  },
  {
    34,
    {
      (integer_t)63175682ull,
      (integer_t)70573928ull,
      (integer_t)531187458ull,
      (integer_t)838895738ull,
      (integer_t)2264389428ull,
      (integer_t)3166288187ull,
      (integer_t)3549838580ull,
      (integer_t)4096976778ull,
      (integer_t)5876803988ull,
      (integer_t)6332576374ull,
      (integer_t)7067886848ull,
      (integer_t)7099677160ull,
      (integer_t)7276196777ull,
      (integer_t)7837681369ull,
      (integer_t)8905884440ull,
      (integer_t)10509876144ull,
      (integer_t)10527519626ull,
      (integer_t)11222420518ull,
      (integer_t)11257707482ull,
      (integer_t)11363568374ull,
      (integer_t)14681572929ull,
      (integer_t)15394927187ull,
      (integer_t)15646820031ull,
      (integer_t)18951183151ull,
      (integer_t)19238391353ull,
      (integer_t)20071219544ull,
      (integer_t)24576032513ull,
      (integer_t)25774814072ull,
      (integer_t)27610327630ull,
      (integer_t)31589994719ull,
      (integer_t)32598444993ull,
      (integer_t)32806764230ull,
      (integer_t)34023533741ull,
      (integer_t)34305829453ull
    },
    {
      (integer_t)211032042114ull, // 1111001100100011011111000110000110
      (integer_t)197094600649ull, // 0000100011001000011011000010011010
      (integer_t)153410864753ull, // 0110001100000101100111100000110000
      (integer_t)231164400956ull, // 1100000000100000101001101010101101
      (integer_t)249219609483ull, // 1101011101111110111010111001010010
      (integer_t)195801269939ull, // 1000100001010010010000100101010110
      (integer_t)322977127528ull, // 0010101111000011100010011010111111
      (integer_t)264428210230ull, // 1001010011110011101110100100011110
      (integer_t)152568871567ull, // 1001100111010110110010100010001000
      (integer_t)302301903260ull, // 0010110011000011110000011110111011
      (integer_t)240827844654ull, // 1000000010011101001000001101111010
      (integer_t)283002201520ull, // 1110011111010010101110111110011100
      (integer_t)152714685743ull, // 0101001011100110101011110001000000
      (integer_t)226273830276ull, // 1011001101001101001001110001011010
      (integer_t)246760727489ull, // 1001001011110101110000011101111000
      (integer_t)155933198730ull, // 0000111111101001010110100100000100
      (integer_t)263977362344ull, // 1000101000000101110001111011010110
      (integer_t)231251614460ull, // 0101001101111011110101110001001010
      (integer_t)243921479000ull, // 1100001001001100001011110110011010
      (integer_t)224439955998ull // 0011101001000100100110111101000110
    }
  },
  {
    35,
    {
      (integer_t)371464900ull,
      (integer_t)1401855130ull,
      (integer_t)2803710260ull,
      (integer_t)3019031513ull,
      (integer_t)6802616482ull,
      (integer_t)9198459395ull,
      (integer_t)9523834006ull,
      (integer_t)12817724418ull,
      (integer_t)16369760913ull,
      (integer_t)19333350111ull,
      (integer_t)20298007580ull,
      (integer_t)22658262502ull,
      (integer_t)28346832753ull,
      (integer_t)32356202334ull,
      (integer_t)35363756302ull,
      (integer_t)37416360654ull,
      (integer_t)37792304900ull,
      (integer_t)37926004689ull,
      (integer_t)39541095544ull,
      (integer_t)42432875275ull,
      (integer_t)48298970415ull,
      (integer_t)48725441865ull,
      (integer_t)50755936584ull,
      (integer_t)53911924728ull,
      (integer_t)56464028666ull,
      (integer_t)67643046737ull,
      (integer_t)68191958967ull,
      (integer_t)68681722087ull,
      (integer_t)69238919437ull,
      (integer_t)71467708837ull,
      (integer_t)72556979075ull,
      (integer_t)74103410157ull,
      (integer_t)74534052663ull,
      (integer_t)74788816918ull,
      (integer_t)76986464930ull
    },
    {
      (integer_t)865969172410ull, // 01100101000000011111101110101100111
      (integer_t)814616998970ull, // 10000010010011110100001100101101111
      (integer_t)641278115661ull, // 01000101000101101100010110000111100
      (integer_t)552098674779ull, // 00000011101111110000100000110000011
      (integer_t)834821569917ull, // 01000100011100001011011111010011110
      (integer_t)532762491957ull, // 10010100010000100100011110001100001
      (integer_t)781641681543ull, // 00101110011010101101010101100110110
      (integer_t)801478177354ull, // 00101110100011110110001100100011111
      (integer_t)673968845066ull, // 10011010111001000000011111110000101
      (integer_t)549324807912ull, // 01111101000000001010110100011010100
      (integer_t)642648198337ull, // 11101110010010010100000100101011101
      (integer_t)632824786218ull, // 00100001110110011010001001000101011
      (integer_t)619759801594ull, // 10111111001100110000010101101000011
      (integer_t)818893817838ull, // 00001011101110110110111100111110000
      (integer_t)785547203511ull, // 01101101111000010111010011100011101
      (integer_t)943505984948ull, // 10111110001101110101111111101101100
      (integer_t)692997553481ull, // 11110100001001101010101100110110001
      (integer_t)471426741782ull, // 11101100001111000010110001100000010
      (integer_t)1024512840307ull, // 00000111010000110111011111111101011
      (integer_t)726466615473ull // 11000100000011001011100100011101110
    }
  },
  {
    36,
    {
      (integer_t)527980421ull,
      (integer_t)5863070797ull,
      (integer_t)9147541076ull,
      (integer_t)11032302675ull,
      (integer_t)24265957101ull,
      (integer_t)27329012852ull,
      (integer_t)31602099986ull,
      (integer_t)33082706728ull,
      (integer_t)34945361097ull,
      (integer_t)40479666698ull,
      (integer_t)53105684740ull,
      (integer_t)55161513375ull,
      (integer_t)55855352294ull,
      (integer_t)59035429573ull,
      (integer_t)61122961751ull,
      (integer_t)61620045512ull,
      (integer_t)68882824989ull,
      (integer_t)71658180665ull,
      (integer_t)75284551938ull,
      (integer_t)76722631054ull,
      (integer_t)80923024869ull,
      (integer_t)87251446058ull,
      (integer_t)88154847955ull,
      (integer_t)99262321481ull,
      (integer_t)101637598942ull,
      (integer_t)102231446516ull,
      (integer_t)127463934392ull,
      (integer_t)132143803506ull,
      (integer_t)134272393699ull,
      (integer_t)137765649978ull,
      (integer_t)145182782077ull,
      (integer_t)146239976525ull,
      (integer_t)147786558423ull,
      (integer_t)148473005294ull,
      (integer_t)153875150195ull,
      (integer_t)157921153509ull
    },
    {
      (integer_t)1260809599237ull, // 001101001110000000011100001101011100
      (integer_t)1286310943427ull, // 101001101111100101001101000100110010
      (integer_t)1235144506651ull, // 100100110111000000010010001101011010
      (integer_t)1680293582531ull, // 011001011110001000111001111000110111
      (integer_t)1334715907552ull, // 100101010110101110111000100001110001
      (integer_t)1924874730998ull, // 010000111101101001111101011010110111
      (integer_t)1241528971466ull, // 101000111011010100000100011001010110
      (integer_t)1370122662640ull, // 101011101111100110101100100111000001
      (integer_t)1124398961303ull, // 100001110000010001111000011100000101
      (integer_t)1637154896724ull, // 011010101110111111000100101001100111
      (integer_t)1160932360018ull, // 011110010010010010110101001010001100
      (integer_t)852972912871ull, // 111001000101000110010001001010010000
      (integer_t)2122776052006ull, // 111101111001111011110011010111110111
      (integer_t)1520104093621ull, // 110111100001101101011100000011111001
      (integer_t)1698002146121ull, // 011110011001010100001101001111101011
      (integer_t)1512914570761ull, // 011101101010110000001001111011101100
      (integer_t)1020734525571ull, // 011100000010110011010110000001001100
      (integer_t)1188915355983ull, // 101000001011011100101000001110010001
      (integer_t)1243324832750ull, // 011000001101001101011010011101000001
      (integer_t)1329939491011ull // 001001011001010000100110001001101110
    }
  },
  {
    37,
    {
      (integer_t)4420222820ull,
      (integer_t)22024263503ull,
      (integer_t)23952635618ull,
      (integer_t)26990262906ull,
      (integer_t)33979546586ull,
      (integer_t)37295659392ull,
      (integer_t)40266735217ull,
      (integer_t)64895044529ull,
      (integer_t)70211561512ull,
      (integer_t)75050825653ull,
      (integer_t)83367517660ull,
      (integer_t)92488753517ull,
      (integer_t)94698864927ull,
      (integer_t)101329199157ull,
      (integer_t)102557733937ull,
      (integer_t)108856770831ull,
      (integer_t)120687413421ull,
      (integer_t)125560638663ull,
      (integer_t)141598129059ull,
      (integer_t)147228016922ull,
      (integer_t)179964051550ull,
      (integer_t)184218769441ull,
      (integer_t)184977507034ull,
      (integer_t)195162386429ull,
      (integer_t)204957307795ull,
      (integer_t)207697277894ull,
      (integer_t)217347383543ull,
      (integer_t)228406939861ull,
      (integer_t)258088779706ull,
      (integer_t)258364600135ull,
      (integer_t)266295727739ull,
      (integer_t)288870767438ull,
      (integer_t)290686090318ull,
      (integer_t)297836019341ull,
      (integer_t)310440335559ull,
      (integer_t)315906868650ull,
      (integer_t)322905802271ull
    },
    {
      (integer_t)3229192881464ull, // 1010100111011000110001001101111100110
      (integer_t)2832288263674ull, // 0100001001010101011011110010001101100
      (integer_t)3042890362801ull, // 0010101011110001011001101100110000111
      (integer_t)3446088209576ull, // 1111001011111111010001100111010111010
      (integer_t)2341813584956ull, // 0100000011110110010001100001111100000
      (integer_t)3036473577498ull, // 0110001011011100010000000111101101110
      (integer_t)2540765638887ull, // 0011010100101101011110011101010000100
      (integer_t)2104795046926ull, // 0001001111110000010011011011000000010
      (integer_t)2959962516554ull, // 0011001101100001100010111010110010110
      (integer_t)2925701712176ull, // 1000110000100010011110010011101011010
      (integer_t)3973597842830ull, // 0100011110111000011110011011101111110
      (integer_t)2822000935066ull, // 0001011100000101010110110100101111000
      (integer_t)2293140239435ull, // 1111001110001100101110011001000000110
      (integer_t)1462090948676ull, // 1001011001001100111000000101100000000
      (integer_t)2917540623112ull, // 1000110010110101101110001011011001001
      (integer_t)2630619433381ull, // 1101010100111100010001101010010100011
      (integer_t)3019319201515ull, // 0001100111101100101001010101111001100
      (integer_t)2918319021389ull, // 1101101000000001110011011010101010011
      (integer_t)2749558427534ull, // 1000010010111010110100001100100111001
      (integer_t)3447170480309ull // 1100110111010101110111011100100101110
    }
  },
  {
    38,
    {
      (integer_t)46410444765ull,
      (integer_t)81036928132ull,
      (integer_t)81366551701ull,
      (integer_t)86397807812ull,
      (integer_t)92985775158ull,
      (integer_t)104137017346ull,
      (integer_t)146189351337ull,
      (integer_t)158136914578ull,
      (integer_t)185321282542ull,
      (integer_t)189092346022ull,
      (integer_t)203741367536ull,
      (integer_t)217410788914ull,
      (integer_t)241308482966ull,
      (integer_t)271438497859ull,
      (integer_t)294968708525ull,
      (integer_t)332090606884ull,
      (integer_t)342937628290ull,
      (integer_t)369315087277ull,
      (integer_t)415906400020ull,
      (integer_t)416548069384ull,
      (integer_t)475075421386ull,
      (integer_t)478028150344ull,
      (integer_t)484089496106ull,
      (integer_t)527482219099ull,
      (integer_t)532716421348ull,
      (integer_t)533684618070ull,
      (integer_t)535504595692ull,
      (integer_t)543526972285ull,
      (integer_t)591322360389ull,
      (integer_t)596895434092ull,
      (integer_t)604879191987ull,
      (integer_t)623263947283ull,
      (integer_t)658279731193ull,
      (integer_t)705071587533ull,
      (integer_t)730242341999ull,
      (integer_t)751801006977ull,
      (integer_t)758969290356ull,
      (integer_t)773032490101ull
    },
    {
      (integer_t)6666511299404ull, // 00101001100001111011111000010010001010
      (integer_t)6986950387860ull, // 10111001000011001010010101111001100010
      (integer_t)6905326502837ull, // 00111000100001000010111100111010000011
      (integer_t)7198331703012ull, // 10001010101100000001010111101110001010
      (integer_t)6240900071476ull, // 00000011001110111000111010110100100000
      (integer_t)9561132236313ull, // 11101011011001100001010011001111111101
      (integer_t)6064141106527ull, // 10011001011111101000101000000000011101
      (integer_t)7698773568787ull, // 10010011010110100010101111010001100101
      (integer_t)9265892717803ull, // 10111000010001011111010101011111110010
      (integer_t)7638248634294ull, // 01000011000111011010100111110000000111
      (integer_t)7866235600757ull, // 10010100100100111011100001111101000101
      (integer_t)8663013009487ull, // 00010011010111111101000110111000111001
      (integer_t)6066769968081ull, // 11100100111010001001010101100100001001
      (integer_t)6878773536621ull, // 00110111001011001101000101010000111010
      (integer_t)6875890236582ull, // 10111110001001101001010111000001111000
      (integer_t)6541528160659ull, // 00100011001111000001010100010111100001
      (integer_t)9021664564242ull, // 01111001011101100110101001101111110100
      (integer_t)11582442119058ull, // 10000110110111010111100111011111111101
      (integer_t)8314243516768ull, // 10001011101001101011010101111111010000
      (integer_t)6730359577612ull // 11110010010111101011001000000011011100
    }
  },
  {
    39,
    {
      (integer_t)44140189330ull,
      (integer_t)83543194343ull,
      (integer_t)88280378660ull,
      (integer_t)94869526332ull,
      (integer_t)102872246730ull,
      (integer_t)109899785031ull,
      (integer_t)129591480197ull,
      (integer_t)137792924829ull,
      (integer_t)167086388686ull,
      (integer_t)175659380732ull,
      (integer_t)207621071664ull,
      (integer_t)224333231453ull,
      (integer_t)256651704937ull,
      (integer_t)290032588042ull,
      (integer_t)313166059870ull,
      (integer_t)357858698957ull,
      (integer_t)381576080540ull,
      (integer_t)395458950794ull,
      (integer_t)405293462123ull,
      (integer_t)474225731458ull,
      (integer_t)492806652236ull,
      (integer_t)526276092923ull,
      (integer_t)528761280691ull,
      (integer_t)539474226855ull,
      (integer_t)552399895635ull,
      (integer_t)591737940951ull,
      (integer_t)620973711574ull,
      (integer_t)624205365414ull,
      (integer_t)645102680922ull,
      (integer_t)700760944724ull,
      (integer_t)711645716237ull,
      (integer_t)717809765194ull,
      (integer_t)723013331949ull,
      (integer_t)729944680864ull,
      (integer_t)738833676219ull,
      (integer_t)848137965904ull,
      (integer_t)861707981055ull,
      (integer_t)915302298161ull,
      (integer_t)923501849633ull
    },
    {
      (integer_t)11145891996011ull, // 101011001101000011010111110001011111101
      (integer_t)8762357738994ull, // 000010110000110100001101010101101010011
      (integer_t)7798207439976ull, // 010001000010001010111000100100001100111
      (integer_t)9472173279388ull, // 110001011111100000001010001001101011111
      (integer_t)8999090290151ull, // 010011100101101011101000100001101111001
      (integer_t)8350051815282ull, // 000110101000110111101000100101100001011
      (integer_t)8042557375637ull, // 110000011001000110111011010101011001000
      (integer_t)8409039000200ull, // 111011011000110000110010101101100011001
      (integer_t)12917941909012ull, // 110101101100100111011101111101110110111
      (integer_t)9200645351449ull, // 010010000101000100010110101001111000111
      (integer_t)6731535555880ull, // 001100101110010100001011100000001110010
      (integer_t)10551222343216ull, // 101100111001010010001110011011010110111
      (integer_t)9507372095520ull, // 101011011001011101010011101100110100110
      (integer_t)9367340694431ull, // 011101101000001111111100011000010101011
      (integer_t)7900666246483ull, // 110011010111110111101101010000000010011
      (integer_t)10629851628889ull, // 110011110011000001000100111101111011011
      (integer_t)6622350227087ull, // 010101100000101010011001100001000101010
      (integer_t)10304526789865ull, // 001100100000111111001011000001010111111
      (integer_t)9359267454272ull, // 111100011110011111101100001010110011010
      (integer_t)9938664995109ull // 010001100010010111100001110111111001001
    }
  },
  {
    40,
    {
      (integer_t)73901116237ull,
      (integer_t)137430293770ull,
      (integer_t)156404371995ull,
      (integer_t)198002744222ull,
      (integer_t)233880546209ull,
      (integer_t)488671183168ull,
      (integer_t)520601273705ull,
      (integer_t)559851695865ull,
      (integer_t)567233068076ull,
      (integer_t)613114830295ull,
      (integer_t)668403506179ull,
      (integer_t)714858062702ull,
      (integer_t)720333107496ull,
      (integer_t)724118136221ull,
      (integer_t)964826480726ull,
      (integer_t)986091171576ull,
      (integer_t)1017337223829ull,
      (integer_t)1058648820931ull,
      (integer_t)1110712118753ull,
      (integer_t)1114288671148ull,
      (integer_t)1174278968389ull,
      (integer_t)1190812064932ull,
      (integer_t)1218899255750ull,
      (integer_t)1225833880717ull,
      (integer_t)1225875060490ull,
      (integer_t)1234269265630ull,
      (integer_t)1273550208084ull,
      (integer_t)1336807012358ull,
      (integer_t)1373978981364ull,
      (integer_t)1376630291024ull,
      (integer_t)1416451093789ull,
      (integer_t)1498870972243ull,
      (integer_t)1529998057632ull,
      (integer_t)1537609059350ull,
      (integer_t)1607068306861ull,
      (integer_t)1731334653938ull,
      (integer_t)1759129805432ull,
      (integer_t)1760292394479ull,
      (integer_t)1805386614375ull,
      (integer_t)1830418385595ull
    },
    {
      (integer_t)20566811910775ull, // 1111011000010001010111111100100101100001
      (integer_t)15074516271788ull, // 0100101110011101010001000101000100000101
      (integer_t)30620396606276ull, // 0110000100100111111101001111111111010111
      (integer_t)21192063638943ull, // 0000100100100101110001001011111100011100
      (integer_t)24062874418225ull, // 1101001100111111011001011101011110001001
      (integer_t)22641141232144ull, // 1111111111100110110100000101011101110010
      (integer_t)22195598121674ull, // 0001001101111111010011001001110001011100
      (integer_t)15657599131050ull, // 0001011101110010001001011011000000000110
      (integer_t)25687126910612ull, // 0011011000111000101111100110011101011110
      (integer_t)19112132476348ull, // 1011111001010100001110101100001100001011
      (integer_t)18253003945898ull, // 0111011001110001000110110101010100001001
      (integer_t)22489760908098ull, // 0110001011010110001100101110110101101100
      (integer_t)19894088082808ull, // 1010111101011011001010000010001000011111
      (integer_t)20261040627625ull, // 0001001101000010110111110010000111001010
      (integer_t)24706207377599ull, // 0111001101001010101101011101010110110011
      (integer_t)15748856926118ull, // 0110100110101000101100111011010000000010
      (integer_t)20833195774633ull, // 1110010010000100101001111110011110101000
      (integer_t)21679479292503ull, // 0001000110100100111110100100011011100110
      (integer_t)16142315334656ull, // 0011110110101111001000100010100010100100
      (integer_t)21942648423724ull // 0010101010100111001111010001000101101110
    }
  },
  {
    41,
    {
      (integer_t)38248346205ull,
      (integer_t)416541367663ull,
      (integer_t)486479557435ull,
      (integer_t)833082735326ull,
      (integer_t)993894666818ull,
      (integer_t)1218926108219ull,
      (integer_t)1341502639195ull,
      (integer_t)1351624111471ull,
      (integer_t)1451297960985ull,
      (integer_t)1491166229408ull,
      (integer_t)1671258177131ull,
      (integer_t)1698725991664ull,
      (integer_t)2127083705998ull,
      (integer_t)2242175799050ull,
      (integer_t)2373492685006ull,
      (integer_t)2377598198238ull,
      (integer_t)2455931569490ull,
      (integer_t)2603162325383ull,
      (integer_t)2848715329247ull,
      (integer_t)3087636919467ull,
      (integer_t)3259089333273ull,
      (integer_t)3338959607885ull,
      (integer_t)3397451983328ull,
      (integer_t)3636735719919ull,
      (integer_t)3969686740296ull,
      (integer_t)4147103161475ull,
      (integer_t)4169078801319ull,
      (integer_t)4216224279637ull,
      (integer_t)4309352356856ull,
      (integer_t)4335685074747ull,
      (integer_t)4529262696765ull,
      (integer_t)5074977996076ull,
      (integer_t)5271983093744ull,
      (integer_t)5783156865397ull,
      (integer_t)5868073269537ull,
      (integer_t)5898026843633ull,
      (integer_t)5933731712515ull,
      (integer_t)5998091243947ull,
      (integer_t)6108730953759ull,
      (integer_t)6314663400120ull,
      (integer_t)6466940462711ull
    },
    {
      (integer_t)72394678256429ull, // 10110101110000010101011100011110011011100
      (integer_t)38890960355082ull, // 01010000000110010111000000111100001000000
      (integer_t)90519811676053ull, // 00011000001010111111101110101010110011111
      (integer_t)76060007236218ull, // 01011101010000111111101010010011101001110
      (integer_t)76965961851341ull, // 11001100101111110101100110101000111011001
      (integer_t)71758427998569ull, // 10110110100001011011010111110001000010111
      (integer_t)56742659168615ull, // 01001001110110100111111001010000000110100
      (integer_t)75459348029523ull, // 00010011001101101100011000111010111101100
      (integer_t)72362592199827ull, // 01011000110011110101101001001111100011100
      (integer_t)39965260951884ull, // 01001011000111000110000100100010000100100
      (integer_t)72796343903204ull, // 10110110010001011011111000110000100110111
      (integer_t)71588186888524ull, // 11011001010111010010000110100111110011001
      (integer_t)54184605638690ull, // 11000101000011100111110001100110010000010
      (integer_t)62619851499447ull, // 10110011100011011000000010010010110111010
      (integer_t)76725106125246ull, // 00111110011111000001101100010110011011101
      (integer_t)65950352137981ull, // 00101111011101101010110111100001001001010
      (integer_t)53609274858179ull, // 11000110000001000110111000001001110001001
      (integer_t)66827820437027ull, // 00110000011100111111001100110000011111000
      (integer_t)74248952161201ull, // 01000010100100111010110000110110101111001
      (integer_t)73442258396313ull // 01000101001111111011101000010110110001011
    }
  },
  {
    42,
    {
      (integer_t)380721373619ull,
      (integer_t)605452534052ull,
      (integer_t)965507488057ull,
      (integer_t)978596862701ull,
      (integer_t)1133238408775ull,
      (integer_t)1520943637690ull,
      (integer_t)1750779424660ull,
      (integer_t)2194468243942ull,
      (integer_t)2215396369482ull,
      (integer_t)2385732574790ull,
      (integer_t)2398790036214ull,
      (integer_t)2584658501771ull,
      (integer_t)2806502911412ull,
      (integer_t)3147175322028ull,
      (integer_t)3739631073881ull,
      (integer_t)3929897190308ull,
      (integer_t)4080289841483ull,
      (integer_t)4551775987657ull,
      (integer_t)4858501136219ull,
      (integer_t)5373517807723ull,
      (integer_t)5683558491043ull,
      (integer_t)5854972320210ull,
      (integer_t)6420863571903ull,
      (integer_t)6648294881429ull,
      (integer_t)6696931173296ull,
      (integer_t)6830063208058ull,
      (integer_t)7309304223984ull,
      (integer_t)7479818898527ull,
      (integer_t)7807474066766ull,
      (integer_t)7878022302090ull,
      (integer_t)7918640471608ull,
      (integer_t)8214086288501ull,
      (integer_t)8276782456418ull,
      (integer_t)8296205514683ull,
      (integer_t)8544386255754ull,
      (integer_t)8671939294392ull,
      (integer_t)8797365449970ull,
      (integer_t)8904344841296ull,
      (integer_t)8952787864116ull,
      (integer_t)9916810390620ull,
      (integer_t)10529147186214ull,
      (integer_t)10652552392638ull
    },
    {
      (integer_t)114746014496803ull, // 011110000000000001110111001011100101010101
      (integer_t)83923233379010ull, // 010000010101001011000010110000100100110100
      (integer_t)122648053455279ull, // 110011111000010000000111110011001111011100
      (integer_t)142970682651767ull, // 101000101110001111001010010101100111101111
      (integer_t)109400064520724ull, // 101010111011001110000101000010110010011011
      (integer_t)137460308546112ull, // 100011000110110100010110100111111000111011
      (integer_t)136680351668145ull, // 111011101000111010010011100111001000111111
      (integer_t)86589618388127ull, // 111101010011000100100100000101001100011010
      (integer_t)74921143770534ull, // 010001101101100110010000100010101101000000
      (integer_t)117898714164920ull, // 110110111110010111111010101101000001011100
      (integer_t)122288400445268ull, // 100000100100100001101011001101101110000111
      (integer_t)101916063936616ull, // 001011000000000100111111110000010011000101
      (integer_t)102349845158170ull, // 011000110000000011100101001101001000100111
      (integer_t)105926512107332ull, // 101010110010010010110111000000110101110100
      (integer_t)139698616858250ull, // 001100010000100001011010110110111010011111
      (integer_t)93585261347706ull, // 011001010111011011111000011001001001000010
      (integer_t)124974786188903ull, // 101011110101001000101010100110111111100001
      (integer_t)87679219529322ull, // 101001000100001101001000100110011100101000
      (integer_t)105864875752163ull, // 011100000011101000010000001110000111011110
      (integer_t)137247392989089ull // 011010000110011111100111000101110110101110
    }
  },
  {
    43,
    {
      (integer_t)211804636760ull,
      (integer_t)1444308068863ull,
      (integer_t)1470976594372ull,
      (integer_t)1829974839629ull,
      (integer_t)3518571754207ull,
      (integer_t)4217461003445ull,
      (integer_t)4564521237481ull,
      (integer_t)4713893259070ull,
      (integer_t)5610470720755ull,
      (integer_t)5718681541908ull,
      (integer_t)6179476469763ull,
      (integer_t)6307485813452ull,
      (integer_t)6682697169620ull,
      (integer_t)6831334067290ull,
      (integer_t)7595778273878ull,
      (integer_t)7873749854272ull,
      (integer_t)7908179128427ull,
      (integer_t)8214811726614ull,
      (integer_t)8500570266877ull,
      (integer_t)9371298199472ull,
      (integer_t)9427786518140ull,
      (integer_t)9967435492710ull,
      (integer_t)11447975284998ull,
      (integer_t)12297786502647ull,
      (integer_t)13213863597997ull,
      (integer_t)13917750138969ull,
      (integer_t)14074287016828ull,
      (integer_t)14222307879586ull,
      (integer_t)14360923241253ull,
      (integer_t)14368704071378ull,
      (integer_t)15220831914528ull,
      (integer_t)15241364362357ull,
      (integer_t)15472065515304ull,
      (integer_t)15747499708544ull,
      (integer_t)15877524693733ull,
      (integer_t)17244797892659ull,
      (integer_t)18181692880135ull,
      (integer_t)18626037333473ull,
      (integer_t)18742596398944ull,
      (integer_t)18855573036280ull,
      (integer_t)19948195207435ull,
      (integer_t)20519712287961ull,
      (integer_t)21570847263007ull
    },
    {
      (integer_t)272323923100560ull, // 0000001100011111000100001101011100111001111
      (integer_t)222417992542015ull, // 0100100110000000100110010100010101111011100
      (integer_t)177061432355777ull, // 0001010000100000110100000011000010011100101
      (integer_t)217417861229828ull, // 1101000011011010001011011000001001001110011
      (integer_t)243431977548045ull, // 1011111100011000001001101010110110110100101
      (integer_t)180373950482613ull, // 0100001000101100101111010000101011100000010
      (integer_t)242304451041797ull, // 0000100000001010000101111000111101101010110
      (integer_t)206452092927496ull, // 0111010011111100000110110010010001100011100
      (integer_t)242917605553757ull, // 0111010000101011101110010001100011000111011
      (integer_t)151805881743934ull, // 1010001001110111000100110001000000010000110
      (integer_t)252821540687974ull, // 1111101100111101101010001101011101100011100
      (integer_t)269944182051019ull, // 0000011111010000101011001110100010111100111
      (integer_t)179143707767288ull, // 1101111010110100010100001000100000110100101
      (integer_t)229440524043800ull, // 1100101000010110110001100000011001011100111
      (integer_t)210338786677886ull, // 1101110010001111010110001111001101010100000
      (integer_t)249081561544667ull, // 1001100111101000011000100111011100000110111
      (integer_t)220279404491090ull, // 0001000001010001010010011100101000101110110
      (integer_t)252819440657852ull, // 1000010000010101100101011111011110100111000
      (integer_t)255312117455465ull, // 0010001101011111111101000010001011001001111
      (integer_t)257373161473454ull // 1011111010011110010101111111110001001100010
    }
  },
  {
    44,
    {
      (integer_t)1123461515809ull,
      (integer_t)1447424709703ull,
      (integer_t)1849187287286ull,
      (integer_t)4515856182613ull,
      (integer_t)4661046581429ull,
      (integer_t)5282911167062ull,
      (integer_t)5541055537939ull,
      (integer_t)6742253004835ull,
      (integer_t)7513718297504ull,
      (integer_t)7908250849417ull,
      (integer_t)8138495507119ull,
      (integer_t)8338297353326ull,
      (integer_t)8567813947195ull,
      (integer_t)8768343857235ull,
      (integer_t)8832844493060ull,
      (integer_t)8873243554902ull,
      (integer_t)9421630054045ull,
      (integer_t)9628436865053ull,
      (integer_t)9929295462186ull,
      (integer_t)12077399526080ull,
      (integer_t)13697949688229ull,
      (integer_t)14012458922657ull,
      (integer_t)14141386132065ull,
      (integer_t)15816501698834ull,
      (integer_t)16957422005978ull,
      (integer_t)17309277209296ull,
      (integer_t)18666228618010ull,
      (integer_t)18738823817418ull,
      (integer_t)18852489834278ull,
      (integer_t)19722134443984ull,
      (integer_t)19894948773979ull,
      (integer_t)20698473929145ull,
      (integer_t)20724583001813ull,
      (integer_t)21392756859087ull,
      (integer_t)24396848503717ull,
      (integer_t)24645731179059ull,
      (integer_t)25586994371871ull,
      (integer_t)25721606234418ull,
      (integer_t)26776856584871ull,
      (integer_t)27293145326625ull,
      (integer_t)27766841773789ull,
      (integer_t)28282772264130ull,
      (integer_t)30843938293842ull,
      (integer_t)31304427609246ull
    },
    {
      (integer_t)296151146270814ull, // 01111110110001101111100001010001101010100010
      (integer_t)261426163800246ull, // 11101100101000010101111100111011100010000000
      (integer_t)338775549493410ull, // 01101100101011110011000011001011010011010110
      (integer_t)299811210402929ull, // 10000001010100101110111110101001001010011000
      (integer_t)300185164859709ull, // 10110001101100010101011100110010100011100001
      (integer_t)328426980931642ull, // 11001001011000100011101111001101010101001010
      (integer_t)326271964695516ull, // 10011000010101101000100101010010001111001110
      (integer_t)288935731856432ull, // 11100000001110010110110111001111100010001000
      (integer_t)318766679120664ull, // 11000011101001110001011010101110011101000001
      (integer_t)272828771880021ull, // 01111010000000011010011111101000010000010011
      (integer_t)308692284898074ull, // 10110010101110100100011001011000100100110011
      (integer_t)382493386655409ull, // 11111100110101010110101000100101001101111110
      (integer_t)349162962467991ull, // 00111010011110010011010011011010011000100111
      (integer_t)209628059786956ull, // 11100101000001000010100001110001000000110001
      (integer_t)309137658040875ull, // 11010111110111000001100101011010011101000010
      (integer_t)351846302907605ull, // 11001010001010110110100110011101001011110010
      (integer_t)302980351975885ull, // 10010101000001111111111100110001101010000001
      (integer_t)313972310757233ull, // 11110011010000100010101100010011100100010111
      (integer_t)288424203743745ull, // 11101101001001111001100001011001110001110000
      (integer_t)256651445149356ull // 10010011110001001001111101000010110000001100
    }
  },
  {
    45,
    {
      (integer_t)2865674617195ull,
      (integer_t)4032648275434ull,
      (integer_t)5064220336764ull,
      (integer_t)7288721444395ull,
      (integer_t)10128440673528ull,
      (integer_t)11462698468780ull,
      (integer_t)12219099692303ull,
      (integer_t)13332069865307ull,
      (integer_t)14445758454183ull,
      (integer_t)15421577556346ull,
      (integer_t)19380456643912ull,
      (integer_t)20078301840045ull,
      (integer_t)20240087158081ull,
      (integer_t)20256881347056ull,
      (integer_t)25704254468797ull,
      (integer_t)27385850318315ull,
      (integer_t)34128427706562ull,
      (integer_t)36447759245528ull,
      (integer_t)37604336266676ull,
      (integer_t)37632563726773ull,
      (integer_t)38581745230322ull,
      (integer_t)38760913287824ull,
      (integer_t)41953216491719ull,
      (integer_t)42552600944327ull,
      (integer_t)44301117838273ull,
      (integer_t)46830354343167ull,
      (integer_t)48063549629168ull,
      (integer_t)48288551570178ull,
      (integer_t)48535342421492ull,
      (integer_t)51749334540573ull,
      (integer_t)51953685010996ull,
      (integer_t)53338356176614ull,
      (integer_t)53515061847144ull,
      (integer_t)60416624564110ull,
      (integer_t)63685906994527ull,
      (integer_t)64590023720466ull,
      (integer_t)65146456734168ull,
      (integer_t)66206666482604ull,
      (integer_t)67259620565838ull,
      (integer_t)67831598253692ull,
      (integer_t)69216740674941ull,
      (integer_t)69269685538390ull,
      (integer_t)71337297066268ull,
      (integer_t)72586183543437ull,
      (integer_t)72954954957921ull
    },
    {
      (integer_t)774231386508332ull, // 001101010001001001100001011110001110101000001
      (integer_t)1007308714302167ull, // 010000001011101111001001010111001100101110011
      (integer_t)912008169382909ull, // 000111100011011001100001011001011000100111110
      (integer_t)762123050787750ull, // 101011001000001101110110111000001000100001011
      (integer_t)837871065418427ull, // 001100000100011010110100100000110101110101001
      (integer_t)856079257247340ull, // 011111100010011000001101000011100111010010101
      (integer_t)815659440253740ull, // 111001011001011110111010011000011000001100101
      (integer_t)697251853233734ull, // 110010100010010101010001100010010001100101100
      (integer_t)1019329974203406ull, // 111000011010111000001110100101111011011011100
      (integer_t)933043961634666ull, // 000011101011000111010001100011100110100101101
      (integer_t)881238682341691ull, // 101010011110001111010010011110000001110101010
      (integer_t)763413648546901ull, // 101010111000111100100000001111100101110010000
      (integer_t)1248065989961547ull, // 101101011010000111111010010111011010110111111
      (integer_t)933706137868863ull, // 011110100000001111011001100011110101000111100
      (integer_t)752851558320597ull, // 101100101101110100010010100011001011101010000
      (integer_t)813897555851692ull, // 001101001000010001111101000000100101011100011
      (integer_t)662252710601605ull, // 100110110110101000000111010100010110001000010
      (integer_t)1074912247306183ull, // 000110001111010100011110001111010101111110001
      (integer_t)838253219468392ull, // 100110000011000010110111001011000101010111000
      (integer_t)750243850048317ull // 010011000000110101000110000101011101001100010
    }
  },
  {
    46,
    {
      (integer_t)429540222507ull,
      (integer_t)5364917564253ull,
      (integer_t)30055794909546ull,
      (integer_t)31376172738200ull,
      (integer_t)36591796305506ull,
      (integer_t)43523628998600ull,
      (integer_t)45115827483391ull,
      (integer_t)48961475688303ull,
      (integer_t)50371984323409ull,
      (integer_t)52229476386283ull,
      (integer_t)54645711671776ull,
      (integer_t)62070604486186ull,
      (integer_t)65716417295389ull,
      (integer_t)66485589122652ull,
      (integer_t)67867156467060ull,
      (integer_t)70038288961829ull,
      (integer_t)70219520792023ull,
      (integer_t)80463613418692ull,
      (integer_t)81247943914423ull,
      (integer_t)85140761764849ull,
      (integer_t)88098123120972ull,
      (integer_t)88309163830296ull,
      (integer_t)90210300097502ull,
      (integer_t)91375400772514ull,
      (integer_t)91851753189851ull,
      (integer_t)91901767400930ull,
      (integer_t)92855759066292ull,
      (integer_t)98154084121937ull,
      (integer_t)103231688048470ull,
      (integer_t)105365017955895ull,
      (integer_t)106458943181667ull,
      (integer_t)115087975324426ull,
      (integer_t)115789558721889ull,
      (integer_t)121315828099521ull,
      (integer_t)125014674467163ull,
      (integer_t)125596186548192ull,
      (integer_t)135526627456229ull,
      (integer_t)137137479729046ull,
      (integer_t)139546787763483ull,
      (integer_t)139898807625741ull,
      (integer_t)147172958628573ull,
      (integer_t)147960685047914ull,
      (integer_t)153617515854998ull,
      (integer_t)156222912314677ull,
      (integer_t)156380650543814ull,
      (integer_t)159344722362803ull
    },
    {
      (integer_t)2078774113080796ull, // 1000010001001011100011000100011110011011101010
      (integer_t)2208914004077941ull, // 1100110111111011100101111101001001101001000011
      (integer_t)2029245025348573ull, // 0100111101101001010111010001001100110100001110
      (integer_t)2214583437490388ull, // 0111001110010100100111011011100111110000100101
      (integer_t)2387918961035107ull, // 0100000111011101110111110110001110011110001001
      (integer_t)2104210973672937ull, // 1010100100110010001011111100100011110110001001
      (integer_t)1733883364672131ull, // 1001110111110111000001011011001000100010000011
      (integer_t)1900496501682895ull, // 1101000010101001010100100011011010100111100001
      (integer_t)1646718548489214ull, // 1000001111001000110100111100001101001000010010
      (integer_t)2510402885703800ull, // 0110111101110100000100101011011010111101101101
      (integer_t)1526506833152548ull, // 0100000101000000101110101000010111000001000011
      (integer_t)2311901195877955ull, // 0110011111111011101110011100000100110010110011
      (integer_t)2388648385367792ull, // 1100100101000100000001111011100011111011010111
      (integer_t)1346002954518815ull, // 0000010010000110111010110100000110000100000100
      (integer_t)2699337328555037ull, // 1011100001110011110111001010111010111111010101
      (integer_t)1287711832305915ull, // 1000000010010001000101110100001100001000101000
      (integer_t)2427343793448873ull, // 1010010000010110001111111001101110010111100110
      (integer_t)971067719491210ull, // 1100110100001110100100000000110010000000000010
      (integer_t)1314217090003522ull, // 0110000001010000010000001100000011111101000000
      (integer_t)2336046247014072ull // 1010000111010000010011100110111111000011101110
    }
  },
  {
    47,
    {
      (integer_t)3901688130180ull,
      (integer_t)7803376260360ull,
      (integer_t)15606752520720ull,
      (integer_t)15630100929115ull,
      (integer_t)16983455434393ull,
      (integer_t)20693625796631ull,
      (integer_t)21546004171184ull,
      (integer_t)25576422945543ull,
      (integer_t)26845785758786ull,
      (integer_t)34882177595383ull,
      (integer_t)39447781500546ull,
      (integer_t)42918569431980ull,
      (integer_t)49957669366875ull,
      (integer_t)56660466384249ull,
      (integer_t)57681738860953ull,
      (integer_t)65839658590833ull,
      (integer_t)67173281041380ull,
      (integer_t)70031805905347ull,
      (integer_t)70277083160030ull,
      (integer_t)71495284602638ull,
      (integer_t)72603521822490ull,
      (integer_t)81003388428832ull,
      (integer_t)85535736872145ull,
      (integer_t)86009115857238ull,
      (integer_t)86139032012703ull,
      (integer_t)89341666118354ull,
      (integer_t)92245689654635ull,
      (integer_t)93640515124320ull,
      (integer_t)103973687903476ull,
      (integer_t)119974252791126ull,
      (integer_t)122931838932883ull,
      (integer_t)139226499426715ull,
      (integer_t)140554166320060ull,
      (integer_t)144901759887225ull,
      (integer_t)145224261214152ull,
      (integer_t)150590533664919ull,
      (integer_t)162183735284066ull,
      (integer_t)168116543584296ull,
      (integer_t)170533823283361ull,
      (integer_t)175575965858100ull,
      (integer_t)175749404768488ull,
      (integer_t)175966829252259ull,
      (integer_t)180708394140001ull,
      (integer_t)184491379309270ull,
      (integer_t)191956617308863ull,
      (integer_t)210316775656929ull,
      (integer_t)215196633457386ull
    },
    {
      (integer_t)2582702614176349ull, // 01000011011011101110111000100101111110001110001
      (integer_t)2420185949558577ull, // 01001000010001111011111111010100000011011011010
      (integer_t)2128909274210606ull, // 01010001111111011001110010101010010010010100101
      (integer_t)1886037946320017ull, // 01010010000101010011100101100001010100000110110
      (integer_t)2315307899955188ull, // 01010010010110100001111101111001011110001100001
      (integer_t)2152707787455317ull, // 01011111100110010000000111010110000110001011101
      (integer_t)2523525849274600ull, // 11000111000100010101111011110111110010010010101
      (integer_t)2209149105999528ull, // 00100011101100100101000111010011100100011100110
      (integer_t)2875981032975924ull, // 01110101100111111111110101111111010101011010001
      (integer_t)2551091822183156ull, // 10001100011101010001111101011010001000011111011
      (integer_t)1902570617055793ull, // 01010101101001011011100001000101001011100100100
      (integer_t)2384958983843221ull, // 01011100110000101000111001011111001010110011010
      (integer_t)3109994302362513ull, // 11101000010111000000111110011111110111010111101
      (integer_t)2359785955954539ull, // 11110001011101101011101001001100010110110011010
      (integer_t)2460351092021470ull, // 00001110011101100001110010001100000011111110011
      (integer_t)2443430516794557ull, // 01101011011110111010011111000101000101101011010
      (integer_t)1818048471093796ull, // 01101010100000001011011001001000101001110101000
      (integer_t)2655579654371970ull, // 00111101001000000110111001011101101010110001111
      (integer_t)2085475412303194ull, // 01001000000101101110000100011001000001111100101
      (integer_t)2955576780085573ull // 00011111111011111110101000101011011011101111100
    }
  },
  {
    48,
    {
      (integer_t)15887992697034ull,
      (integer_t)46068755683187ull,
      (integer_t)72641485984171ull,
      (integer_t)107096644579348ull,
      (integer_t)127410759415729ull,
      (integer_t)157104076636496ull,
      (integer_t)202923117100756ull,
      (integer_t)204039290711673ull,
      (integer_t)205180140201346ull,
      (integer_t)214193289158696ull,
      (integer_t)230230656051311ull,
      (integer_t)231966003048372ull,
      (integer_t)261420095189653ull,
      (integer_t)316159518066229ull,
      (integer_t)318090905151044ull,
      (integer_t)336774060071428ull,
      (integer_t)340064836293579ull,
      (integer_t)344046274986084ull,
      (integer_t)347895000123514ull,
      (integer_t)359900030242620ull,
      (integer_t)364807605304734ull,
      (integer_t)387682487427404ull,
      (integer_t)394096029011572ull,
      (integer_t)407084799112797ull,
      (integer_t)407169990441805ull,
      (integer_t)411514476472955ull,
      (integer_t)411527977585216ull,
      (integer_t)424255084424210ull,
      (integer_t)424337060417467ull,
      (integer_t)438646675361449ull,
      (integer_t)495694490378551ull,
      (integer_t)516147492341994ull,
      (integer_t)518577008386159ull,
      (integer_t)524061582947532ull,
      (integer_t)541184133126357ull,
      (integer_t)570573430160738ull,
      (integer_t)581842722578953ull,
      (integer_t)585408208738356ull,
      (integer_t)589138587328823ull,
      (integer_t)604384979542175ull,
      (integer_t)625420243808718ull,
      (integer_t)629244625491499ull,
      (integer_t)638900588576760ull,
      (integer_t)640023286639466ull,
      (integer_t)649469493468619ull,
      (integer_t)675283467139917ull,
      (integer_t)698356979359424ull,
      (integer_t)705905256463722ull
    },
    {
      (integer_t)9359796457031949ull, // 000111100001110111010100111110010110010100100010
      (integer_t)8748914010491278ull, // 110110010010001000101010001101100011110011011000
      (integer_t)11375055518828587ull, // 001100010111110011010011111011111101101001000110
      (integer_t)6968294359077641ull, // 001110001001110100011001000010001010000000011011
      (integer_t)9050683432855466ull, // 010011110110010100011010100000000001101110100111
      (integer_t)9592993914158622ull, // 011001100011000010011101100000111101110011010010
      (integer_t)10800129791347532ull, // 111111100101101110110010001101001011110110011100
      (integer_t)8278845662216291ull, // 100010000000100101001111111111001100000000000111
      (integer_t)7777369790928568ull, // 000010010100110110011000010000001010110001110001
      (integer_t)10115484107635105ull, // 011100111110011011111101001011000001110100001101
      (integer_t)7967914772145532ull, // 111001110000011111101001001100100001100001000101
      (integer_t)8363886783954433ull, // 111110111011110000100110100111101000110000100010
      (integer_t)9274788124802005ull, // 001001011101101100100010100010111110111000001010
      (integer_t)10352511484953999ull, // 000010000100010101101011111011010100111010110001
      (integer_t)8635725977573997ull, // 110011010000100011100110101100010111010010000011
      (integer_t)8413242418669227ull, // 010111101100110101101010110101111010010000001000
      (integer_t)12450146130019456ull, // 010111111101001000110110101111111011110100111010
      (integer_t)12473881119776217ull, // 011010110011101000111100111101000111111110111100
      (integer_t)8920642156189168ull, // 110110101011000111000011110101000110011001000101
      (integer_t)9152416519568176ull // 000001100101011001000110001011100110110001110100
    }
  },
  {
    49,
    {
      (integer_t)21756964868842ull,
      (integer_t)42139606553812ull,
      (integer_t)43054068182539ull,
      (integer_t)70001699900576ull,
      (integer_t)75675813554602ull,
      (integer_t)89709439055961ull,
      (integer_t)114719706603199ull,
      (integer_t)122568173802352ull,
      (integer_t)179418878111922ull,
      (integer_t)187983547615209ull,
      (integer_t)194693345316382ull,
      (integer_t)229051101353557ull,
      (integer_t)240212969450410ull,
      (integer_t)260923210195956ull,
      (integer_t)286575210105862ull,
      (integer_t)322340652887046ull,
      (integer_t)344449253916839ull,
      (integer_t)422772681868697ull,
      (integer_t)432440758815303ull,
      (integer_t)455689169892238ull,
      (integer_t)483440981155763ull,
      (integer_t)488224354621399ull,
      (integer_t)494786581523206ull,
      (integer_t)498567730374281ull,
      (integer_t)518218026428603ull,
      (integer_t)538256634335766ull,
      (integer_t)606231046985447ull,
      (integer_t)625284493811134ull,
      (integer_t)638297704524718ull,
      (integer_t)661134469431328ull,
      (integer_t)666186103100963ull,
      (integer_t)689608261444970ull,
      (integer_t)701403641607297ull,
      (integer_t)710258778917262ull,
      (integer_t)734390744830053ull,
      (integer_t)737049122295084ull,
      (integer_t)755464339419260ull,
      (integer_t)805758300164451ull,
      (integer_t)817561751990035ull,
      (integer_t)826494966358267ull,
      (integer_t)860963117500619ull,
      (integer_t)873721743582851ull,
      (integer_t)874234136413218ull,
      (integer_t)881639130439681ull,
      (integer_t)883647572519298ull,
      (integer_t)897094390559610ull,
      (integer_t)911378339784476ull,
      (integer_t)940608320297294ull,
      (integer_t)955535122871578ull
    },
    {
      (integer_t)11809956385223201ull, // 1000010110100010010001011111101001000110010110010
      (integer_t)14719195368360109ull, // 0000010110011101101101010110010110100001111100111
      (integer_t)12571825860065802ull, // 1101010101011100000001101111100010101111100000011
      (integer_t)11366834182081178ull, // 1011101001100100010010101010010101011001111010000
      (integer_t)13719160528758415ull, // 0111010100000100110101010100011111101000101100111
      (integer_t)13440895354468590ull, // 1100001000100001100100010011111100101110111001010
      (integer_t)13898690056861454ull, // 0000101000100100011111111010011000111011001010011
      (integer_t)12362336995308563ull, // 1101111011101100111110011110000101100001010010101
      (integer_t)11114514372408654ull, // 1000000110000010110010010000011011100100111000101
      (integer_t)10444537337315926ull, // 1010101100010001010110110100010000010011010110010
      (integer_t)13704980479412376ull, // 0100001000001101011000010111011110001011110100101
      (integer_t)12250870597205701ull, // 1111101001110100110100110010000111100010010110011
      (integer_t)14908359466708513ull, // 0000110111101111011000010010111110110101110001011
      (integer_t)12998551991511553ull, // 1010011100101110001001101100010010001101111001011
      (integer_t)15158368210512304ull, // 0111001010101100101100000001101110001111111101101
      (integer_t)16747646855274592ull, // 0100111001101100011101011111111101101101110100110
      (integer_t)10217547482366497ull, // 0101110001110010011011000000101011000000110001101
      (integer_t)12635882244909290ull, // 0000000111100110110000000111001011100110111100010
      (integer_t)10800742875807686ull, // 1101011000100011110110100010001000000011011001011
      (integer_t)9208388009876858ull // 0001011011000100100100100001010011010001000001110
    }
  },
  {
    50,
    {
      (integer_t)44041149644247ull,
      (integer_t)47876252845477ull,
      (integer_t)62748955055403ull,
      (integer_t)69402880321358ull,
      (integer_t)122253377514808ull,
      (integer_t)147382966680930ull,
      (integer_t)321240090820549ull,
      (integer_t)353028263021345ull,
      (integer_t)452469679248142ull,
      (integer_t)465432088347652ull,
      (integer_t)632599850608449ull,
      (integer_t)715862579576244ull,
      (integer_t)822946976764915ull,
      (integer_t)878315474429895ull,
      (integer_t)888197637948856ull,
      (integer_t)926546587537889ull,
      (integer_t)930864176695304ull,
      (integer_t)1016111562985335ull,
      (integer_t)1025783879644540ull,
      (integer_t)1029689782503473ull,
      (integer_t)1043364589824957ull,
      (integer_t)1059181882205681ull,
      (integer_t)1078526010185791ull,
      (integer_t)1107912269988750ull,
      (integer_t)1133380895926798ull,
      (integer_t)1207776632113367ull,
      (integer_t)1292333388207748ull,
      (integer_t)1318957272274137ull,
      (integer_t)1431725159152488ull,
      (integer_t)1484378564331450ull,
      (integer_t)1491321017756645ull,
      (integer_t)1629012309216782ull,
      (integer_t)1651119968656092ull,
      (integer_t)1652931676063710ull,
      (integer_t)1689780011223310ull,
      (integer_t)1699870097435846ull,
      (integer_t)1709147565455077ull,
      (integer_t)1711943828924553ull,
      (integer_t)1722168089028025ull,
      (integer_t)1768958924792749ull,
      (integer_t)1872782183110263ull,
      (integer_t)1957322697062278ull,
      (integer_t)2064268248218775ull,
      (integer_t)2130955099370136ull,
      (integer_t)2142241569400269ull,
      (integer_t)2157012479866761ull,
      (integer_t)2172482456200622ull,
      (integer_t)2173181522067991ull,
      (integer_t)2195364812044833ull,
      (integer_t)2280755957186920ull
    },
    {
      (integer_t)32497900402632718ull, // 10001100110001011111010101100000100111111001011010
      (integer_t)26301787734122044ull, // 10100101111110010010000001011101001010100100011100
      (integer_t)29782525284078316ull, // 10110011100010000011001101000011111010011001010101
      (integer_t)30792093431628722ull, // 10011000100010001010111010100001111011111100010010
      (integer_t)26263950219686081ull, // 01101101111100010011000000000011110100101011001010
      (integer_t)22783819762030600ull, // 11101011101101001110101100100100000000100100110010
      (integer_t)21763415102998006ull, // 01011001000101001010001110000001011001101110000000
      (integer_t)28586109924184485ull, // 11010001000010001010111101001100011010110110101000
      (integer_t)33957777840578816ull, // 10111101111111100110111000000100011110001001111110
      (integer_t)24446626418742114ull, // 10000010100110110101010001110000001110001010100100
      (integer_t)34971899973852082ull, // 11001011011110110000100111111111110110110100010100
      (integer_t)27394574692976081ull, // 00100001010100111100000110000111101010110000001011
      (integer_t)31245344216443215ull, // 11000001010010001001001100010101010111110011110100
      (integer_t)32463422993478964ull, // 01001111001001101111010110001111011000100101110001
      (integer_t)29764176732989250ull, // 10110100000001101110000011001100010101011101000111
      (integer_t)36379774487899638ull, // 10110110101101100101111010010110111110000001011111
      (integer_t)34003695396321723ull, // 01110010101011111010010000111000100100110110011111
      (integer_t)27774540646308429ull, // 11010000010110101011011010101000010100101000100111
      (integer_t)34686065514208471ull, // 10110010100110001111010101011010110111011101100001
      (integer_t)31430331641115537ull // 01111010000011101011001111000001101010111010100101
    }
  },
  {
    51,
    {
      (integer_t)85800309666034ull,
      (integer_t)118060945024253ull,
      (integer_t)236121890048506ull,
      (integer_t)546279543387856ull,
      (integer_t)566238287180291ull,
      (integer_t)628496917985811ull,
      (integer_t)801926128500737ull,
      (integer_t)1062790705572984ull,
      (integer_t)1131341325262591ull,
      (integer_t)1211588833218793ull,
      (integer_t)1230178131969585ull,
      (integer_t)1603852257001474ull,
      (integer_t)1758850021178875ull,
      (integer_t)1802906138126717ull,
      (integer_t)1845147530852473ull,
      (integer_t)2021373483804034ull,
      (integer_t)2110212819835190ull,
      (integer_t)2243642356170221ull,
      (integer_t)2353382318902209ull,
      (integer_t)2387322297005320ull,
      (integer_t)2523305027242722ull,
      (integer_t)2711294041409280ull,
      (integer_t)2717750357996067ull,
      (integer_t)2781488906207391ull,
      (integer_t)2910531447640267ull,
      (integer_t)2992927335716469ull,
      (integer_t)3039573989073143ull,
      (integer_t)3187210720442136ull,
      (integer_t)3211174608405211ull,
      (integer_t)3449157876837790ull,
      (integer_t)3569537505870649ull,
      (integer_t)3570503187511056ull,
      (integer_t)3679948294099960ull,
      (integer_t)3881996585624375ull,
      (integer_t)3921112785963615ull,
      (integer_t)3938656150848856ull,
      (integer_t)4212025426020498ull,
      (integer_t)4238117023534790ull,
      (integer_t)4503102261094411ull,
      (integer_t)4515823413374069ull,
      (integer_t)4567107434747955ull,
      (integer_t)4574465070487349ull,
      (integer_t)4649377260674803ull,
      (integer_t)4691737111070234ull,
      (integer_t)4972574291194600ull,
      (integer_t)5096517509406448ull,
      (integer_t)5304527137794307ull,
      (integer_t)5592889597873300ull,
      (integer_t)5785381490584065ull,
      (integer_t)5789683551064893ull,
      (integer_t)5900286817842846ull
    },
    {
      (integer_t)80909766400357892ull, // 111010001111011011000100111001110011100000110001111
      (integer_t)72636649594740353ull, // 110110111001111010111000001010110001101100010011010
      (integer_t)72602418983482028ull, // 100100101100110101010101011111100101000001001110001
      (integer_t)77966272832999731ull, // 110111010001011111100010000011001010111110001010101
      (integer_t)76294223999894774ull, // 110110111110111110000010100011111010100011111010000
      (integer_t)111239686916634436ull, // 010101010000101001101101100110011111101111111111101
      (integer_t)87614568065546282ull, // 100011101101011101011010010101111111100101011100010
      (integer_t)81667068538970273ull, // 011000110001101011011101101100100011111100001101100
      (integer_t)65462433863544881ull, // 011010001010110100110111001100000100101110100010100
      (integer_t)83412894403059491ull, // 001101000111011001001010011010101000110001101111011
      (integer_t)72853180322151794ull, // 101101111011011011110000011011111001000011000110010
      (integer_t)79793539142514091ull, // 001101111000110100101100110110101111001010001010110
      (integer_t)52126221119742433ull, // 110000110110001101111011010010000010001011001000000
      (integer_t)82496216637811261ull, // 011101111011100011011001011001010100100101111100101
      (integer_t)77647103458419742ull, // 001011110001100101110111111010001110100000101110001
      (integer_t)48506202012970357ull, // 001010010111001101010101000100111000010001000000100
      (integer_t)64219969860870946ull, // 000110000100101010100110011110100110011000001100100
      (integer_t)78150976443558617ull, // 001110010001111111101100110001111000100011011000110
      (integer_t)61651112936563992ull, // 100101001010011001010011000000101001101101011001000
      (integer_t)88244193401645465ull // 100000001101110101110011111011101101010001011010011
    }
  },
  {
    52,
    {
      (integer_t)40499542214118ull,
      (integer_t)80150998778446ull,
      (integer_t)172004523640313ull,
      (integer_t)451514702007280ull,
      (integer_t)588984835515213ull,
      (integer_t)718304107775602ull,
      (integer_t)731238000568981ull,
      (integer_t)1326200346386705ull,
      (integer_t)1358686651134617ull,
      (integer_t)1359302334489596ull,
      (integer_t)1560275265084997ull,
      (integer_t)1674006330656130ull,
      (integer_t)1928812856950533ull,
      (integer_t)1928847938735638ull,
      (integer_t)1987366668410211ull,
      (integer_t)2026380730667188ull,
      (integer_t)2100203011430390ull,
      (integer_t)2434707842842484ull,
      (integer_t)2460525270718617ull,
      (integer_t)2461234174353634ull,
      (integer_t)2774458211273016ull,
      (integer_t)2791152321573044ull,
      (integer_t)3120550530169994ull,
      (integer_t)4281567250889095ull,
      (integer_t)4284787280796490ull,
      (integer_t)4401824740145636ull,
      (integer_t)4483269029577527ull,
      (integer_t)4551450153253843ull,
      (integer_t)5010117934633170ull,
      (integer_t)5418896125659846ull,
      (integer_t)5452891733762679ull,
      (integer_t)5897412184230059ull,
      (integer_t)6055652210467051ull,
      (integer_t)6146368801163401ull,
      (integer_t)6148676430042765ull,
      (integer_t)6241101060339988ull,
      (integer_t)6348132974484477ull,
      (integer_t)6575733398011795ull,
      (integer_t)6614253909964252ull,
      (integer_t)6762275387467743ull,
      (integer_t)6839316411372657ull,
      (integer_t)6865129409245193ull,
      (integer_t)6908417209847445ull,
      (integer_t)6931050130704936ull,
      (integer_t)7123099508271642ull,
      (integer_t)7653285977209126ull,
      (integer_t)7749837401457896ull,
      (integer_t)8390465897606671ull,
      (integer_t)8421343886236701ull,
      (integer_t)8843724979680495ull,
      (integer_t)9129946576641296ull,
      (integer_t)9147658527571898ull
    },
    {
      (integer_t)111443775350948491ull, // 1001001100000000001010000010110000011010110111110101
      (integer_t)103945125676032344ull, // 1000101011110001011011000000100101011010011000110110
      (integer_t)124240333229043531ull, // 0001010111010110011100001011100101101001110001011011
      (integer_t)91210970528120831ull, // 0010101101001101000101000010001111110011110000010000
      (integer_t)127719099935808833ull, // 1001101011100000000111001101110111111010110010011100
      (integer_t)126574388353964899ull, // 1110011110000000001111010100111101011010001011101101
      (integer_t)116981876283229623ull, // 0010110101010011110101111110000011000111111010100010
      (integer_t)93861213746702630ull, // 0101111100100011001011100101001000000010110111011000
      (integer_t)89585755479765393ull, // 1010001100010101011001000001110001100001001011000011
      (integer_t)114103514889674005ull, // 0000001100011111010001111000010101011001010010011110
      (integer_t)130538943204539712ull, // 0000100100011011000111110011011011111010010101010011
      (integer_t)115246693859001393ull, // 0010001110101111101011001010011110011000011000101110
      (integer_t)115950412398930527ull, // 1100101010101110010010010100000011111111001100000111
      (integer_t)129124795076405763ull, // 0011111110111011000010011011111010101001110110110010
      (integer_t)128480203254762474ull, // 0100011110110111001111011000001001001011010101110111
      (integer_t)116177427314560312ull, // 0000001110110111010101001011011010110010011100011010
      (integer_t)102796713291959847ull, // 1001101110010111000100000011110000100100100011110011
      (integer_t)104455682681922290ull, // 0111000110001110001101000100111011111010110010000100
      (integer_t)76339794372684694ull, // 0011101000001000011110110001100111101000000011000000
      (integer_t)110570235042752413ull // 0111011111100110111111101001111010011100001011000010
    }
  },
  {
    53,
    {
      (integer_t)95816505682741ull,
      (integer_t)185074194582208ull,
      (integer_t)562718374356080ull,
      (integer_t)1293072505137427ull,
      (integer_t)1510576719095488ull,
      (integer_t)1662241003864459ull,
      (integer_t)1929460542952241ull,
      (integer_t)2462893946815058ull,
      (integer_t)3578367354543399ull,
      (integer_t)3941174020468798ull,
      (integer_t)4051491071096146ull,
      (integer_t)4144015372656377ull,
      (integer_t)5161038763643620ull,
      (integer_t)5298526695613426ull,
      (integer_t)5310927864013444ull,
      (integer_t)5973430231977185ull,
      (integer_t)6068778250746835ull,
      (integer_t)6069715224573017ull,
      (integer_t)6166000217168849ull,
      (integer_t)6356696254708149ull,
      (integer_t)6451107299651617ull,
      (integer_t)7226673971032828ull,
      (integer_t)7490594714498646ull,
      (integer_t)7734444664661790ull,
      (integer_t)7998492747109311ull,
      (integer_t)8102982142192292ull,
      (integer_t)8430049241445115ull,
      (integer_t)8719141036524414ull,
      (integer_t)8752145227443703ull,
      (integer_t)9441336067488392ull,
      (integer_t)9586767217493599ull,
      (integer_t)9766870085524424ull,
      (integer_t)9870058923059768ull,
      (integer_t)9943679074619903ull,
      (integer_t)10176405820281335ull,
      (integer_t)10405133262613924ull,
      (integer_t)10621855728026888ull,
      (integer_t)10886668250913045ull,
      (integer_t)11145720252526893ull,
      (integer_t)11657421826263307ull,
      (integer_t)11850575471358538ull,
      (integer_t)13670402621546519ull,
      (integer_t)13965589970486685ull,
      (integer_t)14529773221085605ull,
      (integer_t)14546681602305695ull,
      (integer_t)14582873931762018ull,
      (integer_t)14933121285846495ull,
      (integer_t)15105089801351172ull,
      (integer_t)15322990546047798ull,
      (integer_t)16474198630608205ull,
      (integer_t)16953932755465356ull,
      (integer_t)17411457384761330ull,
      (integer_t)17535150725548227ull
    },
    {
      (integer_t)185273279410357678ull, // 11010000000011010000000100100110100110011001110001001
      (integer_t)189450303588385554ull, // 10100111010000101010010110001011000011010101001001010
      (integer_t)204964938005514953ull, // 11011101100010111111101000110010001111010100100110000
      (integer_t)208157508098878777ull, // 10001000110011101001101100111011110001001011000010001
      (integer_t)231584473710873807ull, // 01110101100011100001110101110101100001101010111100100
      (integer_t)238194660443806987ull, // 11010111111100110111000110001110110110011111000000011
      (integer_t)156479608532475263ull, // 11000000111001001010000110100100001011000010000110010
      (integer_t)283907029296631090ull, // 00001010001011110111101000100110001011011101111010111
      (integer_t)232034954633820448ull, // 11010011010010010000011001111011000011101000001101111
      (integer_t)239677055185279267ull, // 01010100110000111100101101110110000001111001011100011
      (integer_t)220401322682371141ull, // 10000001110101100110110111100010000001011110001001110
      (integer_t)205910714307952035ull, // 00011100001001001011100011001000111100010110100110001
      (integer_t)242707828649488305ull, // 01100100110101101110111001010010101100100100100110111
      (integer_t)215390279435558557ull, // 10001011101101101001010001111100100000011110001110001
      (integer_t)246657998638535979ull, // 01100000111110100111100010011100011110010110011010101
      (integer_t)189241843795405418ull, // 10001011110011001111001000101001000011010110001110000
      (integer_t)201353326466317612ull, // 01011101111111101001101011001110001000000000000110111
      (integer_t)218533949901899715ull, // 01110010100000101100000111010101011001101111110001000
      (integer_t)139598758069839119ull, // 10100100001111101010001001001100100100000000101000001
      (integer_t)186500875293447008ull // 10101111100000111100000111001011000010001000101110100
    }
  },
  {
    54,
    {
      (integer_t)608410205653501ull,
      (integer_t)722885851715770ull,
      (integer_t)1050604659818045ull,
      (integer_t)2153671317213260ull,
      (integer_t)2856207590334665ull,
      (integer_t)3233094551666684ull,
      (integer_t)3553398377998317ull,
      (integer_t)3769758251591123ull,
      (integer_t)4052322208389446ull,
      (integer_t)4291155654563321ull,
      (integer_t)4717951571932070ull,
      (integer_t)5596918024851890ull,
      (integer_t)7409742039669417ull,
      (integer_t)7669290966695075ull,
      (integer_t)8127915196509548ull,
      (integer_t)8146327753438770ull,
      (integer_t)8941293675254526ull,
      (integer_t)9085615536028244ull,
      (integer_t)10033271679967884ull,
      (integer_t)10036946023990535ull,
      (integer_t)10472845310839635ull,
      (integer_t)10501803868632767ull,
      (integer_t)11064477167285487ull,
      (integer_t)11297390921125202ull,
      (integer_t)11499930636712776ull,
      (integer_t)12680981591893196ull,
      (integer_t)12899991519832709ull,
      (integer_t)13002003966698835ull,
      (integer_t)13326665698587101ull,
      (integer_t)14140270565544747ull,
      (integer_t)15397835647069544ull,
      (integer_t)17322040399306526ull,
      (integer_t)18452976540631582ull,
      (integer_t)20012045415474784ull,
      (integer_t)21960997920653168ull,
      (integer_t)22128954334570974ull,
      (integer_t)22765682515718417ull,
      (integer_t)22875262316219490ull,
      (integer_t)23442470624280267ull,
      (integer_t)24784675740691520ull,
      (integer_t)26558605136881622ull,
      (integer_t)26964867001683744ull,
      (integer_t)27504557551700763ull,
      (integer_t)28524160194236792ull,
      (integer_t)28681577975290034ull,
      (integer_t)30795671294139088ull,
      (integer_t)32363145313249042ull,
      (integer_t)32582304914251188ull,
      (integer_t)33502991276478643ull,
      (integer_t)33979692589082384ull,
      (integer_t)34144184137912913ull,
      (integer_t)34644080798613052ull,
      (integer_t)34720957074759459ull,
      (integer_t)35841777238208119ull
    },
    {
      (integer_t)434760203668297962ull, // 101111110000101000100100001111101100011001000111000111
      (integer_t)368337947572924239ull, // 100000001000111111100101000001001100101010110010010010
      (integer_t)354708274331984437ull, // 010110000001010010100110001110001100000011010001011010
      (integer_t)446277568190540143ull, // 111011100110001100101010100110000100111011001011110001
      (integer_t)603044543787788397ull, // 001101110010101101000011100110111110010111001111101111
      (integer_t)431256502184517793ull, // 100100011001111101101100101010000011010111001110001100
      (integer_t)422848581055911916ull, // 001001101010110010100000100011011101000101000011011101
      (integer_t)371736117163468037ull, // 010000110000011101111010010110010000000000100010101111
      (integer_t)411825155717214103ull, // 011011111110000011001111111000001001011001000001011011
      (integer_t)466958256483719271ull, // 000101101010110011000111110010010100010110010010011111
      (integer_t)371786466727730610ull, // 101001011001101101000110000111101101000100101010100001
      (integer_t)354062030200652144ull, // 001111110001100111010010001010100101000000101001001101
      (integer_t)615583584520654056ull, // 010111101011100101011001111110100010011010110111111111
      (integer_t)334425328647737702ull, // 110100100000100000110110100111000010100011100100010001
      (integer_t)350089589448783012ull, // 110110001000101101111111011100000000001110010000111000
      (integer_t)436782192851884451ull, // 111010111101010110100010111101010100100111100011100001
      (integer_t)589005708397518711ull, // 011000100110101011111000000100111101111111011101111100
      (integer_t)537961226127455876ull, // 001110100000000011000011101011111111101110110011101100
      (integer_t)273048621742919784ull, // 001111110101010101001011101000001010100000000010001010
      (integer_t)496301701259091030ull // 001110111100010101110010001101110110000101111101011001
    }
  },
  {
    55,
    {
      (integer_t)2457286922427797ull,
      (integer_t)4098203423623291ull,
      (integer_t)4591089792677193ull,
      (integer_t)5483348601412815ull,
      (integer_t)5705868868079384ull,
      (integer_t)6387860008953490ull,
      (integer_t)7359075187959979ull,
      (integer_t)7513123224405240ull,
      (integer_t)9829147689711188ull,
      (integer_t)11949536633854048ull,
      (integer_t)14743721534566782ull,
      (integer_t)15722292346102772ull,
      (integer_t)22270914688848848ull,
      (integer_t)23528770031422252ull,
      (integer_t)24327475486568205ull,
      (integer_t)26356360190135893ull,
      (integer_t)26622856925978567ull,
      (integer_t)27440480237256411ull,
      (integer_t)27511999694056053ull,
      (integer_t)27983907536213911ull,
      (integer_t)28218472465435045ull,
      (integer_t)29468445213924998ull,
      (integer_t)30794394899123507ull,
      (integer_t)31394945848149852ull,
      (integer_t)31453942516141831ull,
      (integer_t)31475339862810948ull,
      (integer_t)31944729991561361ull,
      (integer_t)33251039646274597ull,
      (integer_t)33901871614633341ull,
      (integer_t)33909997457236693ull,
      (integer_t)35381828229629769ull,
      (integer_t)35395965310827850ull,
      (integer_t)35859013237705321ull,
      (integer_t)37141828750660653ull,
      (integer_t)41690129850567831ull,
      (integer_t)43564097995678270ull,
      (integer_t)44010619969531197ull,
      (integer_t)44069856033761864ull,
      (integer_t)44150510318731105ull,
      (integer_t)44518468011829374ull,
      (integer_t)44626812115312241ull,
      (integer_t)45340859612988395ull,
      (integer_t)45535010295747712ull,
      (integer_t)45749671268627317ull,
      (integer_t)47959922230427433ull,
      (integer_t)54634919109669590ull,
      (integer_t)56009392265212828ull,
      (integer_t)56492028057192507ull,
      (integer_t)56886687752555692ull,
      (integer_t)58364394553053329ull,
      (integer_t)59633573860910624ull,
      (integer_t)61432173060694925ull,
      (integer_t)65125763735122921ull,
      (integer_t)66177344588675018ull,
      (integer_t)66308751195133387ull
    },
    {
      (integer_t)784624312619449381ull, // 1010111000111001000111111000010111001110100000100100010
      (integer_t)1055865761925571440ull, // 0010101110110111110100000101100010001100111010110110111
      (integer_t)563988921016373196ull, // 0000001101110100010000001001000001100000011110000001010
      (integer_t)1122266183375947753ull, // 1111110101101000011011111101000100100111110101011011101
      (integer_t)1003576755828762754ull, // 1111100011110011101101000011011000010011010111001110101
      (integer_t)988283579823627784ull, // 1011011110100001001101110010110010010111010111001001011
      (integer_t)1089538158294098691ull, // 0110011011100110111100010000111011011110100111110110001
      (integer_t)1143774080686121253ull, // 1010101010110101111011111100010110010111011110011100110
      (integer_t)914832965984269909ull, // 0010000111000110001101111100100000011001000101111011010
      (integer_t)1079826183421182723ull, // 0010100110111111110111111011011111000000100101101010101
      (integer_t)838780138704858343ull, // 1101011110111010001010001110000011010011010000000101111
      (integer_t)741614435203575052ull, // 1111100101100111010010110100001000011110111000010100000
      (integer_t)1019929541653288169ull, // 0101000111011011000110011011101000111011101110110100010
      (integer_t)848994010462530456ull, // 1001011110110000100001010001010111001110101000111100001
      (integer_t)787969449283004450ull, // 0001101011011111111110110001101011010000100000011100000
      (integer_t)816775854205822560ull, // 0100000011101010100100100010001110111001100100010101100
      (integer_t)710163386027988970ull, // 1110000000110000000100100011110011100010001110110000010
      (integer_t)1258986424164183704ull, // 0011000111110011000011100101100010101010011111111111111
      (integer_t)1046432688194230597ull, // 1000110000011110010000001011000111101101111110010011011
      (integer_t)919033648251987245ull // 1101001001000110110010111110010000110111000010011011010
    }
  },
  {
    56,
    {
      (integer_t)972527119269875ull,
      (integer_t)5277036027371227ull,
      (integer_t)10936971958438555ull,
      (integer_t)12057515242581527ull,
      (integer_t)12298137064204472ull,
      (integer_t)14956600969161697ull,
      (integer_t)15084911086162076ull,
      (integer_t)19984151511101759ull,
      (integer_t)24640828952004024ull,
      (integer_t)26421854115255469ull,
      (integer_t)32344642933171168ull,
      (integer_t)32941948357668979ull,
      (integer_t)35540852462241471ull,
      (integer_t)37202187143507167ull,
      (integer_t)47106876224081252ull,
      (integer_t)49789853681315699ull,
      (integer_t)50035520193632509ull,
      (integer_t)52586676061575547ull,
      (integer_t)52932453205869890ull,
      (integer_t)57405287358955099ull,
      (integer_t)65025898162232159ull,
      (integer_t)69356953393121360ull,
      (integer_t)70221589260120544ull,
      (integer_t)72910251379872497ull,
      (integer_t)74404374287014334ull,
      (integer_t)74930244190831490ull,
      (integer_t)79205813564015390ull,
      (integer_t)83922993987899967ull,
      (integer_t)94058073372551260ull,
      (integer_t)96784511368053756ull,
      (integer_t)97318120493758015ull,
      (integer_t)99054648832649716ull,
      (integer_t)100240829055773769ull,
      (integer_t)105339107944898810ull,
      (integer_t)115673750396653657ull,
      (integer_t)121191586314801880ull,
      (integer_t)122543608180987050ull,
      (integer_t)125635312910718305ull,
      (integer_t)125647976226582561ull,
      (integer_t)126479689872738898ull,
      (integer_t)130208000719686325ull,
      (integer_t)130904617751932457ull,
      (integer_t)131559520903713240ull,
      (integer_t)132714705540006409ull,
      (integer_t)136607575901571151ull,
      (integer_t)137254575366564757ull,
      (integer_t)144718752477082470ull,
      (integer_t)145159501036453631ull,
      (integer_t)145600249595824792ull,
      (integer_t)147548480502914118ull,
      (integer_t)152305782384218698ull,
      (integer_t)163693350233729593ull,
      (integer_t)166255871758291212ull,
      (integer_t)167474193512701902ull,
      (integer_t)168111290586254803ull,
      (integer_t)175513451534148186ull
    },
    {
      (integer_t)2411901422205825856ull, // 01101101100100100011001111011001000010001111100101101010
      (integer_t)2027438481340894045ull, // 00100000000011001110001101101001001001100010000100101110
      (integer_t)2161245319788193747ull, // 11101111100101010000011011100001000111111110010000101000
      (integer_t)2480151777838578011ull, // 10100000000111000011110100110100110001110110010101001101
      (integer_t)2542080864208878660ull, // 01100100100110110101101101100111110011001000000010111011
      (integer_t)2071423956394607454ull, // 00110010010100100110011000111011011011000100100000110001
      (integer_t)3070599691632912838ull, // 01100101010111110001110110110101011100001111110011111001
      (integer_t)1942560290580678844ull, // 10000111100101001100011011100001000011110001101100000100
      (integer_t)2808680280062497425ull, // 01100110000010101111000011100101111101011010101100110011
      (integer_t)3318411762520455785ull, // 10001101110000011100111001011001110111101101011101011111
      (integer_t)2428639411842257098ull, // 00011011111100111101001000010001000111000001011011011110
      (integer_t)2100663607323320988ull, // 00100110000001000001010101111110000100101100000101100011
      (integer_t)2588669599442220198ull, // 10110100000011101111010100111111011001111000001100011001
      (integer_t)2222935614014554287ull, // 10000010010110001001101101011111000100010011111000100100
      (integer_t)2606399301061277091ull, // 01100011001001111010110000101001000010001111101110110101
      (integer_t)2088690282487533601ull, // 00010000101000101000111110110110100100111000100100100001
      (integer_t)2502925332651847698ull, // 00111011001000001111001000101011110011101001011011011000
      (integer_t)2062075838181467549ull, // 10001001001001000000011001010101110001000111100111010000
      (integer_t)2473301424575264948ull, // 11011110110111000110011001101110101101001011111101000000
      (integer_t)1872414640190194568ull // 11001010100110100010001000100000100101110010101000110010
    }
  },
  {
    57,
    {
      (integer_t)6044469878849170ull,
      (integer_t)14455681890386951ull,
      (integer_t)31671698985666028ull,
      (integer_t)51735523045697574ull,
      (integer_t)52618437643844958ull,
      (integer_t)56062592976028529ull,
      (integer_t)61786828581906980ull,
      (integer_t)68151532733726869ull,
      (integer_t)82706445134677007ull,
      (integer_t)92944563290415042ull,
      (integer_t)98599499208230966ull,
      (integer_t)101317183286241594ull,
      (integer_t)105236875287689916ull,
      (integer_t)112125185952057058ull,
      (integer_t)133874320052995468ull,
      (integer_t)139306459956044196ull,
      (integer_t)139422887586759772ull,
      (integer_t)141913757667703325ull,
      (integer_t)161695880692346136ull,
      (integer_t)168326626413167614ull,
      (integer_t)170210358575036796ull,
      (integer_t)180872585256296846ull,
      (integer_t)192973126298230126ull,
      (integer_t)196757541117388240ull,
      (integer_t)198186472900666849ull,
      (integer_t)212762482045298496ull,
      (integer_t)215596232043452206ull,
      (integer_t)216517362606830717ull,
      (integer_t)218506426974706306ull,
      (integer_t)222891529865108802ull,
      (integer_t)227351540624694411ull,
      (integer_t)234905160411217351ull,
      (integer_t)241951719556858613ull,
      (integer_t)251933183829603673ull,
      (integer_t)263969738350703482ull,
      (integer_t)280312964880142645ull,
      (integer_t)285546994414800338ull,
      (integer_t)302009603881497812ull,
      (integer_t)306567674691434854ull,
      (integer_t)313663276801939622ull,
      (integer_t)314759552524540246ull,
      (integer_t)316519687110059521ull,
      (integer_t)333437145128623700ull,
      (integer_t)351210051565737073ull,
      (integer_t)357803485934857011ull,
      (integer_t)360553437371567854ull,
      (integer_t)360640543942395240ull,
      (integer_t)370790778677455251ull,
      (integer_t)377957174511316888ull,
      (integer_t)378076974812940128ull,
      (integer_t)379930103198329986ull,
      (integer_t)380236209916285409ull,
      (integer_t)383226820382889955ull,
      (integer_t)384905530028619306ull,
      (integer_t)393236486940452561ull,
      (integer_t)396372945801333698ull,
      (integer_t)397145183040058020ull
    },
    {
      (integer_t)5649700063294619293ull, // 000001000100111101100101010101001100011001000011100111000
      (integer_t)6727647612974950169ull, // 010000101001000111111001101100111011110010100111010101000
      (integer_t)8659619469834910699ull, // 011110000100000001111011100100101111111100101111100111111
      (integer_t)7421887556106954357ull, // 011111101100101001101111001101001101110100011101010111001
      (integer_t)5237442789918900061ull, // 011001110110010101100111010000000001100001101011001000101
      (integer_t)5624992353810248014ull, // 111011001101011110001100010001101110100010000001101101010
      (integer_t)8041753543721830713ull, // 010010110111000000111111101111011110111111111100000001110
      (integer_t)8774395520574423959ull, // 111011111110011111111001001011011001010101100111111111110
      (integer_t)5942343285379235272ull, // 010011010101011000101111100011101000010000011010101100110
      (integer_t)6228811470174777921ull, // 110110101101101010011001001011101110000111011000001001101
      (integer_t)6246549344623897954ull, // 011101011011001111010110011001110000100110001110010110001
      (integer_t)8033202581382234758ull, // 111100001111010010111110111100001111111100011111110001001
      (integer_t)6394092405398623893ull, // 100111000100011010011111100001000011111000100111001001101
      (integer_t)8111326200671988216ull, // 110000010011110011101111010001111111111101111001010100110
      (integer_t)6396447035088693021ull, // 010011001000010110110001011001100100111101001111100000101
      (integer_t)6760384816178293326ull, // 000101110100111011001110110001010101111100100010000110111
      (integer_t)6171756898839626344ull, // 000111100001100100001011001011111010101110110101000001001
      (integer_t)4697295567717097030ull, // 001111010100011100001001011000000100010000101100000011110
      (integer_t)7156326799227467829ull, // 101110010100110110101101111101111000110001111000011010110
      (integer_t)7953259661105301556ull // 110100011000010000011101110000110111111111001110111001011
    }
  },
  {
    58,
    {
      (integer_t)4487287076357924ull,
      (integer_t)13758590632413379ull,
      (integer_t)14293672083358611ull,
      (integer_t)15612891237791875ull,
      (integer_t)19607734418360295ull,
      (integer_t)20827534005284178ull,
      (integer_t)27405822828434152ull,
      (integer_t)32609217028557935ull,
      (integer_t)73034492264232168ull,
      (integer_t)88032768775014878ull,
      (integer_t)88775080855628739ull,
      (integer_t)89413214074861099ull,
      (integer_t)92384823864029050ull,
      (integer_t)117362946958267095ull,
      (integer_t)140598931929151577ull,
      (integer_t)166650666099205782ull,
      (integer_t)173115261367335419ull,
      (integer_t)184769647728058100ull,
      (integer_t)186299753423213459ull,
      (integer_t)200632442632162177ull,
      (integer_t)217044366973015095ull,
      (integer_t)222824321263668444ull,
      (integer_t)225425482319051729ull,
      (integer_t)238117753412842005ull,
      (integer_t)245631711139732317ull,
      (integer_t)252864376179986982ull,
      (integer_t)259252425850018764ull,
      (integer_t)281857473435519786ull,
      (integer_t)283025304163362372ull,
      (integer_t)309093135857392764ull,
      (integer_t)355332770182619556ull,
      (integer_t)358557019054696281ull,
      (integer_t)363436008465714529ull,
      (integer_t)392237710299793030ull,
      (integer_t)415351234419540242ull,
      (integer_t)416908197622887883ull,
      (integer_t)425123601434041153ull,
      (integer_t)447487235030228542ull,
      (integer_t)449261568020468426ull,
      (integer_t)457208551108643586ull,
      (integer_t)486612828533644425ull,
      (integer_t)490276972782451711ull,
      (integer_t)507284554692379907ull,
      (integer_t)510289444404565979ull,
      (integer_t)521847208807158251ull,
      (integer_t)524500658816033394ull,
      (integer_t)543712025259766798ull,
      (integer_t)559084332034667616ull,
      (integer_t)559661964214554395ull,
      (integer_t)590248828512901517ull,
      (integer_t)594274804777106335ull,
      (integer_t)605276743966682141ull,
      (integer_t)623237828919955675ull,
      (integer_t)652688903251451228ull,
      (integer_t)655965550284602151ull,
      (integer_t)657832351461144461ull,
      (integer_t)662115377320465204ull,
      (integer_t)666149665099326968ull
    },
    {
      (integer_t)1ull*(integer_t)10000000000000000000ull+(integer_t)826389292384802501ull, // 1001000111110110010011111111000001011010111010001011110101
      (integer_t)6506968785922762383ull, // 0100000111100111011000111110000010000011001000110000001100
      (integer_t)9958767962532062377ull, // 0001101010110001010000001011010100000111001010111011111010
      (integer_t)9153812328479646046ull, // 0110110011110000110110001001100000111111010111001000110001
      (integer_t)9041976359044986305ull, // 1000101101001111001000010111101101001011110101001110000100
      (integer_t)9528270374968218389ull, // 0100100111111111111101001011001101111011010000010010110010
      (integer_t)8957788305270347051ull, // 1110001011010011000001011101101001000011100110101010101001
      (integer_t)8622131524290924946ull, // 0110010110001000100010000111100010001101010110010011110100
      (integer_t)8810981639110810119ull, // 0111111011111100100000101101001000100110010001011110000111
      (integer_t)7877914899370587196ull, // 0000101011001110110010101100001001010110010101100001100010
      (integer_t)9526042410995738482ull, // 1011110010101111001010100101000111001111110000100001111100
      (integer_t)1ull*(integer_t)10000000000000000000ull+(integer_t)1057507383448771049ull, // 1001111101010100110110011001110001011110101011011100011110
      (integer_t)5769323494493859544ull, // 0110110110000010010000111111001010101001001000000100010000
      (integer_t)7443062948123151087ull, // 1101000101001011001101000000010001001100001001001111000101
      (integer_t)9751425825169495672ull, // 0011100011010011110110110100010111000101010000110111101010
      (integer_t)8021432316546704925ull, // 1001001011101011110110100001011101000010100000011001011100
      (integer_t)1ull*(integer_t)10000000000000000000ull+(integer_t)483898032366258672ull, // 0111011111010000001001101000101001101110011100011101010111
      (integer_t)1ull*(integer_t)10000000000000000000ull+(integer_t)653552098754299491ull, // 1000100000100000010011010011011010001111001011111111000101
      (integer_t)5905854166764127426ull, // 1101001011101001011010011011011000100011010000000100001000
      (integer_t)8431394103707151629ull // 0111011111011011001100110001010001111010101000000110110010
    }
  },
  {
    59,
    {
      (integer_t)20298875179292809ull,
      (integer_t)25150109612916239ull,
      (integer_t)28300827713159897ull,
      (integer_t)139869237178037025ull,
      (integer_t)143216949599428605ull,
      (integer_t)145482669803673055ull,
      (integer_t)199702547416793350ull,
      (integer_t)275594312286982060ull,
      (integer_t)297266199544050475ull,
      (integer_t)354522863481578601ull,
      (integer_t)434684391639211819ull,
      (integer_t)438394496470095846ull,
      (integer_t)480329046735192821ull,
      (integer_t)482669010550548291ull,
      (integer_t)507844850059827290ull,
      (integer_t)544566970684554523ull,
      (integer_t)544887764637259755ull,
      (integer_t)576637137561018537ull,
      (integer_t)601919267640851804ull,
      (integer_t)614971309382132688ull,
      (integer_t)680004889504362956ull,
      (integer_t)732606752222036528ull,
      (integer_t)812067494315573413ull,
      (integer_t)846687603511292909ull,
      (integer_t)857959524374001718ull,
      (integer_t)874970585942380523ull,
      (integer_t)929067826671085869ull,
      (integer_t)939342960553045646ull,
      (integer_t)948474570516765953ull,
      (integer_t)964075446749406053ull,
      (integer_t)975333858494901840ull,
      (integer_t)1002730175169674381ull,
      (integer_t)1015689700119654580ull,
      (integer_t)1036637000389080823ull,
      (integer_t)1054732511051410156ull,
      (integer_t)1069806577158974882ull,
      (integer_t)1094826024319038231ull,
      (integer_t)1104827846665606809ull,
      (integer_t)1108188758650557265ull,
      (integer_t)1133078359422464915ull,
      (integer_t)1154907531236973663ull,
      (integer_t)1179748354024327379ull,
      (integer_t)1184693428857410633ull,
      (integer_t)1231438755366263758ull,
      (integer_t)1232139362994863505ull,
      (integer_t)1242820646253071643ull,
      (integer_t)1245733135820556094ull,
      (integer_t)1251303946830623145ull,
      (integer_t)1254838388044066517ull,
      (integer_t)1258243446477425273ull,
      (integer_t)1268365478651724706ull,
      (integer_t)1312648357673146938ull,
      (integer_t)1313334863712034741ull,
      (integer_t)1315928564072568477ull,
      (integer_t)1350595044725630925ull,
      (integer_t)1353697157595166686ull,
      (integer_t)1361193249734905701ull,
      (integer_t)1416064393150209065ull,
      (integer_t)1421144603673727093ull
    },
    {
      (integer_t)2ull*(integer_t)10000000000000000000ull+(integer_t)8136696609092938369ull, // 00101100100110000111000011101010110111110111111010010000110
      (integer_t)1ull*(integer_t)10000000000000000000ull+(integer_t)8402568858239122465ull, // 11111000100001100101000010100000000001000010101111110110000
      (integer_t)2ull*(integer_t)10000000000000000000ull+(integer_t)2227868960857836944ull, // 11001110110010111111010010010000011000111000001101010101010
      (integer_t)2ull*(integer_t)10000000000000000000ull+(integer_t)6656114787087152078ull, // 10011001101001010001111111100101110000001011110110010101010
      (integer_t)2ull*(integer_t)10000000000000000000ull+(integer_t)9937116716909563524ull, // 11001111011011000011110001010111001001010111110111010010111
      (integer_t)2ull*(integer_t)10000000000000000000ull+(integer_t)3889195020385093727ull, // 00111001000010110110110100101011010111000100100011111010000
      (integer_t)2ull*(integer_t)10000000000000000000ull+(integer_t)2037256684877855220ull, // 01011110111100110000111000001000111010001001010101110010100
      (integer_t)2ull*(integer_t)10000000000000000000ull+(integer_t)2099342710884818657ull, // 11101010001111101000101001100100010101100101010011011000001
      (integer_t)2ull*(integer_t)10000000000000000000ull+(integer_t)5480240896541407791ull, // 00010010010010011010010111011010000001100101101010111010011
      (integer_t)1ull*(integer_t)10000000000000000000ull+(integer_t)6900427559841352710ull, // 01000001000010110001111100100101100100000000101010000110000
      (integer_t)3ull*(integer_t)10000000000000000000ull+(integer_t)1328633436221023702ull, // 00010101110110011111111110101011000011111011001101011001101
      (integer_t)2ull*(integer_t)10000000000000000000ull+(integer_t)6677740351138317625ull, // 10000111101111110110001111000110001000011011010010110110011
      (integer_t)1ull*(integer_t)10000000000000000000ull+(integer_t)3270230888996447628ull, // 11110101100010101100010100000000010000001000101000001110000
      (integer_t)2ull*(integer_t)10000000000000000000ull+(integer_t)699366673432127051ull, // 11110010100010001001101110110000010100001110110011000101000
      (integer_t)3ull*(integer_t)10000000000000000000ull+(integer_t)5814876828281188887ull, // 10010110001011010011010111111111111111001111110001000111111
      (integer_t)2ull*(integer_t)10000000000000000000ull+(integer_t)7130969490238103585ull, // 10011000011001100100010000100110001101010111110111101101001
      (integer_t)2ull*(integer_t)10000000000000000000ull+(integer_t)7633534639973168800ull, // 10010011100111011000100010000110010111001111111110000110101
      (integer_t)2ull*(integer_t)10000000000000000000ull+(integer_t)4682173553571344665ull, // 11100100100000110000100011001010000101100101001110111111010
      (integer_t)2ull*(integer_t)10000000000000000000ull+(integer_t)3944043146017508872ull, // 11010110111101101100111101111001011010000111010100001000001
      (integer_t)2ull*(integer_t)10000000000000000000ull+(integer_t)5752645535573252275ull // 00101100000111110101110001010000100001111011000100101111110
    }
  },
  {
    60,
    {
      (integer_t)36483511403656926ull,
      (integer_t)79572520490612721ull,
      (integer_t)91364572857048482ull,
      (integer_t)161501042489007280ull,
      (integer_t)177116934387283666ull,
      (integer_t)189643842603503876ull,
      (integer_t)200993379825926092ull,
      (integer_t)224553715419073771ull,
      (integer_t)275448193057210073ull,
      (integer_t)371406891123542561ull,
      (integer_t)457389848633189986ull,
      (integer_t)660113084987149030ull,
      (integer_t)672960807584908265ull,
      (integer_t)709461407320092519ull,
      (integer_t)717028830720535550ull,
      (integer_t)778058208124261955ull,
      (integer_t)842289745167011036ull,
      (integer_t)977850681415364956ull,
      (integer_t)999321994586587383ull,
      (integer_t)1063313415595463247ull,
      (integer_t)1084162820481123046ull,
      (integer_t)1100556634283613552ull,
      (integer_t)1109806827004665896ull,
      (integer_t)1110388465403665701ull,
      (integer_t)1118055419154573974ull,
      (integer_t)1145684563719914797ull,
      (integer_t)1258411084118217921ull,
      (integer_t)1262884493700731762ull,
      (integer_t)1296140763377815840ull,
      (integer_t)1386103562890187397ull,
      (integer_t)1408818539315359466ull,
      (integer_t)1476487352759659165ull,
      (integer_t)1525040053221761695ull,
      (integer_t)1534259693725538185ull,
      (integer_t)1539619216321177884ull,
      (integer_t)1547816123222423137ull,
      (integer_t)1762223805376141806ull,
      (integer_t)1803035221035889037ull,
      (integer_t)1948585814321152228ull,
      (integer_t)1949802882874275321ull,
      (integer_t)2013506264881713896ull,
      (integer_t)2050037781762216000ull,
      (integer_t)2061934981152913266ull,
      (integer_t)2085956493100116763ull,
      (integer_t)2135300409177143418ull,
      (integer_t)2141969338967212058ull,
      (integer_t)2171712337443955223ull,
      (integer_t)2207652965442454688ull,
      (integer_t)2317625731383012079ull,
      (integer_t)2436071646991932202ull,
      (integer_t)2509038669799246054ull,
      (integer_t)2530378807653351769ull,
      (integer_t)2535086417953033634ull,
      (integer_t)2548845339586948015ull,
      (integer_t)2592281526755631680ull,
      (integer_t)2656484153513484751ull,
      (integer_t)2681367157360728741ull,
      (integer_t)2777328128196465151ull,
      (integer_t)2797387438792881730ull,
      (integer_t)2811838664305627726ull
    },
    {
      (integer_t)4ull*(integer_t)10000000000000000000ull+(integer_t)4626670794024732859ull, // 101011100111110110111100011110110100010011011000010011100011
      (integer_t)2ull*(integer_t)10000000000000000000ull+(integer_t)8337399022511926941ull, // 010100100001010100101110000000111010101000101100000000010010
      (integer_t)5ull*(integer_t)10000000000000000000ull+(integer_t)1818134067188117146ull, // 110101101010000001011010011110101111000001110110111110110110
      (integer_t)4ull*(integer_t)10000000000000000000ull+(integer_t)4552182399408792077ull, // 010011000110101010001011100110101101000101110010111010111000
      (integer_t)3ull*(integer_t)10000000000000000000ull+(integer_t)9670990364170838116ull, // 101110110010001010111010101011111001010010000110000010110110
      (integer_t)4ull*(integer_t)10000000000000000000ull+(integer_t)4138266308912476751ull, // 100111011111111010111101011111011101010001001010110001100010
      (integer_t)4ull*(integer_t)10000000000000000000ull+(integer_t)1882225231822531122ull, // 111011100001101110111000111010001110011100110001101010010010
      (integer_t)5ull*(integer_t)10000000000000000000ull+(integer_t)73577737358040211ull, // 001110011001101011110111001110011100010111111010111001010010
      (integer_t)4ull*(integer_t)10000000000000000000ull+(integer_t)9127599988038369545ull, // 110000011100101011101011100111010101100000010111111001110110
      (integer_t)3ull*(integer_t)10000000000000000000ull+(integer_t)9969633315180195412ull, // 000010110111101000100110010010011100011100000100001110101011
      (integer_t)3ull*(integer_t)10000000000000000000ull+(integer_t)7410615234205297922ull, // 100000100011010001010101110010100001101101001101001010011000
      (integer_t)3ull*(integer_t)10000000000000000000ull+(integer_t)2120321234338631679ull, // 001100100001111100100001010110011000101110000111010000001000
      (integer_t)3ull*(integer_t)10000000000000000000ull+(integer_t)7942224079144238364ull, // 010000010011111010110011010010111010000101011100010100000110
      (integer_t)4ull*(integer_t)10000000000000000000ull+(integer_t)4624806836535128631ull, // 010010110101000111000100001110111000100001110101001100110111
      (integer_t)4ull*(integer_t)10000000000000000000ull+(integer_t)6618150952275153950ull, // 100010100000100111001011100011010011111111000110100101110100
      (integer_t)3ull*(integer_t)10000000000000000000ull+(integer_t)6323480330463401435ull, // 100111101101000010010110000001100001100110010001000110111100
      (integer_t)4ull*(integer_t)10000000000000000000ull+(integer_t)4073664992031448939ull, // 110110111101100111000110100111101110101100010101000100111100
      (integer_t)5ull*(integer_t)10000000000000000000ull+(integer_t)3481926677636878816ull, // 000001000110011100100001110000111111111101100001111110111001
      (integer_t)4ull*(integer_t)10000000000000000000ull+(integer_t)822603696265848990ull, // 110110011010001000111100010010111100001000001111010111100001
      (integer_t)3ull*(integer_t)10000000000000000000ull+(integer_t)489428300229756526ull // 000110110001100100000001011010000000010010011011001110000001
    }
  },
  {
    61,
    {
      (integer_t)96960022781917071ull,
      (integer_t)342322464491094623ull,
      (integer_t)435528702559447825ull,
      (integer_t)447480640474684485ull,
      (integer_t)467850592303656667ull,
      (integer_t)556384516333139156ull,
      (integer_t)578115538828307467ull,
      (integer_t)607349796000179623ull,
      (integer_t)710311812952673950ull,
      (integer_t)805376303471089216ull,
      (integer_t)927416224070787162ull,
      (integer_t)959504705391227970ull,
      (integer_t)1009807015713783985ull,
      (integer_t)1013470982143557065ull,
      (integer_t)1090434630453324462ull,
      (integer_t)1174426907194126222ull,
      (integer_t)1277178591262273092ull,
      (integer_t)1335382832244695379ull,
      (integer_t)1347349383338920852ull,
      (integer_t)1383801375755360498ull,
      (integer_t)1486022548864733618ull,
      (integer_t)1554579838627104029ull,
      (integer_t)1606203649557800610ull,
      (integer_t)1754131769367163931ull,
      (integer_t)1883951541852836699ull,
      (integer_t)2016873793085555874ull,
      (integer_t)2019614031427567970ull,
      (integer_t)2104237097269123753ull,
      (integer_t)2213514708424823991ull,
      (integer_t)2353128572667744003ull,
      (integer_t)2364695301729287613ull,
      (integer_t)2365664035790990037ull,
      (integer_t)2550213196781814394ull,
      (integer_t)2831875772280900975ull,
      (integer_t)2906296582670235732ull,
      (integer_t)2970424087663164714ull,
      (integer_t)2974461550694755755ull,
      (integer_t)3179509075513955984ull,
      (integer_t)3240040505094527082ull,
      (integer_t)3287330571071788095ull,
      (integer_t)3314020466819506137ull,
      (integer_t)3413558434706090917ull,
      (integer_t)3447565590192462030ull,
      (integer_t)3530584229283131915ull,
      (integer_t)3647762742430850818ull,
      (integer_t)3852655318717426079ull,
      (integer_t)4089272034837298159ull,
      (integer_t)4114290934964776211ull,
      (integer_t)4123209746959199561ull,
      (integer_t)4177342740894786710ull,
      (integer_t)4225648088422167896ull,
      (integer_t)4492788174858641157ull,
      (integer_t)4517592040609621841ull,
      (integer_t)4528751845541142565ull,
      (integer_t)4694043662346731808ull,
      (integer_t)4729390603458575226ull,
      (integer_t)4730517566548828813ull,
      (integer_t)4799869467983711894ull,
      (integer_t)5153737785810172491ull,
      (integer_t)5191159218422380985ull,
      (integer_t)5252111144601244074ull
    },
    {
      (integer_t)7ull*(integer_t)10000000000000000000ull+(integer_t)4724547939874191750ull, // 0111110011001101100100111110011000000010001110110100010100111
      (integer_t)7ull*(integer_t)10000000000000000000ull+(integer_t)614058668651454803ull, // 0010001000010101001001000111001011110101011100110010100100001
      (integer_t)7ull*(integer_t)10000000000000000000ull+(integer_t)6136701158078123371ull, // 1001111010000001100011100000011011010111010111010000100010111
      (integer_t)8ull*(integer_t)10000000000000000000ull+(integer_t)1132600183453259195ull, // 0111101110011011101101101011000110110001011101011010001110010
      (integer_t)8ull*(integer_t)10000000000000000000ull+(integer_t)7839864034534381120ull, // 0101111001111110010001101011111000111100011011101101111000010
      (integer_t)9ull*(integer_t)10000000000000000000ull+(integer_t)217562337575041633ull, // 1100101010001111000110101110111010001110111101101011000101011
      (integer_t)7ull*(integer_t)10000000000000000000ull+(integer_t)3925649266636916781ull, // 0101110000100111010111000000010100101110100010001001011100111
      (integer_t)6ull*(integer_t)10000000000000000000ull+(integer_t)5074325762506954681ull, // 1001000110111100100110000011000100100000101011101101001100010
      (integer_t)8ull*(integer_t)10000000000000000000ull+(integer_t)403289491263911024ull, // 1000011000000010111010110110010010100111101100010011001110011
      (integer_t)8ull*(integer_t)10000000000000000000ull+(integer_t)7334692361670507863ull, // 1111101010001001111100001110001110101101011000111111101010100
      (integer_t)7ull*(integer_t)10000000000000000000ull+(integer_t)8839865518804472541ull, // 0101001101101010101011000110001110010101111000110110001010101
      (integer_t)6ull*(integer_t)10000000000000000000ull+(integer_t)3838965806107647525ull, // 1110010010100101100000011110110101110111101000110000100001000
      (integer_t)7ull*(integer_t)10000000000000000000ull+(integer_t)7762782740155466810ull, // 1110111111010010111000011111001110110101010010011110100011000
      (integer_t)9ull*(integer_t)10000000000000000000ull+(integer_t)8134720178494778259ull, // 1101110110010110011000110111111010011011101001101001010111111
      (integer_t)6ull*(integer_t)10000000000000000000ull+(integer_t)6198449083387119121ull, // 1100000010111001101111000001001101000001000000101111001100011
      (integer_t)8ull*(integer_t)10000000000000000000ull+(integer_t)549196007020235450ull, // 1011101101111000011011100111110011000111000110100000001101111
      (integer_t)8ull*(integer_t)10000000000000000000ull+(integer_t)5128628182332860650ull, // 1111100110011110111011000111011111101000000000110011101100111
      (integer_t)8ull*(integer_t)10000000000000000000ull+(integer_t)2787684830886969516ull, // 1000111000011110010001100111011000011011111101110010100101100
      (integer_t)7ull*(integer_t)10000000000000000000ull+(integer_t)6143476444020144226ull, // 1001001011100000111000100011111010001101010011000001110111001
      (integer_t)6ull*(integer_t)10000000000000000000ull+(integer_t)3520246138873556471ull // 1000000001001001010100010101010001010000101000100111001001011
    }
  },
  {
    62,
    {
      (integer_t)172838875735083598ull,
      (integer_t)440189947514980440ull,
      (integer_t)571669613165099603ull,
      (integer_t)639017976213443544ull,
      (integer_t)738483686586292709ull,
      (integer_t)786482864464625784ull,
      (integer_t)1271027937442586362ull,
      (integer_t)1462923951534216132ull,
      (integer_t)1784616383097467800ull,
      (integer_t)1877461492758342949ull,
      (integer_t)2072479404329279303ull,
      (integer_t)2134262539247571099ull,
      (integer_t)2471521435988142706ull,
      (integer_t)2602811369597311930ull,
      (integer_t)2607489508616313810ull,
      (integer_t)2607925005732501189ull,
      (integer_t)2837770790427827534ull,
      (integer_t)3352603894294858243ull,
      (integer_t)3469572812123345843ull,
      (integer_t)3524641703705172174ull,
      (integer_t)3575998648261223633ull,
      (integer_t)3647993527421433748ull,
      (integer_t)3857587561743853566ull,
      (integer_t)4258834886833711069ull,
      (integer_t)4319955655048646175ull,
      (integer_t)4456378543291184513ull,
      (integer_t)4524226730812835109ull,
      (integer_t)4605664855995285051ull,
      (integer_t)4811759366255294986ull,
      (integer_t)4845089677932607879ull,
      (integer_t)4891612295422781435ull,
      (integer_t)4966162840436922337ull,
      (integer_t)5679898983239594604ull,
      (integer_t)5953206875066023719ull,
      (integer_t)5988066094137540007ull,
      (integer_t)6074530020594777217ull,
      (integer_t)6095542030292085822ull,
      (integer_t)6923677824347064183ull,
      (integer_t)7036856655616690404ull,
      (integer_t)7305165671789055295ull,
      (integer_t)7568541017345374573ull,
      (integer_t)7606473473079163829ull,
      (integer_t)7677373482080087785ull,
      (integer_t)8295336522852646472ull,
      (integer_t)8453402981321103231ull,
      (integer_t)8524770669191535488ull,
      (integer_t)8588242495062930865ull,
      (integer_t)8724963025451698834ull,
      (integer_t)9251540229116878701ull,
      (integer_t)9743760178582235766ull,
      (integer_t)9963032887217691894ull,
      (integer_t)9976400487083983347ull,
      (integer_t)1ull*(integer_t)10000000000000000000ull+(integer_t)243959123519309677ull,
      (integer_t)1ull*(integer_t)10000000000000000000ull+(integer_t)529576181543765789ull,
      (integer_t)1ull*(integer_t)10000000000000000000ull+(integer_t)543547854604368719ull,
      (integer_t)1ull*(integer_t)10000000000000000000ull+(integer_t)547421670146772951ull,
      (integer_t)1ull*(integer_t)10000000000000000000ull+(integer_t)673868888253366635ull,
      (integer_t)1ull*(integer_t)10000000000000000000ull+(integer_t)740422696577324843ull,
      (integer_t)1ull*(integer_t)10000000000000000000ull+(integer_t)1012300019176800461ull,
      (integer_t)1ull*(integer_t)10000000000000000000ull+(integer_t)1034332695316886957ull,
      (integer_t)1ull*(integer_t)10000000000000000000ull+(integer_t)1296604093569930023ull,
      (integer_t)1ull*(integer_t)10000000000000000000ull+(integer_t)1459457920550778965ull
    },
    {
      (integer_t)18ull*(integer_t)10000000000000000000ull+(integer_t)6782916591852424373ull, // 00000011011111010101111101111101110101001101001011000000110011
      (integer_t)16ull*(integer_t)10000000000000000000ull+(integer_t)7266986669208658227ull, // 01100001010000011001111111100100010101110100010100111011000100
      (integer_t)18ull*(integer_t)10000000000000000000ull+(integer_t)2159200742170885637ull, // 00000001000110111100101010001000010010111101111100010100111100
      (integer_t)18ull*(integer_t)10000000000000000000ull+(integer_t)5629491302799258262ull, // 00111010100000000011110010110001011001111001011110110001001110
      (integer_t)15ull*(integer_t)10000000000000000000ull+(integer_t)3703694365778084622ull, // 10100010100100110000010000010011001011010101001001101010101001
      (integer_t)18ull*(integer_t)10000000000000000000ull+(integer_t)6202094856677365876ull, // 01000010001000101011011111111001001110110010101001010111100010
      (integer_t)20ull*(integer_t)10000000000000000000ull+(integer_t)963798023614438140ull, // 00001011011100111011110000001111110100110101110001011001101101
      (integer_t)16ull*(integer_t)10000000000000000000ull+(integer_t)1241816562835117082ull, // 10100100111011000100010110010000000011010100101001101110101100
      (integer_t)19ull*(integer_t)10000000000000000000ull+(integer_t)1714501573903705443ull, // 10111110011100101100010111011001100001110101110011110110011000
      (integer_t)16ull*(integer_t)10000000000000000000ull+(integer_t)2231900519941586883ull, // 00011110110110101100010011000010001000110011111001010110011000
      (integer_t)23ull*(integer_t)10000000000000000000ull+(integer_t)936694130834246807ull, // 11110101001110101000001100100111000000111111011111010111101111
      (integer_t)22ull*(integer_t)10000000000000000000ull+(integer_t)4837785247328901038ull, // 11000010010011111000111001110011011100111111101011111100100101
      (integer_t)19ull*(integer_t)10000000000000000000ull+(integer_t)2005454161990388146ull, // 01000110010110000101010110110001101011101001010101001011110101
      (integer_t)16ull*(integer_t)10000000000000000000ull+(integer_t)5290603744076297526ull, // 00001011110010101000010101110000101011110101000100000110101110
      (integer_t)14ull*(integer_t)10000000000000000000ull+(integer_t)5781132924596717289ull, // 00110100110010011001010001010101100010000111001001011010100100
      (integer_t)19ull*(integer_t)10000000000000000000ull+(integer_t)6895625385153189054ull, // 10100111100001100011001011101010000010111111110010111001010101
      (integer_t)25ull*(integer_t)10000000000000000000ull+(integer_t)4545191145254780814ull, // 00010110000111110101011111111000011011111011000111101101111111
      (integer_t)21ull*(integer_t)10000000000000000000ull+(integer_t)6133811330923428860ull, // 00111101110001010011010110010110110001111010110100111001111101
      (integer_t)13ull*(integer_t)10000000000000000000ull+(integer_t)5358701253240603153ull, // 01010100011111101000000000101111100001110100001101101000000100
      (integer_t)15ull*(integer_t)10000000000000000000ull+(integer_t)7692998845575030020ull // 00100111010111010110000111111110110110010100010101000100100001
    }
  },
  {
    63,
    {
      (integer_t)475244974923840849ull,
      (integer_t)718822793192589940ull,
      (integer_t)1190392157999837797ull,
      (integer_t)2154967565087416235ull,
      (integer_t)2441711114220027605ull,
      (integer_t)2795051212829333824ull,
      (integer_t)3775213146077051480ull,
      (integer_t)5113626428947055306ull,
      (integer_t)5432410616776196519ull,
      (integer_t)5510897462618913336ull,
      (integer_t)5531117254820724775ull,
      (integer_t)5541497306259468703ull,
      (integer_t)5590102425658667648ull,
      (integer_t)5870533844972892584ull,
      (integer_t)5986893223262967217ull,
      (integer_t)6222778329895419883ull,
      (integer_t)6973502591459697612ull,
      (integer_t)7175324254292023307ull,
      (integer_t)7256592096982755647ull,
      (integer_t)7460916977222513700ull,
      (integer_t)7635335309485140705ull,
      (integer_t)8064101515492279249ull,
      (integer_t)8111608271683442417ull,
      (integer_t)8152242193028808587ull,
      (integer_t)8354987125936838772ull,
      (integer_t)8833919062565459031ull,
      (integer_t)9713351150252759796ull,
      (integer_t)9761649029711216616ull,
      (integer_t)1ull*(integer_t)10000000000000000000ull+(integer_t)341131072724314076ull,
      (integer_t)1ull*(integer_t)10000000000000000000ull+(integer_t)867355905269628629ull,
      (integer_t)1ull*(integer_t)10000000000000000000ull+(integer_t)895378882142874299ull,
      (integer_t)1ull*(integer_t)10000000000000000000ull+(integer_t)1245528901180175065ull,
      (integer_t)1ull*(integer_t)10000000000000000000ull+(integer_t)1618078830205226836ull,
      (integer_t)1ull*(integer_t)10000000000000000000ull+(integer_t)1665066868485193638ull,
      (integer_t)1ull*(integer_t)10000000000000000000ull+(integer_t)2072771936537707140ull,
      (integer_t)1ull*(integer_t)10000000000000000000ull+(integer_t)2445556659790839766ull,
      (integer_t)1ull*(integer_t)10000000000000000000ull+(integer_t)3573438933766118874ull,
      (integer_t)1ull*(integer_t)10000000000000000000ull+(integer_t)4080197644288334690ull,
      (integer_t)1ull*(integer_t)10000000000000000000ull+(integer_t)4593424153906537230ull,
      (integer_t)1ull*(integer_t)10000000000000000000ull+(integer_t)4819440644035981405ull,
      (integer_t)1ull*(integer_t)10000000000000000000ull+(integer_t)4921833954445027400ull,
      (integer_t)1ull*(integer_t)10000000000000000000ull+(integer_t)4990664970745851505ull,
      (integer_t)1ull*(integer_t)10000000000000000000ull+(integer_t)6087991111219028872ull,
      (integer_t)1ull*(integer_t)10000000000000000000ull+(integer_t)6250265499506126526ull,
      (integer_t)1ull*(integer_t)10000000000000000000ull+(integer_t)6405986713794955871ull,
      (integer_t)1ull*(integer_t)10000000000000000000ull+(integer_t)6508550517072057321ull,
      (integer_t)1ull*(integer_t)10000000000000000000ull+(integer_t)6521538467375684840ull,
      (integer_t)1ull*(integer_t)10000000000000000000ull+(integer_t)6887833875164408952ull,
      (integer_t)1ull*(integer_t)10000000000000000000ull+(integer_t)6953596451393315448ull,
      (integer_t)1ull*(integer_t)10000000000000000000ull+(integer_t)7105261171341213619ull,
      (integer_t)1ull*(integer_t)10000000000000000000ull+(integer_t)7891932044123466303ull,
      (integer_t)1ull*(integer_t)10000000000000000000ull+(integer_t)8069037924836047742ull,
      (integer_t)1ull*(integer_t)10000000000000000000ull+(integer_t)8095784578149723054ull,
      (integer_t)1ull*(integer_t)10000000000000000000ull+(integer_t)8122531231463398366ull,
      (integer_t)1ull*(integer_t)10000000000000000000ull+(integer_t)8790072123017437581ull,
      (integer_t)1ull*(integer_t)10000000000000000000ull+(integer_t)9032263039560781917ull,
      (integer_t)1ull*(integer_t)10000000000000000000ull+(integer_t)9126336025133728799ull,
      (integer_t)1ull*(integer_t)10000000000000000000ull+(integer_t)9380840060861709911ull,
      (integer_t)1ull*(integer_t)10000000000000000000ull+(integer_t)9603538019363459168ull,
      (integer_t)2ull*(integer_t)10000000000000000000ull+(integer_t)7820465754283275ull,
      (integer_t)2ull*(integer_t)10000000000000000000ull+(integer_t)254843793705872135ull,
      (integer_t)2ull*(integer_t)10000000000000000000ull+(integer_t)256913787508415383ull,
      (integer_t)2ull*(integer_t)10000000000000000000ull+(integer_t)739201491052204602ull
    },
    {
      (integer_t)24ull*(integer_t)10000000000000000000ull+(integer_t)2774041031045017412ull, // 011110000001010001011010011100000100111000001000000100101010010
      (integer_t)48ull*(integer_t)10000000000000000000ull+(integer_t)1814224768707220247ull, // 011111111100110011101111101101111011111011110011001110100011110
      (integer_t)38ull*(integer_t)10000000000000000000ull+(integer_t)4686449715050509161ull, // 110100111110101011011101101011101011001000011011000111110010100
      (integer_t)25ull*(integer_t)10000000000000000000ull+(integer_t)9126126173025093467ull, // 001010101010100000001010011100000110000101011101110100000100000
      (integer_t)40ull*(integer_t)10000000000000000000ull+(integer_t)8820715199866873011ull, // 100001000111010010110001001101100101000110101011100001111110111
      (integer_t)36ull*(integer_t)10000000000000000000ull+(integer_t)1968658533876320130ull, // 100110101110011010001000110111010010100101110111101010001000011
      (integer_t)35ull*(integer_t)10000000000000000000ull+(integer_t)2952811702755243607ull, // 100010010000100111000010010000110010010100001010101111111100110
      (integer_t)36ull*(integer_t)10000000000000000000ull+(integer_t)6706710241308822105ull, // 110100001010001110011001101011011001111100111001011000110010100
      (integer_t)30ull*(integer_t)10000000000000000000ull+(integer_t)3999063234522966599ull, // 100011111101001110010000010011001101000000110010101001011000110
      (integer_t)38ull*(integer_t)10000000000000000000ull+(integer_t)7567934263058360254ull, // 110000100101001111000101001101000111111010000010111110000101111
      (integer_t)26ull*(integer_t)10000000000000000000ull+(integer_t)8226671153082656512ull, // 000100110000110111111111110000110011110100000001100000001100000
      (integer_t)27ull*(integer_t)10000000000000000000ull+(integer_t)5903991980438479258ull, // 000001011110010001000100010000000010010101100001100001101101010
      (integer_t)39ull*(integer_t)10000000000000000000ull+(integer_t)8774789130406861676ull, // 111110001100000101001010100100010010010111111110111100010100111
      (integer_t)27ull*(integer_t)10000000000000000000ull+(integer_t)6938763490977462123ull, // 101000111011011010001111011101001010100011100010000000001000011
      (integer_t)44ull*(integer_t)10000000000000000000ull+(integer_t)9152758320824584000ull, // 101110011101010110011011001111001101111100101101011100110011011
      (integer_t)29ull*(integer_t)10000000000000000000ull+(integer_t)2880880443146204471ull, // 010100110000010110000110100001110000101100001111001100000110010
      (integer_t)37ull*(integer_t)10000000000000000000ull+(integer_t)2868017587976378146ull, // 111110111000100111000101000101101010111011110000100111100101100
      (integer_t)35ull*(integer_t)10000000000000000000ull+(integer_t)9144667471937350769ull, // 110100100000011101010111110100000101100101010101110011000011011
      (integer_t)40ull*(integer_t)10000000000000000000ull+(integer_t)9833299854855745934ull, // 100000011011111110111101000110101001010010011111101001101001011
      (integer_t)34ull*(integer_t)10000000000000000000ull+(integer_t)2279359987739468224ull // 101110000111101100000011011011100000100011001000001000111111101
    }
  },
  {
    64,
    {
      (integer_t)237303968119921469ull,
      (integer_t)1469924527754282677ull,
      (integer_t)3403874469347854959ull,
      (integer_t)5045247226299341439ull,
      (integer_t)5113058877679960712ull,
      (integer_t)5225523248551442704ull,
      (integer_t)5655508272791801669ull,
      (integer_t)8686753708755153317ull,
      (integer_t)1ull*(integer_t)10000000000000000000ull+(integer_t)58362079097697219ull,
      (integer_t)1ull*(integer_t)10000000000000000000ull+(integer_t)882580619067330710ull,
      (integer_t)1ull*(integer_t)10000000000000000000ull+(integer_t)1638995546056409367ull,
      (integer_t)1ull*(integer_t)10000000000000000000ull+(integer_t)1733167962245076556ull,
      (integer_t)1ull*(integer_t)10000000000000000000ull+(integer_t)2537281304674348689ull,
      (integer_t)1ull*(integer_t)10000000000000000000ull+(integer_t)2628569624245606629ull,
      (integer_t)1ull*(integer_t)10000000000000000000ull+(integer_t)3484858757685950628ull,
      (integer_t)1ull*(integer_t)10000000000000000000ull+(integer_t)4114978409241114751ull,
      (integer_t)1ull*(integer_t)10000000000000000000ull+(integer_t)4982569240894514148ull,
      (integer_t)1ull*(integer_t)10000000000000000000ull+(integer_t)6610489161371887549ull,
      (integer_t)1ull*(integer_t)10000000000000000000ull+(integer_t)8157916633076603229ull,
      (integer_t)1ull*(integer_t)10000000000000000000ull+(integer_t)9505985535223714559ull,
      (integer_t)1ull*(integer_t)10000000000000000000ull+(integer_t)9784704892054388079ull,
      (integer_t)2ull*(integer_t)10000000000000000000ull+(integer_t)298157940765547697ull,
      (integer_t)2ull*(integer_t)10000000000000000000ull+(integer_t)3974755422979437553ull,
      (integer_t)2ull*(integer_t)10000000000000000000ull+(integer_t)4151672632148389392ull,
      (integer_t)2ull*(integer_t)10000000000000000000ull+(integer_t)4912278617734908464ull,
      (integer_t)2ull*(integer_t)10000000000000000000ull+(integer_t)5061448479454104948ull,
      (integer_t)2ull*(integer_t)10000000000000000000ull+(integer_t)5440454791151364083ull,
      (integer_t)2ull*(integer_t)10000000000000000000ull+(integer_t)6581260234677973646ull,
      (integer_t)2ull*(integer_t)10000000000000000000ull+(integer_t)6732413547251979787ull,
      (integer_t)2ull*(integer_t)10000000000000000000ull+(integer_t)7065244610122673371ull,
      (integer_t)2ull*(integer_t)10000000000000000000ull+(integer_t)8159264893485526238ull,
      (integer_t)2ull*(integer_t)10000000000000000000ull+(integer_t)8432663168875592605ull,
      (integer_t)3ull*(integer_t)10000000000000000000ull+(integer_t)2343805354389657804ull,
      (integer_t)3ull*(integer_t)10000000000000000000ull+(integer_t)2600219679678706778ull,
      (integer_t)3ull*(integer_t)10000000000000000000ull+(integer_t)3566887182437216405ull,
      (integer_t)3ull*(integer_t)10000000000000000000ull+(integer_t)5078776239628015005ull,
      (integer_t)3ull*(integer_t)10000000000000000000ull+(integer_t)5133488664859731221ull,
      (integer_t)3ull*(integer_t)10000000000000000000ull+(integer_t)5146602794754323651ull,
      (integer_t)3ull*(integer_t)10000000000000000000ull+(integer_t)5420106897630622705ull,
      (integer_t)3ull*(integer_t)10000000000000000000ull+(integer_t)5583455672752589204ull,
      (integer_t)3ull*(integer_t)10000000000000000000ull+(integer_t)5897857088797865348ull,
      (integer_t)3ull*(integer_t)10000000000000000000ull+(integer_t)6315833266153206458ull,
      (integer_t)3ull*(integer_t)10000000000000000000ull+(integer_t)6721245966939932664ull,
      (integer_t)3ull*(integer_t)10000000000000000000ull+(integer_t)6745334585005211594ull,
      (integer_t)3ull*(integer_t)10000000000000000000ull+(integer_t)6899529480855920944ull,
      (integer_t)3ull*(integer_t)10000000000000000000ull+(integer_t)7097935631694601420ull,
      (integer_t)4ull*(integer_t)10000000000000000000ull+(integer_t)1091817524802652332ull,
      (integer_t)4ull*(integer_t)10000000000000000000ull+(integer_t)1726240086612752416ull,
      (integer_t)4ull*(integer_t)10000000000000000000ull+(integer_t)2652849944209455566ull,
      (integer_t)4ull*(integer_t)10000000000000000000ull+(integer_t)3610416295301405658ull,
      (integer_t)4ull*(integer_t)10000000000000000000ull+(integer_t)4512071213098649692ull,
      (integer_t)4ull*(integer_t)10000000000000000000ull+(integer_t)4530525480291706297ull,
      (integer_t)4ull*(integer_t)10000000000000000000ull+(integer_t)4780834306087984531ull,
      (integer_t)4ull*(integer_t)10000000000000000000ull+(integer_t)5381797063066807464ull,
      (integer_t)4ull*(integer_t)10000000000000000000ull+(integer_t)5442832818385278963ull,
      (integer_t)4ull*(integer_t)10000000000000000000ull+(integer_t)5917440754625121901ull,
      (integer_t)4ull*(integer_t)10000000000000000000ull+(integer_t)8007848392593173421ull,
      (integer_t)4ull*(integer_t)10000000000000000000ull+(integer_t)8383252577081907357ull,
      (integer_t)5ull*(integer_t)10000000000000000000ull+(integer_t)2144366070825954135ull,
      (integer_t)5ull*(integer_t)10000000000000000000ull+(integer_t)3365058693555027644ull,
      (integer_t)5ull*(integer_t)10000000000000000000ull+(integer_t)3464827094503959574ull,
      (integer_t)5ull*(integer_t)10000000000000000000ull+(integer_t)3578790858961491915ull,
      (integer_t)5ull*(integer_t)10000000000000000000ull+(integer_t)4289094860697871763ull,
      (integer_t)5ull*(integer_t)10000000000000000000ull+(integer_t)4775604886815282721ull
    },
    {
      (integer_t)84ull*(integer_t)10000000000000000000ull+(integer_t)9037271969868390345ull, // 1010101101100000000011000011100101110001010000010011010101111100
      (integer_t)84ull*(integer_t)10000000000000000000ull+(integer_t)1700698951939350811ull, // 1011000000111011010101000110100001010001111000110011010100100101
      (integer_t)81ull*(integer_t)10000000000000000000ull+(integer_t)2756701313516248508ull, // 0010100101101001110111110101011101111100110010100001000000110000
      (integer_t)106ull*(integer_t)10000000000000000000ull+(integer_t)2852276924718667194ull, // 0111001001101100100000101111111000100110111100011111001001010111
      (integer_t)104ull*(integer_t)10000000000000000000ull+(integer_t)9460609424205336517ull, // 1100110001001101101110000111111110110100000111110001110001110011
      (integer_t)111ull*(integer_t)10000000000000000000ull+(integer_t)899943406930988372ull, // 0110101110010100110011110010101011101110100011110001000111101111
      (integer_t)90ull*(integer_t)10000000000000000000ull+(integer_t)8623634247883922954ull, // 0010001101011011101111111000111000111001100110110100100000110001
      (integer_t)114ull*(integer_t)10000000000000000000ull+(integer_t)5324417050720814321ull, // 0011111000101001011111010111010000011011110010011110111111101100
      (integer_t)103ull*(integer_t)10000000000000000000ull+(integer_t)9954052084402941892ull, // 1011100001101000011100101010110100110010010110101101101111001101
      (integer_t)76ull*(integer_t)10000000000000000000ull+(integer_t)710786177635943556ull, // 1000010001111100110011011011011000000001011101001100001100001010
      (integer_t)117ull*(integer_t)10000000000000000000ull+(integer_t)2956804851232417249ull, // 1000101101001010110111110100110001011011011110100110110111010111
      (integer_t)98ull*(integer_t)10000000000000000000ull+(integer_t)7101718333888938864ull, // 1101011111110010000001110110110111101011010001111100001010010110
      (integer_t)83ull*(integer_t)10000000000000000000ull+(integer_t)4686750333599686444ull, // 0001110010100001010011000011111111110000100011001101011100010000
      (integer_t)90ull*(integer_t)10000000000000000000ull+(integer_t)2343641317465722166ull, // 1001101010000100001111101000100011111010010000111001110001010110
      (integer_t)66ull*(integer_t)10000000000000000000ull+(integer_t)9413767097555712113ull, // 1001110100001010100110001010000010010000010110001000110011000110
      (integer_t)75ull*(integer_t)10000000000000000000ull+(integer_t)4084809402565777608ull, // 0000011000011111100110011100011001111000000011010101000010011000
      (integer_t)102ull*(integer_t)10000000000000000000ull+(integer_t)927581615976183281ull, // 0101010011101110001011110101001101111101110001111101110001000001
      (integer_t)74ull*(integer_t)10000000000000000000ull+(integer_t)9891608988794879327ull, // 0000000101001110010001110010100100110101000000110001001000110101
      (integer_t)88ull*(integer_t)10000000000000000000ull+(integer_t)9571540598918901921ull, // 0010101010000001011110011100100110011000011110000010101010011011
      (integer_t)92ull*(integer_t)10000000000000000000ull+(integer_t)237509902629544711ull // 1110101010101111111001011000010101110010110110100111001100010010
    }
  },
  {
    0
  }
};

//
// That's all, folks!
//
