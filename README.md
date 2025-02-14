# Fuel Cost Calculator

This repository contains a C program designed to help users determine whether ethanol or gasoline is the more cost-effective fuel choice. The decision is based on the price-to-consumption ratio, ensuring users make an informed choice based on their vehicle’s efficiency and current fuel prices.

## How It Works

Ethanol has a lower energy density than gasoline, meaning that a vehicle consumes more ethanol to travel the same distance as it would with gasoline. On average:
- A car requires approximately **1.3 liters of ethanol** to cover the same distance as **1 liter of gasoline**.

### 🔢 The 70% Rule

To decide which fuel is more economical, the **70% rule** is applied:
- If the price of ethanol is **equal to or less than 70%** of the price of gasoline, **ethanol is the better option**.
- If the price of ethanol is **greater than 70%** of the price of gasoline, **gasoline is the more cost-effective choice**.

The calculation formula is:

```
(Ethanol Price / Gasoline Price) * 100
```

If the result is **≤ 70**, ethanol is the better choice; otherwise, gasoline is recommended.

## How to Use

1. **Compile the program** using a C compiler (e.g., GCC):
   ```sh
   gcc fuel_calculator.c -o fuel_calculator
   ```
2. **Run the program**:
   ```sh
   ./fuel_calculator
   ```
3. **Enter fuel prices** when prompted:
   - Price per liter of ethanol (in euros)
   - Price per liter of gasoline (in euros)
4. The program will display the **most cost-effective fuel** based on the input prices.

## Example Usage

If the fuel prices are:
- **Gasoline:** €5.00 per liter
- **Ethanol:** €3.20 per liter

The calculation will be:
```
(3.20 / 5.00) * 100 = 64%
```
Since **64% is less than 70%**, ethanol is the more cost-effective choice.

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

