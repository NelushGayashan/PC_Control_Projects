# PC Control Projects

## Overview
This repository contains various projects related to controlling PC hardware and interacting with system interrupts using C++ programming. The projects demonstrate low-level programming techniques, such as handling mouse events, managing memory, and controlling graphics mode. 

## Projects

### 1. **Interrupt Handling**

- **Description**: This project demonstrates handling keyboard interrupts and displaying the pressed key using system interrupts.
- **Location**: `Interrupt_Handling/`
- **Files**:
  - `src/InterruptHandler.cpp`: Contains code for handling keyboard interrupts.
  - `src/Main.cpp`: Main entry point for the interrupt handling demonstration.
  - `include/InterruptHandler.h`: Header file for the `InterruptHandler` class.
  - `build/Makefile`: Build script for compiling the interrupt handling code.

### 2. **Mouse Control**

#### **Mouse Restriction**

- **Description**: This project includes examples of controlling the mouse pointer within specified regions on the screen. It involves setting up the graphics mode, initializing the mouse, and restricting its movement to certain areas.
- **Location**: `Mouse_Restriction_Project/`
- **Files**:
  - `include/MouseRestrictor.h`: Header file for the `MouseRestrictor` class.
  - `src/MouseRestrictor.cpp`: Implementation of mouse restriction functionality.
  - `src/Main.cpp`: Main entry point for the mouse restriction demonstration.
  - `build/Makefile`: Build script for compiling the mouse restriction code.

### 3. **Extended Memory Check**

- **Description**: This project demonstrates how to check and display the size of the extended memory available on an IBM-compatible PC using system interrupts.
- **Location**: `Extended_Memory_Check/`
- **Files**:
  - `src/MemoryCheck.cpp`: Contains code for checking extended memory size.
  - `src/Main.cpp`: Main entry point for the memory check demonstration.
  - `include/MemoryCheck.h`: Header file for the `MemoryCheck` class.
  - `build/Makefile`: Build script for compiling the memory check code.

### 4. **Mouse Centering**

- **Description**: This project shows how to set the mouse pointer to the center of the screen using graphics mode and system interrupts.
- **Location**: `Mouse_Centering/`
- **Files**:
  - `src/CenterMouse.cpp`: Contains code for centering the mouse pointer on the screen.
  - `src/Main.cpp`: Main entry point for the mouse centering demonstration.
  - `include/CenterMouse.h`: Header file for the `CenterMouse` class.
  - `build/Makefile`: Build script for compiling the mouse centering code.

## Folder Structure

```plaintext
PC_Control_Projects/
│
├── Interrupt_Handling/
│   ├── include/
│   │   └── InterruptHandler.h
│   ├── src/
│   │   ├── InterruptHandler.cpp
│   │   └── Main.cpp
│   ├── build/
│   └── Makefile
│
├── Mouse_Restriction/
│   ├── include/
│   │   └── MouseRestrictor.h
│   ├── src/
│   │   ├── MouseRestrictor.cpp
│   │   └── Main.cpp
│   ├── build/
│   └── Makefile
│
├── Memory_Checker/
│   ├── include/
│   │   └── MemoryChecker.h
│   ├── src/
│   │   ├── MemoryChecker.cpp
│   │   └── Main.cpp
│   ├── build/
│   └── Makefile
│
├── Mouse_Centering/
│   ├── include/
│   │   └── MouseController.h
│   ├── src/
│   │   ├── MouseController.cpp
│   │   └── Main.cpp
│   ├── build/
│   └── Makefile
│
└── README.md
```

## Building

1. **Install Turbo C**: Make sure Turbo C is installed and configured properly on your system. Turbo C is a DOS-based compiler, so you may need a DOS emulator like DOSBox if you're on a modern operating system.

2. **Navigate to Project Directory**:
Open the Turbo C IDE or use a DOS command prompt to navigate to the project directory.
```
cd Interrupt_Handling
```

3. **Compile**:
Use the Turbo C IDE to open the .cpp files and compile them. Alternatively, use the command line:
```
tcc -w InterruptHandler.cpp Main.cpp -o InterruptHandler.exe
```

4. **Repeat for Other Projects**:
Navigate to each project directory and compile in a similar manner.

## Running

Execute the compiled programs from the build/ directory in each project folder:

```
cd Interrupt_Handling/build
./InterruptHandler

cd ../../Mouse_Restriction/build
./MouseRestrictor

cd ../../Memory_Checker/build
./MemoryCheck

cd ../../Mouse_Centering/build
./CenterMouse
```

## Notes

- Ensure that you are using a compatible compiler and environment that supports graphics.h, conio.h, and dos.h.
- Adjust paths and settings in the Makefile according to your development environment.

## License

This project is licensed under the MIT License. See the LICENSE file for more details.