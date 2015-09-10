/*
 * C++ abstract class acting as an interface for all subsequents encoders.
 *
 */


class Encoder
{
   public:
      // pure virtual function
      virtual void encode() = 0;
      virtual void start(void) = 0;
   
   private:
     
};
