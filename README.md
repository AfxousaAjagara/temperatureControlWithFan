# temperatureControlWithFan

아두이노 팬을 이용하여 온도를 조절합니다. REST API를 사용하여 현재 온도와 팬이 켜져있거나 꺼져있는걸 확인 가능하며, 
일정 온도(30'c)를 넘어서면 강제로 팬이 작동하여 온도를 낮추도록 되어있습니다.
1. 아두이노를 통해 온도값과 프로펠러의 상태를 받아들인뒤, REST API로 전송
2. 디바이스 상태를 조회하는 GET API로 현재 온도값과 프로펠러의 상태를 표시
3. 팬 컨트롤을  Postman으로 PUT API로 전송하여 프로펠러를 켜거나 끄는 행동을 제어
4. 일정 온도(30'C)를 넘어설 경우 강제로 프로펠러가 켜져서 온도를 제어
5. 일정 온도(30'C)를 넘어설 경우 이메일로 경고메일을 전송
6. LOG API를 통해 현재까지 저장된 데이터를 조회, 링크를 통해 조회하거나 Postman으로 조회가능
해당 링크: https://c9x2344o33.execute-api.ap-northeast-2.amazonaws.com/prod/devices/MyMKRWiFi1010/log?from=2019-11-20%2011:12:10&to=2019-12-15%2012:00:00)
7. 팬 작동은 Postman 을 사용합니다. Postman을 실행한 후 기능을 PUT으로 바꿔준 뒤, https://c9x2344o33.execute-api.ap-northeast-2.amazonaws.com/prod/devices/MyMKRWiFi1010/  
해당 링크를 입력후 Body로 이동, raw로 들어가 형식을 JSON으로 변경한 뒤 팬을 끄고싶다면
{"tags" : [{"tagName": "FAN", "tagValue": "OFF"}]}
를 입력하거나, 팬을 키고싶다면
{"tags" : [{"tagName": "FAN", "tagValue": "ON"}]}
을 입력합니다.

감사합니다.
