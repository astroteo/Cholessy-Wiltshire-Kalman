#include "OptimalFuelBreadthFirstPathPlanner.h"

void
OptimalFuelBreadthFirstPathPlanner::
do_job()
{
  cout << "... Computing optimal path w.r.t optimal fuel path planning" << endl;
  cout << "starting position: "<< this->start_state.get_p() << endl
       << "starting velocity: "<< this->start_state.get_v() << endl;

  cout << "goal position: "<< this->goal_state.get_p() << endl
       << "goal velocity: "<< this->goal_state.get_v() << endl;
  queue<State>  q;
  set<p_type> visited;
  map<p_type,ap_type> goal_branch;
}