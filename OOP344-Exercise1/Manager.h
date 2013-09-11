class Employee;

class Manager
   {
   private:
      int totalHours;
   protected:
   public: //private to public to allow access
      Manager();

      void getWorkerHours(Employee* emp);

      void report();
   };