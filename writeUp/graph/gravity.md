```mermaid
classDiagram
    gravity <|-- movement
    gravity <|-- projectile
    class gravity{
        -bool _isUpJumping
        -bool _grounded
        -float _gravityspeed
        -float _jumpgravity
        *float gravityacceleration
        *Vector3 original
        +Update()
        +gravitySetting()
    }
    class movement{
      -float _crouchheight
      -float _crouchwalk
      -float _jumpheight
      -float _walkspeed
      -bool _isCrouching
      -Joystick joystick
      -Vector2 move
      -Start()
      -Update()
      -touchmovement()
    +Crouch()
    +Jumpbutton()
    }
    class projectile{
        -float yacc
        -Vector3 velocity
        +float speed
        +Vector3 gravity
        -Update()
        +Shoot()

    }