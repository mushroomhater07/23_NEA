using UnityEngine;

namespace algorithm
{
    public class projectile : gravity
    {
        private float yacc;
        // private void Update(){
        //     yacc = gravitySetting();
        // }
        public float speed = 20f;
        public Vector3 gravity = Physics.gravity;

        private Vector3 velocity = Vector3.zero;

        void Update()
        {
            velocity += gravity * Time.deltaTime;
            transform.position += velocity * Time.deltaTime + transform.forward * (speed * Time.deltaTime);
            // if(transform.position.y < -5f) Destroy(this.gameObject);
        }
        public void Shoot(GameObject prefab, Transform trans, float force)
        {
            GameObject arrow = Instantiate(prefab,trans.position+ Vector3.up*1.5f+ Vector3.right*0.3f,trans.rotation,GameObject.Find("objs").transform);
            arrow.tag = "Axe";
            projectile script = arrow.AddComponent<projectile>();
            
            // script.gravityspeed = 9f;
            // script._isUpJumping = false;
        }
        
        
    }
}