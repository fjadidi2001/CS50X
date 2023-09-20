import time

# Decorator function to measure execution time

def measure_time(func):
    def wrapper(*args, **kwargs):
        start_time = time.time()
        result = func(*args, **kwargs)
        end_time = time.time()
        execution_time = end_time - start_time
        print(f"{func.__name__} took {execution_time:.2f} seconds to run")
        return result
    return wrapper

# Applying the decorator to a function

@measure_time
def slow_function():
    # Simulate a slow operation
    time.sleep(2)

@measure_time
def fast_function():
    # Simulate a fast operation
    time.sleep(0.5)

# Now, let's call the decorated functions
slow_function()
fast_function()