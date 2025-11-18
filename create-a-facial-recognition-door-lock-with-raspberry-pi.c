/*
 * Course: Create A Facial Recognition Door Lock With Raspberry Pi
 * Platform: Raspberry Pi
 * Author: Ashraf S A AlMadhoun
 * Purpose: Auto-generated metadata block to document the learning goals.
 * Notes: Auto-generated metadata block (2025-11-18)
 */

#include <stdio.h> // Include I/O for status printing
#include <unistd.h> // Include POSIX sleep functions for timing

// Define a GPIO for the door lock actuator (e.g., relay or solenoid driver)
static const int LOCK_GPIO = 18; // Use GPIO18 to control the door lock

// Stub functions to emulate hardware operations (replace with real implementations)
int gpio_export(int gpio) { return 0; } // Export a GPIO to user space
int gpio_set_direction(int gpio, int output) { return 0; } // Set GPIO direction (0=input,1=output)
int gpio_write(int gpio, int value) { return 0; } // Write a value to GPIO (0=LOW,1=HIGH)
int camera_capture_frame(void) { return 0; } // Capture a frame from the camera (stub)
int recognize_face(void) { return 1; } // Return 1 if authorized face recognized (stub)

// Program entry point
// Main routine: orchestrates the create a facial recognition door lock with raspberry pi scenario
int main(void) { // Start of main function
  printf("Facial Recognition Door Lock (Raspberry Pi)\n"); // Print startup message
  gpio_export(LOCK_GPIO); // Export GPIO for lock control
  gpio_set_direction(LOCK_GPIO, 1); // Configure lock GPIO as output
  for (int attempt = 0; attempt < 5; ++attempt) { // Try recognition multiple times
    camera_capture_frame(); // Capture an image frame from the camera
    int ok = recognize_face(); // Perform face recognition (authorized or not)
    if (ok) { // If an authorized face is detected
      printf("Access granted: unlocking door\n"); // Print access granted
      gpio_write(LOCK_GPIO, 1); // Activate lock (unlock)
      sleep(3); // Keep door unlocked for 3 seconds
      gpio_write(LOCK_GPIO, 0); // Deactivate lock (lock)
      printf("Door locked\n"); // Status message
      break; // Stop after successful unlock
    } else { // If recognition failed
      printf("Access denied: try again\n"); // Print access denied
      sleep(1); // Short delay before next attempt
    } // End conditional branch
  } // End attempts loop
  printf("Done.\n"); // Print completion message
  return 0; // Exit with success
} // End of main function

