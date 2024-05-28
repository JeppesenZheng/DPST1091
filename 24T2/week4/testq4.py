import subprocess

def run_test(input_data, expected_cost, expected_inventory):
    compile_command = ["gcc", "q4.c"]
    run_command = ["./a.out"]
    
    # Compile the C program
    subprocess.run(compile_command, check=True)
    
    # Run the compiled C program with inputs
    process = subprocess.Popen(run_command, stdin=subprocess.PIPE, stdout=subprocess.PIPE, text=True)
    output, _ = process.communicate(input=input_data)
    
    # Check if the expected cost is in the output
    expected_cost_string = f"Total Cost: {expected_cost:.2f}\n"
    if expected_cost_string in output:
        cost_result = "Cost Test Passed"
    else:
        cost_result = f"Cost Test Failed\nExpected: {expected_cost_string}Got: {output}"
    
    # Check if the expected inventory is in the output
    expected_inventory_string = f"Bubble tea(s): {expected_inventory[0]}\nTopping(s): {expected_inventory[1]}\n"
    if expected_inventory_string in output:
        inventory_result = "Inventory Test Passed"
    else:
        inventory_result = f"Inventory Test Failed\nExpected: {expected_inventory_string}Got: {output}"
    
    # Output the results
    print(cost_result)
    print(inventory_result)

# Define the tests
tests = [
    ("0\n0\n1\nR\n", 7.5, (9, 4)),  # MILK TEA with 1 TAPIOCA PEARLS, Regular
    ("1\n1\n2\nL\n", 8.0, (8, 3)),  # FRUIT TEA with 2 JELLY, Large
    ("2\n2\n3\nR\n", 8.5, (9, 2)),  # TARO MILK with 3 POPPING PEARLS, Regular
    ("3\n3\n4\nL\n", 9.5, (8, 1)), # MATCHA LATTE with 4 ALOe VERA, Large
]

# Run all tests
for inputs, expected_cost, expected_inventory in tests:
    run_test(inputs, expected_cost, expected_inventory)
