
#include "dg.h"
#include "test_data.h"

//------------------------------------------------------------------------------
// Main function
//------------------------------------------------------------------------------
int
main(int argc, char** argv)
{
   ParameterHandler ph;
   declare_parameters(ph);
   if(argc < 2)
   {
      std::cout << "Specify input parameter file\n";
      std::cout << "It should contain following parameters.\n\n";
      ph.print_parameters(std::cout, ParameterHandler::Text);
      return 0;
   }
   ph.parse_input(argv[1]);
   ph.print_parameters(std::cout, ParameterHandler::Text);

   Parameter param;
   parse_parameters(ph, param);

   auto test_case = get_test_case(ph.get("test case"));
   const InitialCondition<1> initial_condition(test_case);
   const Solution<1> exact_solution(test_case, param.final_time);
   param.xmin = initial_condition.xmin;
   param.xmax = initial_condition.xmax;
   ScalarProblem<1> problem(param, initial_condition, exact_solution);
   problem.run();

   return 0;
}