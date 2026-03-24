# Android Development Setup Instructions

## Prerequisites
- **JDK 8 or higher:** Install JDK from [Oracle’s website](https://www.oracle.com/java/technologies/javase-jdk8-downloads.html) or use OpenJDK.
- **Android Studio:** Download and install from [Android Studio’s website](https://developer.android.com/studio).
- **Android SDK:** This is usually included with Android Studio but make sure you have the necessary SDKs installed.
- **Gradle:** Install Gradle (as per project requirements) if not included in your project.

## Setup Steps
1. **Clone the Repository:**  
   Run the following command in your terminal:  
   ```bash
   git clone https://github.com/xxMachDxx/client.git
   ```
2. **Open Android Studio:**  
   Open Android Studio and select the project directory that you cloned.
3. **Configure the Android SDK:**  
   Ensure that the SDK path is correctly set in the Android Studio settings under Appearance & Behavior > System Settings > Android SDK.
4. **Build the Project:**  
   Use the Gradle build system to build the project. Open the terminal in Android Studio and run:  
   ```bash
   ./gradlew build
   ```
5. **Run the Application:**  
   You can now run the application on an emulator or a physical device.

## Additional Notes
- Always ensure your libraries and SDKs are up to date.
- Refer to the official Android documentation for more detailed setup and configuration instructions.