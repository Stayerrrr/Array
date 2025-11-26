# Array Programs in C

This repository contains three simple C programs that use **1D and 2D arrays** to process different types of data. Each program has its own purpose—ranging from stock management, attendance calculation, to storing student information.

---

## 📌 Program 1 — Food Stock Management

This program stores food stock data for three days using a 2D array.

**Features:**

* Displays initial stock.
* Performs restock on a specific menu item.
* Displays stock after the update.

**Data Structure:**

* `stok[3][2]` → 3 days × 2 food items.
* `hari[3]` → day names.

**Example Operation:**

* Restock Ayam Geprek on Wednesday by **+7**.

---

## 📌 Program 2 — Student Attendance Calculation

This program calculates total attendees per day and per faculty.

**Features:**

* Processes the 2D array `hadir[2][3]`.
* Calculates total attendees for each day.
* Calculates total attendees for each faculty.
* Displays the results.

**Data Structure:**

* Rows: Faculty of Engineering & Faculty of Economics.
* Columns: Attendance for 3 days.

---

## 📌 Program 3 — Student Data Input & Output

This program asks for the number of students, then stores their data in parallel arrays.

**Stored Data:**

* Name (string)
* Student ID / NIM (string)
* GPA / IPK (float)
* Major (string)
* Status (int → 0=On Leave, 1=Active, 2=Graduated)

**Features:**

* Dynamic number of students.
* Displays all student data.
* Converts numeric status into readable text.

**Example Status Mapping:**

* `0` → On Leave
* `1` → Active
* `2` → Graduated

---

## 🛠 How to Compile & Run

Use GCC:

```bash
gcc program.c -o program
./program
```

(Replace `program.c` with each file's actual name.)

---

## 📚 Learning Objectives

These programs help you understand:

* How to use 1D and 2D arrays.
* How to store and display structured data.
* Looping through arrays.
* Basic input/output in C.

---
