#ifndef IPROCESSOR_H
#define IPROCESSOR_H

enum ProcessorType
{
   x86=86,
   x64=64
};

class IProcessor
{
  public:
    IProcessor(){}
    //getter + setter ??
    ~IProcessor(){}
};

//class Computer
//{
//   public:
//        IntelProcessor* GetProcessor(double speed, ProcessorType type, string version)
//    {
//       return new IntelProcessor(speed, type, version);
//    }
//};

class IntelProcessor:public IProcessor
{
     string Version;
     ProcessorType Type;
     double Speed;
   public:
     IntelProcessor(){}
     //getter + setter ?? rewrite
     ~IntelProcessor(){}

  string GetProcessorInfo()
  {
   return "Processor for" + Version + Speed + Type;
  }

 };

class AMDProcessor:public IProcessor
{
    string Version;
    ProcessorType Type;
    double Speed;
  public:
    AMDProcessor(){}
    //getter + setter ?? rewrite
    ~AMDProcessor(){}
};


#endif // IPROCESSOR_H
