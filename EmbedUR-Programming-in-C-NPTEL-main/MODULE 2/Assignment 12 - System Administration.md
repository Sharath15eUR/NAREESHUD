1.Create a new user account and home directory called "Duck"

Ans : To create a new user we can use sudo command which able to add any user account

    sudo adduser
    
   ![image](https://github.com/Sharath15eUR/NAREESHUD/assets/93960137/56692554-ae14-466b-82ac-0652e924746f)


To create a home directory called "duck" we can type the following command

sudo adduser duck

it asks for password to create the user and enter name as duck and give the information correct by using y then enter ls /home/ to check the home directories present in the system

2. Set the user account "Duck's" expirey date as 07 - 01 - 2015

Ans: to set a expiry date for a particular user we can use -e option to set a expiry date

usermod command helps to modify the setting of other user accounts from the superuser

    sudo usermod -e 2015-01-07 duck
 ![image](https://github.com/Sharath15eUR/NAREESHUD/assets/93960137/b1771bc7-8dc5-4090-a439-0ebb4158a0d0)


3.find the id of the user account "Duck"

Ans: id command is used to check the identity of all users and groups in the system

    id -u
![image](https://github.com/Sharath15eUR/NAREESHUD/assets/93960137/09e02681-965d-4b93-ac25-cc54d17dfd42)


where -u option refer to the identity of the user

4.Type df and du commands and see the output on your terminal.

Ans : when giving df command it gives a report on the free space available on the disk
when giving du command it gives a report on how much space a file has occupied


![image](https://github.com/Sharath15eUR/NAREESHUD/assets/93960137/ab2f2089-164c-4d1e-86c7-2bff3c3c7375)
![image](https://github.com/Sharath15eUR/NAREESHUD/assets/93960137/4c83b801-5f40-4403-a18c-a0868990f7df)
![image](https://github.com/Sharath15eUR/NAREESHUD/assets/93960137/80413264-b6e8-46c2-ab85-c54a9650740d)


5.Type this command on the terminal and see the output :
   
      du -ch *.txt
   ![image](https://github.com/Sharath15eUR/NAREESHUD/assets/93960137/13eae3d8-56da-43c5-94b1-aaf4c66d5b95)

Ans: when giving the above command , It shows memory of the text files in the directory

6.Delete the user account "Duck" permanently along with its home folder.

Ans:to delete a user permanently from the system we can user userdel command 
to delete a user along with its directories we can use -r option 

    sudo userdel -r duck
   ![image](https://github.com/Sharath15eUR/NAREESHUD/assets/93960137/ffd372c7-dbe5-405a-b331-6c9c49e9dfb6)

