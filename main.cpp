int pin = 13; //连接LED的IO脚

void setup() {
    pinMode(pin, OUTPUT); //设置管脚为输出模式
}

void loop() {
    for(int i=0;i<3;i++)
    {
        digitalWrite(pin, HIGH); //将管脚设置为高电平, 则LED灯亮
        delay(900); //等待1000毫秒
        digitalWrite(pin, LOW); //将管脚设置为低电平, 则LED灯灭
        delay(350); //等待1000毫秒
    }
    delay(900); //等待1000毫秒
}
