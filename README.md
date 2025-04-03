# Car-Parking-System

# Smart Car Parking System Using Stack

## Overview
The **Smart Car Parking System** is a simple C-based implementation that efficiently manages parking using the **Stack Data Structure**. This system simulates a real-world car parking lot where cars enter and exit following the **Last In, First Out (LIFO)** principle.

The system supports the following operations:
- **Parking a car**: Adds a car to the parking stack.
- **Removing a car**: Removes a specific car from the stack while ensuring that cars above it are temporarily moved and then restored.
- **Displaying parked cars**: Shows the current state of the parking lot.
- **Handling full and empty conditions**: Prevents overflow when parking is full and notifies the user when attempting to remove a car from an empty parking lot.

This project is an **ideal implementation for students, beginners, and developers** who want to learn **stack-based algorithms** and **real-world applications of data structures in C programming**.

## Features
- **Stack-based Parking System:** Uses a stack to manage car parking efficiently.
- **User Interaction:** Menu-driven program allowing users to choose actions.
- **Parking Constraints:** Prevents overflow and underflow conditions.
- **Dynamic Car Removal:** Efficiently removes a specific car while preserving order.
- **Error Handling:** Detects invalid operations (e.g., removing a car that is not in the parking lot).
- **Simple and Efficient Implementation:** Clean, structured, and easy-to-understand C code.

## How It Works
### 1️⃣ Parking a Car
- When a car arrives, it is pushed onto the stack.
- The system checks if there is space before allowing the operation.

### 2️⃣ Removing a Car
- If the car is at the top, it is removed immediately.
- If it is not, cars above it are temporarily moved to another stack.
- Once the car is removed, the temporarily moved cars are restored.

### 3️⃣ Displaying the Parking Status
- The program prints the list of currently parked cars.

### 4️⃣ Handling Edge Cases
- If the parking lot is full, new cars cannot be parked.
- If the parking lot is empty, no cars can be removed.
- If a car is not found, a message is displayed.

## Technologies Used
- **Programming Language:** C
- **Data Structure:** Stack (LIFO principle)
- **Development Environment:** GCC Compiler (or any C compiler)

## Installation & Usage
1. **Clone the repository:**
   ```sh
   git clone https://github.com/your-username/smart-car-parking-system.git
   cd smart-car-parking-system
   ```
2. **Compile the code:**
   ```sh
   gcc smart_parking.c -o smart_parking
   ```
3. **Run the program:**
   ```sh
   ./smart_parking
   ```

## Sample Output
```
🚦 Smart Car Parking System
1. Park a Car
2. Remove a Car
3. Display Parking
4. Exit
Enter your choice: 1
Enter Car Number: 101
Car 101 parked successfully.
```

## Future Enhancements
- Implementing **queue-based parking** for FIFO behavior.
- Adding **file storage** to save parking data persistently.
- Enhancing UI with a **graphical interface**.
- Supporting **real-time parking slot allocation**.

## Contribution
Feel free to **fork** this repository, improve the code, and submit a **pull request**. Any contributions, improvements, or bug fixes are highly appreciated!

## License
This project is **open-source** and distributed under the **MIT License**.

---
✉️ For queries or support, contact: **vinayakkhanna642@gmail.com**  
🌐 GitHub Repository: [Smart Car Parking System](https://github.com/your-username/smart-car-parking-system)

