import os
import random
clear = lambda: os.system('cls')

wordlist = ["butter", "soup", "apple", "cat", "cucumber", "orange", "bannana", "lemon"]
Remainder = []

WordToGuess = random.choice(wordlist)

for letter in WordToGuess:
    Remainder.append(letter)

WordCovered = []
AlreadyGuessed = []
CorrectWords = []

WordUncovered = WordToGuess # the word that gets slowly revealed like: b_tt_er
for letter in WordUncovered:
    WordCovered.append("_")

Attempts= 7

def Win():
    clear()
    print("You have won!")
    print("You guessed "+WordToGuess+" correctly!")
    input("Press any key to continue...")
    Menu()

def Fail():
    global WordToGuess
    global AlreadyGuessed
    global Attempts
    global CorrectWords
    global WordLength
    clear()
    print("You have not guessed the word correctly! The man was hanged!")
    print("The correct word was: "+WordToGuess)
    input("Press Any Key to return to the main menu.")
    WordToGuess = random.choice(wordlist)
    AlreadyGuessed = []
    CorrectWords = []
    Attempts= 7
    CorrectWords = 0
    Menu()

def Process(i): # i is indexed 0 because we only want the first letter.b
    clear()
    if i == "":
        print("No Letter Entered.")
        input("Press any key to continue...")
        OnePlayer()
    if i[0] in CorrectWords:
        print("Letter "+(i[0])+"already guessed!")
        OnePlayer()
    if i[0] in WordToGuess:
        global Remainder
        global WordUncovered
        print("Congrats! Your guess: "+(i[0])+" Is correct!")
        CorrectWords.append(i[0])
        while i[0] in Remainder:
            Remainder.remove(i[0])

        # reveal
        letter = i[0]
        indices = [i for i, x in enumerate(WordToGuess) if x == letter]

        for index in indices:
            WordCovered[index] = letter

    else:
        global Attempts
        print((i[0])+" is not in the word!")
        AlreadyGuessed.append(i[0])
        input("Press Enter to continue...")
        Attempts-=1
        if Attempts < 1:
            Fail()

    if Remainder == []: # if empty
        Win()

    OnePlayer()
    

def OnePlayer():
    clear()
    print("---Hang-Man - 1 Player ---")
    print("Wrong Guessed letters: "+str(AlreadyGuessed))
    print("Correct Guessed letters:"+str(CorrectWords))
    print("Attempts Left:"+str(Attempts))
    print("Letters Left:"+str(len(Remainder)))
    print("Word: "+str(WordCovered))
    i=input("Your Guess: ")
    Process(i)

def TwoPlayer():
    clear()
    print("---Hang-Man - 2 Player ---")

def Menu():
    clear()
    print("---Hang-Man---")
    print("Please use lower-case.")
    print("a) 1 Player")
    #print("b) 2 Player")
    print("Made by Asimuth, 2023. April 2th.")
    ch=input("Your Choice: ")

    if "a" in ch or "1" in ch or "A" in ch:
        OnePlayer()
    else:
        Menu()

Menu()