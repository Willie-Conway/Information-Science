from pprint import pprint

from googleapiclient import discovery
from oauth2client.client import GoogleCredentials

credentials = GoogleCredentials.get_application_default()

service = discovery.build('compute', 'v1', credentials=credentials)

# Project ID for this request.
project = '430659292604'  # TODO: Update placeholder value.

# The name of the zone for this request.
zone = 'us-central1-c'  # TODO: Update placeholder value.

request = service.instances().list(project=project, zone=zone)
while request is not None:
    response = request.execute()

    for instance in response['items']:
        # TODO: Change code below to process each `instance` resource:
        print(instance['name'], 'is', instance['status'])

    request = service.instances().list_next(previous_request=request, previous_response=response)