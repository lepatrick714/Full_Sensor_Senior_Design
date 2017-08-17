import gspread
from oauth2client.service_account import ServiceAccountCredentials
import pprint

scope = ['https://spreadsheets.google.com/feeds']
creds = ServiceAccountCredentials.from_json_keyfile_name('../client_secret.json', scope)
client = gspread.authorize(creds)

sheet = client.open('Confession_Testing').sheet1

pp = pprint.PrettyPrinter()
all_records = sheet.get_all_records()
print(all_records)
