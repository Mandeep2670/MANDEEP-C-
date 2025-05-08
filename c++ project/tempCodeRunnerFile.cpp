 void writeToErrorLog(const string& errorDetails) {
                        ofstream logFile("university_system_error.log", ios::app);
                        if (logFile.is_open()) {
                            time_t now = time(0);
                            char* dt = ctime(&now);
                            logFile << "[" << dt << "] " << errorDetails << endl;
                            logFile.close();
                        } else {
                            cout << "Warning: Unable to open error log file!" << endl;
                        }
                    }