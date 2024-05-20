class Solution {
public:
    
    vector<double> convertTemperature(double celsius) {
        vector<double> convertedTemperatures;
        convertedTemperatures.push_back(celsius + 273.15);
        convertedTemperatures.push_back(celsius * 1.8 + 32); 
        return convertedTemperatures;
    }
};