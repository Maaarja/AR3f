using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class RotateSimpleScaleGO : MonoBehaviour {
    public GameObject currentSelected; //stores which object person selected 

    public LayerMask layerMask; //helps to select only the object we want to rotate and scale

	void Start () {
		
	}
	
	void LateUpdate () {

        //makes sure that the person can not touch UI 
        if (EventSystem.current.IsPointerOverGameObject() ||
            EventSystem.current.currentSelectedGameObject != null)
        {
            return;
        }


        //selects the item when the person touches the screen- for testing in Unity editor with mouse
        if(Application.isEditor){

            if(Input.GetMouseButton(0)){

                Ray ray=Camera.main.ScreenPointToRay(Input.mousePosition);
                RaycastHit hit;

                if(Physics.Raycast(ray,out hit, 500f, layerMask))
                {
                    currentSelected = hit.collider.gameObject.transform.parent.gameObject; //applies rotation and scale to parent, fe AR Placed Item
                }

            }

        //when the person touches the screen with 1 finger - selecting the item
        }
        else
        {

            if(Input.touchCount ==1){

                Touch touch = Input.GetTouch(0);
                if(touch.phase == TouchPhase.Began){

                    Ray ray = Camera.main.ScreenPointToRay(touch.position); //when the person touches the screen we get the ray
                    RaycastHit hit; //we store that in hit variable 

                    if(Physics.Raycast(ray,out hit,500f,layerMask)){ //we can see where it goes 

                        currentSelected = hit.collider.gameObject.transform.parent.gameObject; //applies rotation and scale to parent, fe AR Placed Item
                    }


                }
            // when the person touches the screen with 2 fingers - rotatating or scaling the them
            }
            else if(Input.touchCount == 2){
                Touch touch = Input.GetTouch(0); 
                if(touch.phase == TouchPhase.Moved) //if person is moving, than we run this code
                {
                    if(currentSelected!=null){ //if item is there, avoiding nothing when the application starts
                        
                        if(currentSelected.activeSelf==true){ //if item is acive- on the screen not hidden, than we run this code
                            float pinchAmount = 0;
                            Quaternion desiredRotation = currentSelected.transform.rotation;

                            DetectTouchMovement.Calculate();

                            if (Mathf.Abs(DetectTouchMovement.pinchDistanceDelta) > 0)
                            { // zoom
                                pinchAmount = DetectTouchMovement.pinchDistanceDelta;
                            }

                            if (Mathf.Abs(DetectTouchMovement.turnAngleDelta) > 0)
                            { // rotate
                                Vector3 rotationDeg = Vector3.zero;
                                rotationDeg.y = -DetectTouchMovement.turnAngleDelta; //rotate on y axes only
                                desiredRotation *= Quaternion.Euler(rotationDeg);
                            }

                            desiredRotation.x=0; //do not rotate on x axes
                            desiredRotation.z = 0; //do not rotate on z axes

                            // will work:
                            currentSelected.transform.rotation = desiredRotation;

                            pinchAmount = pinchAmount * 0.001f; //brings pinchAmount scale down, reducing the scale, mapping the value- can be adjusted  
                            Vector3 newScale = currentSelected.transform.localScale;

                            newScale+= pinchAmount * currentSelected.transform.localScale; //apllies new scale after reducing it down

                            if (newScale.x > 0.5 && newScale.x < 2) //limits the person to make the scele too small or too big 
                            {
                                currentSelected.transform.localScale = newScale;
                            }

                             
                        }

                    }


                }



            }





        }


	}
}
