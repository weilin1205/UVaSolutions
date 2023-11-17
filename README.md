# C/C++ Solutions For UVa Problems #

## Introduction 介紹 ##

> **Here is the place where I store my UVa problem solving process**

* **Welcome to visit my website：https://weilin1205.github.io**
* **The sources of UVaTestData test datas are mainly collected from [uDebug](https://www.udebug.com). It is recommended to pass the test datas of UVaTestData before submitting.**

> **Since 2022/06**

## List 項目目錄樹 ##
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
│      uva00100.cpp
│      uva00118.cpp
│      uva00118_v2.cpp
│      
├─volume002
│      uva00272.cpp
│      uva00299.cpp
│      
├─volume003
│      uva00369.cpp
│      
├─volume004
│      uva00482.cpp
│      uva00488.cpp
│      uva00490.cpp
│      
├─volume005
│      uva00591.cpp
│      
├─volume006
│      uva00624.cpp
│      
├─volume009
│      uva00948.cpp
│      uva00990.cpp
│      
├─volume100
│      uva10008.cpp
│      uva10019.cpp
│      uva10035.cpp
│      uva10038.cpp
│      uva10041.cpp
│      uva10050.cpp
│      uva10055.cpp
│      uva10056.cpp
│      uva10057.cpp
│      uva10062.cpp
│      uva10071.cpp
│      uva10082.cpp
│      uva10093.cpp
│      
├─volume101
│      uva10101.cpp
│      uva10107.cpp
│      uva10130.cpp
│      uva10170.cpp
│      uva10189.cpp
│      uva10190.cpp
│      uva10193.cpp
│      uva10198.cpp
│      
├─volume102
│      uva10221.cpp
│      uva10222.cpp
│      uva10226.cpp
│      uva10235.cpp
│      uva10242.cpp
│      uva10252.cpp
│      uva10268.cpp
│      
├─volume104
│      uva10409.cpp
│      uva10415.cpp
│      uva10420.cpp
│      
├─volume106
│      uva10642.cpp
│      
├─volume107
│      uva10783.cpp
│      uva10789.cpp
│      
├─volume108
│      uva10812.cpp
│      uva10815.cpp
│      
├─volume109
│      uva10908.cpp
│      uva10908_v2.cpp
│      uva10922.cpp
│      uva10929.cpp
│      uva10931.cpp
│      uva10935.cpp
│      
├─volume110
│      uva11000.cpp
│      uva11005.cpp
│      uva11063.cpp
│      
├─volume111
│      uva11150.cpp
│      
├─volume113
│      uva11321.cpp
│      uva11332.cpp
│      uva11349.cpp
│      uva11369.cpp
│      
├─volume114
│      uva11417.cpp
│      uva11461.cpp
│      uva11461_v2.cpp
│      
├─volume118
│      uva11824.cpp
│      
├─volume119
│      uva11934.cpp
│      uva11995.cpp
│      
├─volume120
│      uva12019.cpp
│      
├─volume121
│      uva12100.cpp
│      uva12149.cpp
│      
├─volume123
│      uva12372.cpp
│      
├─volume124
│      uva12455.cpp
│      
├─volume125
│      uva12592.cpp
│      
└─volume126
        uva12650.cpp
        

```