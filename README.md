# otgCommunicationWithAppInventorAndArduino
## 앱인벤터로 만든 앱과 아두이노를 OTG케이블로 연결하고 통신하기
1. OTG.apk파일을 안드로이드 폰에 다운로드 받는다.(수정하고 싶으면 aia 파일을 자신의 앱인벤터에 업로드하여 사용)
2. 아두이노에 arduinoCalculator.ino 파일을 업로드한다. 
3. 안드로이드 폰과 아두이노를 OTG 케이블로 연결한다.
4. 앱을 열고 두개의 숫자를 입력한다. 
5. 앱에서 두 숫자를 OTG케이블(시리얼 통신)을 통해 아두이노에게 보내면 아두이노가 두 숫자를 계산해서 결과값을 OTG케이블을 통해 앱에 보내게 되고, 그 결과를 화면에 표시한다.

* 앱인벤터 디자인
![](https://github.com/mtinet/otgCommunicationWithAppInventorAndArduino/blob/main/OTGDesign.png?raw=true)  

* 앱인벤터 블럭
* ![](https://github.com/mtinet/otgCommunicationWithAppInventorAndArduino/blob/main/OTGBlock.png?raw=true)
