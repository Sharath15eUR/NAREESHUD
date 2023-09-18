1) Explore some other commands like -E, + and ?

Ans: 

    ubuntu@ubuntu:~$ grep -E "Pass|Fail" grepdemo.txt
    A001|Anirban Roy Choudhury|computers|95| Pass |8000
    A002|Ankit Pilania|electronics|98| Pass |8900
    C003|Ankit Saraf|civil|32| Fail |2000
    S004|Goutam dhar choudhuree|chemical|77| Pass |7700
    A005|Mani Chowdhari|electrical|23| Fail |2000
    W007|Sandeep|civil|2| Fail |0
    A008|Yogesh|computers|91| Pass |8000
    A010|Zubin|Computers|12| Fail |1500
    C011|Mira Nair|electronics|66| Pass |7000
    X012|Meera Banik|civil|76| Pass |6300
    W013|Meeraa Roy|civil 41| Pass |4000
  
    ubuntu@ubuntu:~$ grep -E "e+" grepdemo.txt
    A001|Anirban Roy Choudhury|comput e rs|95|Pass|8000
    A002|Ankit Pilania|e l e ctronics|98|Pass|8900
    S004|Goutam dhar choudhur ee|ch e mical|77|Pass|7700
    A005|Mani Chowdhari|e l ectrical|23|Fail|2000
    X006|Mohan|comput e rs|67|Incomplete|0
    W007|Sand ee p|civil|2|Fail|0
    A008|Yog e sh|compute rs|91|Pass|8000
    S009|Yojna chaudhury|e l e ctronics|38|Incompl e t e|1000
    A010|Zubin|Comput e rs|12|Fail|1500
    C011|Mira Nair|e l e ctronics|66|Pass|7000
    X012|M ee ra Banik|civil|76|Pass|6300
    W013|M ee raa Roy|civil 41|Pass|4000
    
    ubuntu@ubuntu:~$ grep -E "e?" grepdemo.txt
    A001|Anirban Roy Choudhury|comput e rs|95|Pass|8000
    A002|Ankit Pilania|e l e ctronics|98|Pass|8900
    C003|Ankit Saraf|civil|32|Fail|2000
    S004|Goutam dhar choudhur ee|ch e mical|77|Pass|7700
    A005|Mani Chowdhari|e l e ctrical|23|Fail|2000
    X006|Mohan|comput e rs|67|Incomplete|0
    W007|Sand ee p|civil|2|Fail|0
    A008|Yog e sh|comput e rs|91|Pass|8000
    S009|Yojna chaudhury|e l e ctronics|38|Incompl e t e|1000
    A010|Zubin|Comput e rs|12|Fail|1500
    C011|Mira Nair|e l e ctronics|66|Pass|7000
    X012|M ee ra Banik|civil|76|Pass|6300

![image](https://github.com/Sharath15eUR/NAREESHUD/assets/93960137/5da358f2-abd5-44c4-850d-52d1abea0219)

 

