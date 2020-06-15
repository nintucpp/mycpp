#ifndef _INCL_CREQUESTSERVICEA_I
#define _INCL_CREQUESTSERVICEA_I
class KrishiSevakProfile{
  protected:
    int width, height;
  public:
    void set_values (int a, int b)
      { width=a; height=b; }
    virtual int area () =0;
};
#endif