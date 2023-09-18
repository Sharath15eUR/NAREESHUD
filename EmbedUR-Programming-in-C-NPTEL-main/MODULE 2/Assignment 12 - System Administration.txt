1.Create a new user account and home directory called "Duck"

Ans : To create a new user we can use sudo command which able to add any user account

sudo adduser

To create a home directory called "duck" we can type the following command

sudo adduser duck

it asks for password to create the user and enter name as duck and give the information correct by using y then enter ls /home/ to check the home directories present in the system


2. Set the user account "Duck's" expirey date as 07 - 01 - 2015

Ans: to set a expiry date for a particular user we can use -e option to set a expiry date

usermod command helps to modify the setting of other user accounts from the superuser

sudo usermod -e 2015-01-07 duck

3.find the id of the user account "Duck"

Ans: id command is used to check the identity of all users and groups in the system

id -u 

where -u option refer to the identity of the user

4.Type df and du commands and see the output on your terminal.

Ans : when giving df command it gives a report on the free space available on the disk

when giving du command it gives a report on how much space a file has occupied

5.Type this command on the terminal and see the output :
   du -ch *.txt
   
Ans: when giving the above command , It shows memory of the text files in the directory

6.Delete the user account "Duck" permanently along with its home folder.

Ans:to delete a user permanently from the system we can user userdel command 

to delete a user along with its directories we can use -r option 

sudo userdel -r duck
