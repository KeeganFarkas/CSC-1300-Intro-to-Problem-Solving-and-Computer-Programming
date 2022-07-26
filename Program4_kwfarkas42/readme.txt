Author
Keegan Farkas
kwfarkas42@tntech.edu


Project Title
CSC 1300-001 Programming Assignment 4: Processing Student Information for a Class using Structures


Description
This program was written to read information about students from a text file and perform the 
following tasks:
(1) display the students’ information 
(2) display the student’s information who has done the best in quiz
(3) display the student’s information who has done the best in midterm
(4) display the student’s information who has done the best in final term 
(5) display the student’s information who has done thebest in total marks
(6) display the class average for quiz, midterm, final term, and total marks obtained


Prerequisites 
- GCC Library


Execution
A step by step series of examples that tell you how to get a development env running

Step 1. Unzip the folder and then go to the folder
Step 2. Create a .txt file where the first line says how many students there are and the following lines
are name, quiz marks, midterm marks, and final marks in that order.
Step 3. Run your terminal from the folder
Step 4. Compile the code using the following command:
g++ -o main *.cpp 
Step 5. Execute the code using the following command:
Mac - ./main <FileName>.txt    Windows - main <FileName>.txt
Step 6. After successful execution and evaluating the program, please remove the executable file using the
following command:
Mac - rm main            Windows - del/f/q/a main.exe