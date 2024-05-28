import subprocess

def run_test(input_data, expected_output):
    compile_command = ["gcc", "q6.c"]
    run_command = ["./a.out"]
    
    subprocess.run(compile_command, check=True)
    
    process = subprocess.Popen(run_command, stdin=subprocess.PIPE, stdout=subprocess.PIPE, text=True)
    output, _ = process.communicate(input=input_data)
    
    if f"Total cost: {expected_output:.2f}\n" in output:
        print("Test Passed")
    else:
        print("Test Failed")
        print("Expected:", expected_output)
        print("Got:", output)

tests = [
    ("2\n0\nR\n", 4.5),  # ESPRESSO, 0 sugars, Regular (4.5)
    ("0\n0\nR\n", 5.0),  # LATTE, 0 sugars, Regular (4.5 + 0.5 (LATTE))
    ("1\n0\nL\n", 5.5),  # CAPPUCCINO, 0 sugars, Large (4.5 + 0.5(CAPPUCCINO) + 0.5(large))
    ("2\n1\nR\n", 5.0),  # ESPRESSO, 1 sugar, Regular (4.5 + 0.5(1 sugar))
    ("3\n2\nL\n", 6.0),  # AMERICANO, 2 sugars, Large (4.5 + 1(2 sugars) + 0.5 (Large))
    ("4\n3\nR\n", 6.5)   # MATCHA, 3 sugars, Regular (4.5 + 0.5(MATCHA) + 1.5(3 sugars))
]

# Run all tests
for inputs, expected in tests:
    run_test(inputs, expected)
