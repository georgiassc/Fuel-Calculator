# Fuel Cost Calculator

![image](https://github.com/user-attachments/assets/c5f2c7f1-15ee-47ab-b756-bfb4a4fddaf1)

This repository contains a C program designed to help users determine whether ethanol or gasoline is the more cost-effective fuel choice. The decision is based on the price-to-consumption ratio, ensuring users make an informed choice based on their vehicle’s efficiency and current fuel prices.

## How It Works

Ethanol has a lower energy density than gasoline, meaning that a vehicle consumes more ethanol to travel the same distance as it would with gasoline. On average:
- A car requires approximately **1.3 liters of ethanol** to cover the same distance as **1 liter of gasoline**.

### **The 70% Rule**  

To determine which fuel is more economical, the **70% rule** is applied:  
- If the price of ethanol is **less than or equal to 70%** of the price of gasoline, **ethanol is the better option**.  
- If the price of ethanol is **greater than 70%** of the price of gasoline, **gasoline is the more cost-effective choice**.  

The formula used is:  
```
Gasoline Price * 0.70
```
- If the result is **greater than the ethanol price**, ethanol is recommended.  
- If the result is **less than the ethanol price**, gasoline is the better choice.  
- If the result is exactly equal to the ethanol price, both fuels are equally cost-effective.  

## **How the Program Works**  

The function `math(float pG, float pE)` receives two prices:  
- `pG`: The price per liter of **gasoline**  
- `pE`: The price per liter of **ethanol**  

It then applies the **70% rule** and returns:  
- `0` → Gasoline is the better choice.  
- `1` → Ethanol is the better choice.  
- `2` → Both are equally cost-effective.  

## **How to Use**  

1. **Compile the program** using a C compiler (e.g., GCC):  
   ```sh
   cc main.c math.c putchar.c -o fuel_calculator
   ```
2. **Run the program**:  
   ```sh
   ./fuel_calculator
   ```
3. **Enter fuel prices** when prompted:  
   - Price per liter of ethanol  
   - Price per liter of gasoline  
4. The program will determine which fuel is the most cost-effective based on the 70% rule.  

## **Example Calculation**  

If fuel prices are:  
- **Gasoline:** €5.00 per liter  
- **Ethanol:** €3.20 per liter  

The calculation is:  
```
5.00 * 0.70 = 3.50
```
Since **€3.50 (70% of gasoline) is greater than €3.20 (ethanol price)**, ethanol is the more cost-effective choice.  

## Technologies Used

- **Language:** C

## How to Contribute

We welcome contributions! Follow these steps:
1. **Fork** the repository.
2. **Create a new branch** (`git checkout -b feature-branch`).
3. **Make your improvements** and commit the changes (`git commit -m 'Added feature X'`).
4. **Push your changes** (`git push origin feature-branch`).
5. **Submit a Pull Request** for review.

## License

This project is licensed under the **MIT License**. See the `LICENSE` file for more details.

