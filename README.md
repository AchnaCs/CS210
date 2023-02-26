# CS210

# Summary
In project 3 I built an item-tracking program for the Corner Grocer, incorporating all of their requested functionality. They were interested in rearranging their produce section and needed to know how often items are purchased so they could create the most effective layout for their customers. The program CornerGrocerAnalyzer.cpp analyzes the text records (a list of items purchased in chronological order) generated throughout the day e.g., CornerGrocerInputs.txt. The program offers 4 menu options: (1) prompt a user to input the item or word, they wish to look for and return a numeric value for the frequency of the specific word, (2) Print the list with numbers that represent the frequency of all items purchased, (3) Print the same frequency information for all the items in the form of a histogram, and (4) exit the program. 

# What I did particularly well.
I defined a class with member functions: readData (), displayMenu(), printItemSearched(), printItemFrequency, and printItemHistogram to create and manage new objects and support inheritance which is a key element in object-oriented programming and a means of reusing code.

# How to enhance the code. 
I already validate user inputs when the user enters a specific option or when the user enters a specific word to get the frequency. I can also prompt the user to specify the file he/she wants to read and include checks to see whether the file is opened properly. This will allow Corner Grocer to read any grocery list they desire and hence increase the reusability. Having an error message when the file name is incorrect/ when a file is not opened properly will allow them to use the program efficiently and securely. 

# Challenges. 
I used maps to store grocery names and frequencies in a mapped fashion. Each element has a key value and a mapped value. Implementing maps was challenging as it requires precise coding syntax. ZyBooks readings and SNHU academic support tools like online tutoring helped me complete the task successfully. 

# Transferable skills.
This project allowed me to combine all the main concepts I learned in the course. Reading a file, writing a file, defining classes, and using the switch option are all skills that come in handy in user-friendly programs. 

# How I made the program maintainable, readable, and adaptable.
To achieve the above functionality, I used classes and standard library containers. First, I included necessary header files such as iostream, fstream, string, and map. Then defined the class ItemAnalyzer with private/public member variables, and a map data structure to hold the item names and corresponding frequencies. The program uses maps to store grocery items and the frequency as pairs, and also stores backup data automatically in the frequency.dat file. The program includes in-line comments to make it more readable. 
