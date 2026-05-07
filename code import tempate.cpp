// Variable to control the program loop
bool keepRunning = true;

while (keepRunning) {
    // Display the menu options
    cout << "\nTemperature Conversion Options:" << endl;
    cout << "1. Celsius to Fahrenheit" << endl;
    cout << "2. Fahrenheit to Celsius" << endl;
    cout << "3. Celsius to Kelvin" << endl;
    cout << "4. Kelvin to Celsius" << endl;
    cout << "5. Fahrenheit to Kelvin" << endl;
    cout << "6. Kelvin to Fahrenheit" << endl;
    cout << "7. Exit Program" << endl;
    cout << "\nEnter your choice (1-7): ";
    
    // Get user's menu choice
    int choice;
    cin >> choice;
    
    // Variable for temperature input and result
    double inputTemp, result;
    
    // Process the user's choice
    switch (choice) {