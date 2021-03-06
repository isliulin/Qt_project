import QtQuick 2.7
import QtQuick.Controls 1.3
import QtQuick.Layouts 1.0
import QtQuick.Controls.Styles 1.3

Item {
    property alias vBrightness: spinbox_bright.value
    property alias vVolume: spinbox_volume.value
    //    property alias isBrightnessVolume: id_briVolumeChecker.checked
    property bool isBrightnessVolume: false

    property alias isScrollText: id_scrollintTextChecker.checked
    property alias vScrollText: scrolltext.text

    property alias isTitle: id_titleChecker.checked
    property alias vTitle: titletext.text
    property int hasChoiceScrollTextFlag: 0
    property int hasChoiceTitleShowFlag: 0

    property int hasChoiceAudioSwitchFlag: 0
    property int hasChoiceTimeAreaFlag: 0

    property int brightChanged: 0
    property int volumeChanged: 0

    Text {
        id: id_briVolumeText
        x: 0
        y: 0
        text: qsTr("экран настройки") //         text: qsTr("屏幕设定")
        //        font.pixelSize: 12
    }

    Text {
        id: id_bright_text
        x: 33
        y: 27
        text: qsTr("Яркость") //text: qsTr("亮度")
        //        font.pixelSize: 12
    }

    Slider {
        id: slider_bright
        x: 172 + 25
        y: 28
        //        width: 50
        minimumValue: 0
        maximumValue: 100
        value: 0
        onValueChanged: {
            spinbox_bright.value = value
            brightChanged = 1;
        }
        style: SliderStyle {
            groove: Rectangle {
                color: "darkGray"
                implicitHeight: 6
                implicitWidth: 100
                opacity: 0.8
                radius: 3
                BorderImage {
                    anchors.verticalCenter: parent.verticalCenter
                    source: "qrc:/image/greenslider.png"
                    border.left: 5; border.top: 1
                    border.right: 5; border.bottom: 1
                    width: styleData.handlePosition
                    height: 5
                }
            }
            handle: Item {
                width: 13
                height: 13
                Image {
                    anchors.centerIn: parent
                    source: "qrc:/image/handle.png"
                }
            }
        }
    }

    Text {
        id: id_volume_text
        x: 33
        y: 60
        text: "Громкость"
        //        font.pixelSize: 12
    }

    Slider {
        id: slider_volume
        x: 172 + 25
        y: 61
        //        width: 50
        minimumValue: 0
        maximumValue: 100
        value: 0
        onValueChanged: {
            spinbox_volume.value = value;
            volumeChanged = 1;
        }
        style: SliderStyle {
            groove: Rectangle {
                color: "darkGray"
                implicitHeight: 6
                implicitWidth: 100
                opacity: 0.8
                radius: 3
                BorderImage {
                    anchors.verticalCenter: parent.verticalCenter
                    source: "qrc:/image/greenslider.png"
                    border.left: 5; border.top: 1
                    border.right: 5; border.bottom: 1
                    width: styleData.handlePosition
                    height: 5
                }
            }
            handle: Item {
                width: 13
                height: 13
                Image {
                    anchors.centerIn: parent
                    source: "qrc:/image/handle.png"
                }
            }
        }
    }

    SpinBox {
        id: spinbox_bright
        x: 330
        y: 21
        width: 60
        height: 25
        minimumValue: 0
        maximumValue: 100
        value: 0
        onValueChanged: {
            slider_bright.value = value
            brightChanged = 1;
        }
    }

    SpinBox {
        id: spinbox_volume
        x: 330
        y: 54
        width: 60
        height: 25
        minimumValue: 0
        maximumValue: 100
        value: 0
        onValueChanged: {
            slider_volume.value = value
            volumeChanged = 1;
        }
    }

    Text {
        id: id_aduio_text
        x: 0
        y: 96
        text: qsTr("аудио") // 音频
        //        font.pixelSize: 12
    }

    CheckBox {
        id: audio_swither
        ExclusiveGroup { id: audioGroup }
        exclusiveGroup: audioGroup
        x: 34
        y: 117
        text: "открыть" // 音频开
        onClicked: {
            console.log("before hasChoiceAudioSwitchFlag is ", hasChoiceAudioSwitchFlag)
            hasChoiceAudioSwitchFlag = 1;
            console.log("after hasChoiceAudioSwitchFlag is ", hasChoiceAudioSwitchFlag)
        }
    }

    CheckBox {
        id: audio_off
        exclusiveGroup: audioGroup
        x: 228
        y: 117
        text: "гуань"  // 音频关
    }

    Text {
        id: setScrollText_id
        x: 0
        y: 158
        text: qsTr("переходящий текст настройки") //text: qsTr("设置滚动文字")
        //        font.pixelSize: 12
    }

    TextField {
        id: scrolltext
        x: 49
        y: 184
        enabled: !id_scrollintTextChecker.checked
        placeholderText: qsTr("Введите субтитра")/*qsTr("请输入字幕文字")*/
        font.family: "KONE Information_v12"
        style: TextFieldStyle { // 自定义样式
            background: Rectangle {
                radius: 1
                implicitWidth: 305
                implicitHeight: 24
                border.color: "green"
                border.width: 1
            }
        }
    }

    CheckBox {
        id: id_scrollintTextChecker
        x: 0
        y: 224
        text: qsTr("Скрытие прокрутки текста")//text: qsTr("隐藏滚动文字")
        onClicked: {
            console.log("before in russian hasChoiceScrollTextFlag is ", hasChoiceScrollTextFlag)
            hasChoiceScrollTextFlag = 1;
            console.log("after in russian hasChoiceScrollTextFlag is ", hasChoiceScrollTextFlag)
        }
    }

    Text {
        id: setTitle_id
        x: 0
        y: 257
        text: qsTr("установить заголовок") //text: qsTr("设置标题")
        //        font.pixelSize: 12
    }

    TextField {
        id: titletext
        x: 49
        y: 284
        enabled: !id_titleChecker.checked
        placeholderText: qsTr("Введите заголовок")/*qsTr("请输入标题文字")*/
        font.family: "KONE Information_v12"
        style: TextFieldStyle {
            background: Rectangle {
                radius: 1
                implicitWidth: 260 + 45
                implicitHeight: 24
                border.color: "green"
                border.width: 1
            }
        }
    }

    CheckBox {
        id: id_titleChecker
        x: 0
        y: 324
        text: qsTr("Скрытие заголовка") //text: qsTr("隐藏标题")
        onClicked: {
            console.log(" before in russian hasChoiceTitleShowFlag is ", hasChoiceTitleShowFlag)
            hasChoiceTitleShowFlag = 1;
            console.log("after in russian hasChoiceTitleShowFlag is ", hasChoiceTitleShowFlag)
        }
    }

    Text {
        id: systemTime
        x: 0
        y: 363
        text: qsTr("Настройки системы времени") // 系统时间设置
        //        font.pixelSize: 12
    }

    Self_TextField {
        id: systimeEditText
        enabled: !id_systimeSwitch.checked
        x: 32
        y: 388
        yeartext: MediaScreen.getSplitDate(1);
        monthtext: MediaScreen.getSplitDate(2);
        daytext: MediaScreen.getSplitDate(3);
        hourtext: MediaScreen.getSplitTime(1);
        minutetext: MediaScreen.getSplitTime(2);
        secondtext: MediaScreen.getSplitTime(3);
    }

    CheckBox {
        id: id_systimeSwitch
        checked: true
        x: 0
        y: 448
        text: "Скрыть системы времени"
    }

//    Connections {
//        target: Ctranslator
//        onLanguageChanges: {
//            changesLanguge();
//        }
//    }

    function checkParameterSetting(){
        if (!isScrollText && !isTitle)
        {
            return ""
        }

        if(isScrollText && vScrollText == "")
        {
            // return qsTr("请输入滚动字幕文字")
            return qsTr("Введите прокрутку субтитра")
        }

        if(isTitle && vTitle == ""){
            // return qsTr("请输入标题文字")
            return qsTr("Введите заголовок")
        }
        return "";
    }

    function paraChecked()
    {
        if (!isBrightnessVolume && isScrollText && isTitle)
            return "false";
        else
            return "true";
    }

    function updateParameterSetting1(){
        console.log("updateParameterSetting1 is call")
        if (isBrightnessVolume && isScrollText && isTitle)
        {
            console.log("full false")
            ConfigureSerialer.updateParameterBasic1(false, false, false, false, false, false, hasChoiceScrollTextFlag, hasChoiceTitleShowFlag);
        }
        else
        {
            console.log("not full false")
            ConfigureSerialer.updateParameterBasic1(true, isBrightnessVolume, !isScrollText, !isTitle, !isScrollText, !isTitle, hasChoiceScrollTextFlag, hasChoiceTitleShowFlag)
        }

        if(isBrightnessVolume)
        {
            console.log("isBrightnessVolume = ", isBrightnessVolume);
            ConfigureSerialer.updateBrightnessVolume(vBrightness, vVolume);
        }

        if(!isScrollText)
        {
            ConfigureSerialer.updateScrollText(vScrollText);
        }

        if(!isTitle)
        {
            ConfigureSerialer.updateTitle(vTitle);
        }
        ConfigureSerialer.updateArea1ParaAudio(audio_swither.checked, audio_off.checked);
        brightOrVolumeChanged();
        ConfigureSerialer.setSystimeText(systimeEditText.getEditTime(), !id_systimeSwitch.checked)
    }

    function titleString()
    {   var resString = "";
        if (!isTitle)
        {
            var i = ConfigureSerialer.judgeString(titletext.text);
            if (0 === i || 1 === i) // 为空或者全为空格时，显示默认标题
            {
                resString = "KONE";
            }
            else if (2 === i)
            {
                resString = titletext.text;
            }
        }
        return resString;
    }

    function scrollString()
    {
        var resScroll = "";
        if (!isScrollText)
        {
            var i = ConfigureSerialer.judgeString(scrolltext.text);
            if (0 === i || 1 === i) // 为空或者全为空格时，显示默认标题
            {
                resScroll = "Have a nice day! Have a nice day!";
            }
            else if (2 === i)
            {
                resScroll = scrolltext.text;
            }
        }
        return resScroll;
    }

    function brightOrVolumeChanged()
    {
        if (1 === brightChanged || 1 === volumeChanged)
        {
            ConfigureSerialer.setBrightOrVolumeChanged(1)
            console.log("the brightOrVolumeChanged() is true")
            ConfigureSerialer.updateBrightnessVolume(vBrightness, vVolume);
        }
        else
        {
            ConfigureSerialer.setBrightOrVolumeChanged(0);
            console.log("the brightOrVolumeChanged() is false")
        }
    }
}
