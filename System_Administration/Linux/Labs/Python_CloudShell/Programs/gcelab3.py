
from pprint import pprint

from googleapiclient import discovery
from oauth2client.client import GoogleCredentials

credentials = GoogleCredentials.get_application_default()

service = discovery.build('compute', 'v1', credentials=credentials)

# Project ID for this request.
project = '430659292604'  # TODO: Update placeholder value.

# The name of the zone for this request.
zone = 'us-central1-c'  # TODO: Update placeholder value.

# Name of the instance resource to stop.
instance = 'gcelab2'  # TODO: Update placeholder value.

request = service.instances().stop(project=project, zone=zone, instance=instance)
response = request.execute()

# TODO: Change code below to process the `response` dict:
request = response['startTime']
x = slice(10)
request = response['startTime']
a = slice(11,29)
print('\n''User name:',response['user'],'\n')

print('Operation:',response['operationType'],'\n')

print('Starting date:',request[x],'\n')

print('Starting time:',request[a],'\n')
