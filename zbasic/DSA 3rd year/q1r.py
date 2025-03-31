def min_moves_to_catch(teachers, david_position):
    # Calculate distances from David's position to each teacher
    d1 = abs(david_position - teachers[0])
    d2 = abs(david_position - teachers[1])
    # The minimum moves required is the maximum distance to the nearest teacher
    return max(d1, d2)

def process_test_cases(t, test_cases):
    output = []
    for case in test_cases:
        n, m, q, teachers, queries = case
        # Since q = 1, there is only one query per test case
        david_position = queries[0]
        result = min_moves_to_catch(teachers, david_position)
        output.append(result)
    return output

# Input handling
import sys
input = sys.stdin.read
data = input().split()

index = 0
t = int(data[index])
index += 1
test_cases = []

for _ in range(t):
    n = int(data[index])
    m = int(data[index+1])
    q = int(data[index+2])
    index += 3
    teachers = list(map(int, data[index:index+m]))
    index += m
    queries = list(map(int, data[index:index+q]))
    index += q
    test_cases.append((n, m, q, teachers, queries))

# Process all test cases
results = process_test_cases(t, test_cases)

# Output results
for result in results:
    print(result)
