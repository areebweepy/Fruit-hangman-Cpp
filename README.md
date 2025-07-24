# 🍓 Fruit Hangman Game (C++ Console Project)

This is a simple console-based **Fruit Hangman Game** developed using **C++**.  
It was created as part of my **Programming Fundamentals (PF)** course during my **1st semester at university**.

The game challenges the user to guess a randomly selected fruit name letter-by-letter. With each wrong guess, a part of the hangman is drawn. The goal is to guess the correct word before the drawing is complete.

---

## 🎮 Gameplay Summary

- A random fruit is selected from a predefined list.
- The player guesses one letter at a time.
- Each incorrect guess increases the hangman drawing.
- The game ends when:
  - The player successfully guesses the entire word (**Win**)
  - The player reaches 6 incorrect guesses (**Lose**)
- The player is asked whether they want to play again.

---

## 🧱 Features

- Random word generation from a fruit list
- Tracks guessed letters and wrong attempts
- Hangman visual drawn using ASCII art
- Console color effects using `windows.h`
- Slide and typing text animations
- Replay option after each game

---

## Output
<img width="363" height="378" alt="image" src="https://github.com/user-attachments/assets/d54a072b-80bb-4fdf-8cf0-fd4167699d66" />

---

## 📁 Project Structure

```
FruitHangman/
├── main.cpp
├── README.md

```


---

## ⚙️ How to Run

1. Open the project in any C++ IDE (e.g., Dev C++, Code::Blocks, or Visual Studio)
2. Make sure you're on **Windows** (due to use of `<windows.h>` and `<conio.h>`)
3. Compile and run the code:

## 📋 Example Word List Used
[apple, peach, banana, strawberry, mango]

## 📌 Requirements
Windows OS (due to console-specific functions)
C++ compiler (MinGW, MSVC, etc.)
Console window (CMD or terminal)

## 🧠 Skills Demonstrated
C++ strings and arrays
Loops and conditionals
Functions and animations
Console manipulation with Windows API
ASCII art and UI logic

## 👤 Author
Mirza Areeb Baig

