classDiagram
MenuPanels <|-- pause
MenuPanels <|-- PickUpSelection
MenuPanels <|-- Inventory
MenuPanels <|-- PickUp
MenuPanels <|-- LeaderBoarddata
MenuPanels <|-- SlotSelectionPanel
MenuPanels <|-- PopupPanel
MenuPanels <|-- AudioSettingPanel
MenuPanels <|-- VideoSettingPanel
MenuPanels <|-- GraphicsSettingPanel
MenuPanels <|-- ControlSettingPanel
MenuPanels <|-- QuitMenuPanel
MenuPanels <|--DifficultyPanel
MenuPanels <|--loginState
MenuPanels <|--LoadingPanel

class MenuPanels{
     +GameObject _menu
     +ShowHide()
     +Start()
}
    
   class pause{
        -LeaderBoarddata leader
        -Update()
        -Awake()
        +Close()
        +Open()
        +LeaderboardPause()
        +SettingPause()
        +timeChange()
        +Back()
        +Start()
   }
   class PickUpSelection{
    +Start()
    +Toggle()
   }
   class Inventory{
    -InventoryItem[] inventoryitems
    -int maxSize
    -Slot SlotUI
    +Setup()
    +Start()
    -pickupitem()
    -removeitem()
   }
   class PickUp{
    +List<item> items
    -PickUpSelectionSlot _selectionSlot
    +Start()
    +Toggle()
    +Update()
   }
   class LeaderBoarddata{
    -Transform slot
    +external()
    +GetData()
    +Start()
    +WebLeader()
    +printData()
    +Sorting()
    -ParseJSON()
   }
   class SlotSelectionPanel{
    -string filePath
    -popUpDetail()
    +DeleteSlot()
    +SavefileSelector()
    +Start()
   }
   class PopupPanel{
    -Image _itemImage
    -Sprite Error
    -TMP_Text itemDescription
    -TMP_Text itemName
   }
   class AudioSettingPanel{
    -Start()
   }
   class ControlSettingPanel{   }
   class GraphicsSettingPanel{ }
   class VideoSettingPanel{ }
   class QuitMenuPanel{
    +appQuit()
   }
   class DifficultyPanel{
    -Slider diffi
    +load()
    +Start()
    -Update()
   }
   class loginState{
    -TMP_Text getusername
    -TMP_Text indo
    -Button logbut
    -Button notMeButton
    -Button playButton
    -GameObject loginPanel
    -GameObject welcomebackPanel
    -TMP_InputField usernameField
    -TMP_InputField passwordField
    -string user
    -int ID
    -hashFunction()
    -infoHandler()
    -welcomeBack()
    +hexadeciamToDenary()
    +Login()
    +NotYou()
    +OnEnable()
    +Play()
    +Register()
    +Start()
   }
   class LoadingPanel{
    +bool loadComplete
    +bool showprogressbar
    +bool showprogressbartext
    +float TimePeriod
    +AsyncOperation loadScene
    -int currentTitle
    -GameObject firstTime
    -GameObject progressbarObj
    -GameObject loadingCircle
    -GameObject TouchButton
    -Slider progressbar
    -TMP_Text progressbartxt
    -TMP_Text title
    -TMP_Text touchContinue
    -List<String> wordlist
    -ChangeScene()
    -OnEnable()
    +LoadSreen()
    +Start()
    +Update()
   }
   class MenuPanels{
    -Button[] buttons
    -GameObject buttonObject
    -AudioSettingPanel _audioPanel
    -ControlSettingPanel _controlPanel
    -GraphicsSettingPanel _graphicPanel
    -VideoSettingPanel _videoPanel
    -AudioAction()
    -ControlAction()
    -GraphicAction()
    -VideoAction()
    -login()
    -PanelHide()
    +QuitSetting()
    +Start()
   }