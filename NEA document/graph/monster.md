
classDiagram
    IMonsterConfig <|-- MonsterBehaviour
    IMonsterConfig: float health
    IMonsterConfig: Transform location
    IMonsterConfig:  Chase()
    IMonsterConfig:  Dead()
    IMonsterConfig: Look()
    MonsterBehaviour <|-- BigGreiver
    MonsterBehaviour <|-- SmallGreiver
    MonsterBehaviour <|-- SilverFish
    class MonsterBehaviour{
        +float health
        +Transform location
        +Start()
      +Update()
     +Awake()
     +Chase()
     +Dead()
     +Look()
     +OnCollisionEnter
    }
    class BigGreiver{
        +Update()
    }
    class SmallGreiver{    }
    class SilverFish{
        +Start()
    }