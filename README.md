# C/C++ Solutions For UVa Problems #

## Introduction 介紹 ##

> **Here is the place where I store my UVa problem solving process**

* **Welcome to visit my website：https://weilin1205.github.io**
* **The sources of UVaTestData test datas are mainly collected from [uDebug](https://www.udebug.com). It is recommended to pass the test datas of UVaTestData before submitting.**

> **Since 2022/06**

## List 項目目錄樹 ##
```
tree /f > tree.txt
```
```
.
│  .gitignore
│  README.md
│  run.bat
│  tree.txt
│  
├─.vscode
│      c_cpp_properties.json
│      launch.json
│      settings.json
│      tasks.json
│      
├─UVaTestData
│  ├─vol001
│  │      00100.in
│  │      00100.out
│  │      00118.in
│  │      00118.out
│  │      
│  ├─vol002
│  │      00272.in
│  │      00272.out
│  │      00299.in
│  │      00299.out
│  │      
│  ├─vol003
│  │      00369.in
│  │      00369.out
│  │      
│  ├─vol004
│  │      00482.in
│  │      00482.out
│  │      00482_2.in
│  │      00482_2.out
│  │      00488.in
│  │      00488.out
│  │      00490.in
│  │      00490.out
│  │      
│  ├─vol005
│  │      00591.in
│  │      00591.out
│  │      
│  ├─vol006
│  │      00624.in
│  │      00624.out
│  │      
│  ├─vol007
│  ├─vol009
│  │      00948.in
│  │      00948.out
│  │      00990.in
│  │      00990.out
│  │      
│  ├─vol100
│  │      10008.in
│  │      10008.out
│  │      10019.in
│  │      10019.out
│  │      10035.in
│  │      10035.out
│  │      10038.in
│  │      10038.out
│  │      10041.in
│  │      10041.out
│  │      10050.in
│  │      10050.out
│  │      10055.in
│  │      10055.out
│  │      10056.in
│  │      10056.out
│  │      10057.in
│  │      10057.out
│  │      10062.in
│  │      10062.out
│  │      10071.in
│  │      10071.out
│  │      10082.in
│  │      10082.out
│  │      10093.in
│  │      10093.out
│  │      
│  ├─vol101
│  │      10101.in
│  │      10101.out
│  │      10107.in
│  │      10107.out
│  │      10130.in
│  │      10130.out
│  │      10170.in
│  │      10170.out
│  │      10189.in
│  │      10189.out
│  │      10190.in
│  │      10190.out
│  │      10193.in
│  │      10193.out
│  │      10198.in
│  │      10198.out
│  │      
│  ├─vol102
│  │      10221.in
│  │      10221.out
│  │      10222.in
│  │      10222.out
│  │      10226.in
│  │      10226.out
│  │      10235.in
│  │      10235.out
│  │      10242.in
│  │      10242.out
│  │      10252.in
│  │      10252.out
│  │      10268.in
│  │      10268.out
│  │      
│  ├─vol103
│  ├─vol104
│  │      10409.in
│  │      10409.out
│  │      10415.in
│  │      10415.out
│  │      10420.in
│  │      10420.out
│  │      
│  ├─vol106
│  │      10642.in
│  │      10642.out
│  │      
│  ├─vol107
│  │      10783.in
│  │      10783.out
│  │      10789.in
│  │      10789.out
│  │      
│  ├─vol108
│  │      10812.in
│  │      10812.out
│  │      10815.in
│  │      10815.out
│  │      
│  ├─vol109
│  │      10908.in
│  │      10908.out
│  │      10908_v2.in
│  │      10908_v2.out
│  │      10922.in
│  │      10922.out
│  │      10929.in
│  │      10929.out
│  │      10931.in
│  │      10931.out
│  │      10935.in
│  │      10935.out
│  │      
│  ├─vol110
│  │      11000.in
│  │      11000.out
│  │      11005.in
│  │      11005.out
│  │      11063.in
│  │      11063.out
│  │      
│  ├─vol111
│  │      11150.in
│  │      11150.out
│  │      
│  ├─vol113
│  │      11321.in
│  │      11321.out
│  │      11332.in
│  │      11332.out
│  │      11349.in
│  │      11349.out
│  │      11369.in
│  │      11369.out
│  │      
│  ├─vol120
│  │      12019.in
│  │      12019.out
│  │      
│  ├─vol121
│  │      12100.in
│  │      12100.out
│  │      12149.in
│  │      12149.out
│  │      
│  ├─vol123
│  │      12372.in
│  │      12372.out
│  │      
│  ├─vol124
│  │      12455.in
│  │      12455.out
│  │      12455_2.in
│  │      12455_2.out
│  │      12455_3.in
│  │      12455_3.out
│  │      
│  ├─vol125
│  │      12592.in
│  │      12592.out
│  │      
│  └─vol126
│          12650.in
│          12650.out
│          
├─volume001
│      uva00100_The_3n+1_problem.cpp
│      uva00118_Mutant_Flatworld_Explorers.cpp
│      uva00118_Mutant_Flatworld_Explorers_v2.cpp
│      
├─volume002
│      uva00272_Rotating_Sentences.cpp
│      uva00299_Train_Swapping.cpp
│      
├─volume003
│      uva00369_Combinations.cpp
│      
├─volume004
│      uva00482_Permutation_Arrays.cpp
│      uva00488_Triangle_Wave.cpp
│      uva00490_Rotating_Sentences.cpp
│      
├─volume005
│      uva00591_Box_of_Bricks.cpp
│      
├─volume006
│      uva00624_CD.cpp
│      
├─volume009
│      uva00948_Fibonaccimal_Base.cpp
│      uva00990_Diving_for_Gold.cpp
│      
├─volume100
│      uva10008_Whats_Cryptanalysis.cpp
│      uva10019_Funny_Encryption_Method.cpp
│      uva10035_Primary_Arithmetic.cpp
│      uva10038_Jolly_Jumpers.cpp
│      uva10041_Vitos_Family.cpp
│      uva10050_Hartals.cpp
│      uva10055_Hashmat_the_brave_warrior.cpp
│      uva10056_Rotating_Sentences.cpp
│      uva10057_A_mid-summer_nights_dream.cpp
│      uva10062_Tell_me_the_frequencies!.cpp
│      uva10071_Back_to_High_School_Physics.cpp
│      uva10082_WERTYU.cpp
│      uva10093_An_Easy_Problem!.cpp
│      
├─volume101
│      uva10101_Bangla_Numbers.cpp
│      uva10107_What_is_the_Median.cpp
│      uva10130_SuperSale.cpp
│      uva10170_The_Hotel_with_Infinite_Rooms.cpp
│      uva10189_Minesweeper.cpp
│      uva10190_Divide_But_Not_Quite_Conquer!.cpp
│      uva10193_All_You_Need_Is_Love.cpp
│      uva10198_Counting.cpp
│      
├─volume102
│      uva10221_Satellites.cpp
│      uva10222_Decode_the_Mad_man.cpp
│      uva10226_Hardwood_Species.cpp
│      uva10235_Simply_Emirp.cpp
│      uva10242_Fourth_Point !!.cpp
│      uva10252_Common_Permutation.cpp
│      uva10268_498-bis.cpp
│      
├─volume104
│      uva10409_Die_Game.cpp
│      uva10415_Eb_Alto_Saxophone_Player.cpp
│      uva10420_List_of_Conquests.cpp
│      
├─volume106
│      uva10642_Can_You_Solve_It.cpp
│      
├─volume107
│      uva10783_Odd_Sum.cpp
│      uva10789_Prime_Frequency.cpp
│      
├─volume108
│      uva10812_Beat_the_Spread!.cpp
│      uva10815_Andys_First_Dictionary.cpp
│      
├─volume109
│      uva10908_Largest_Square.cpp
│      uva10908_Largest_Square_v2.cpp
│      uva10922_2_the_9s.cpp
│      uva10929_You_can_say_11.cpp
│      uva10931_Parity.cpp
│      uva10935_Throwing_cards_away_I.cpp
│      
├─volume110
│      uva11000_Bee.cpp
│      uva11005_Cheapest Base.cpp
│      uva11063_B2-Sequence.cpp
│      
├─volume111
│      uva11150_Cola.cpp
│      
├─volume113
│      uva11321_Sort!_Sort!!_And_Sort!!!.cpp
│      uva11332_Summing_Digits.cpp
│      uva11349_Symmetric_Matrix.cpp
│      uva11369_Shopaholic.cpp
│      
├─volume114
│      uva11417_GCD.cpp
│      uva11461_Square_Numbers.cpp
│      uva11461_Square_Numbers_v2.cpp
│      
├─volume118
│      uva11824_A_Minimum_Land_Price.cpp
│      
├─volume119
│      uva11934_Magic_Formula.cpp
│      uva11995_I_Can_Guess_the_Data_Structure!.cpp
│      
├─volume120
│      uva12019_Dooms_Day_Algorithm.cpp
│      
├─volume121
│      uva12100_Printer_Queue.cpp
│      uva12149_Feynman.cpp
│      
├─volume123
│      uva12372_Packing_for_Holiday.cpp
│      
├─volume124
│      uva12455_Bars.cpp
│      
├─volume125
│      uva12592_Slogan_Learning_of_Princess.cpp
│      
└─volume126
        uva12650_Dangerous_Dive.cpp
        
```