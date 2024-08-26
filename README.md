Description:
The Lab Appointment System is designed to streamline the process of booking and managing lab appointments. It offers a menu-driven interface with options for users to log in, register if new, book appointments for specific time slots, and view existing appointments. The system stores user credentials securely and manages appointment data in text files (database.txt and appointment.dat).

Features:
User Authentication: Allows existing users to log in securely and new users to register.
Appointment Booking: Displays available time slots and allows users to book appointments, preventing double bookings.
Appointment Management: Users can view existing appointments, categorized by time slots.
Test Selection: Offers test selection categorized by organs (e.g., heart, liver) or medical conditions (e.g., diabetes, hypertension).
User Interface: Utilizes simple console-based menus for navigation and interaction.
Implementation:
The project is implemented in C++ using basic file handling (fstream) for data storage and retrieval. It uses functions to modularize different functionalities such as login, registration, appointment booking, and test selection. Error handling is incorporated to manage invalid inputs and prevent crashes during user interaction.

Usage:
To use the system:

Compile and run the main program (main.cpp).
Follow the on-screen prompts to log in or register.
Book appointments based on available time slots and select tests as needed.
View existing appointments to manage or cancel bookings.
Future Enhancements:
Implement database integration for improved data management and scalability.
Enhance UI with graphical interfaces for better user experience.
Add additional features like appointment reminders and patient history tracking.
This project serves as a practical example of a command-line application in C++ for managing lab appointments, suitable for educational purposes and small-scale applications.
