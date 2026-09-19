class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        float close;
      if((xCenter>=x1 && xCenter<=x2) && (yCenter>=y1 && yCenter<=y2))
      return true;
      if(abs(x1-xCenter)<=radius) {
         close=max(min(yCenter,y2),y1);
           if(pow(pow(x1-xCenter,2)+pow(close-yCenter,2),0.5)<=radius)
           return true;
      }
      if( abs(xCenter-x2)<=radius){
         close=max(min(yCenter,y2),y1);
           if(pow(pow(x2-xCenter,2)+pow(close-yCenter,2),0.5)<=radius)
           return true;
      }
       
      if(abs(yCenter-y2)<=radius ){
         close=max(min(xCenter,x2),x1);
           if(pow(pow(y2-yCenter,2)+pow(close-xCenter,2),0.5)<=radius)
           return true;
      }
       if( (yCenter-y1)<=radius){
         close=max(min(xCenter,x2),x1);
           if(pow(pow(y1-yCenter,2)+pow(close-xCenter,2),0.5)<=radius)
           return true;
      }
      return false;
    }
};
