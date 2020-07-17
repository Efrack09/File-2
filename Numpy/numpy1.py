import numpy as np

yesterday = np.datetime64('today', 'D') - np.timedelta64(1, 'D')
print("Yesterday: ", yesterday)
today = np.datetime64('today', 'D')
print("Today: ", today)
tomorrow = np.datetime64('today', 'D') + np.timedelta64(1, 'D')
print("Tomorrow: ", tomorrow)

print("\n'When you study programming time is gold, don't waste it'")