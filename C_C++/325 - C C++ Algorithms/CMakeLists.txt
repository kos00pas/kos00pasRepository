cmake_minimum_required(VERSION 3.21)
project(325_Run)

set(CMAKE_CXX_STANDARD 14)

include_directories("Ergasia 2/askisi 3")
include_directories("Ergasia 2/psounis")
include_directories("Ergasia 3")
include_directories("Ergasia 7/askisi1_statiki_desmeusi_queue")
include_directories("Ergasia 7/askisi1_statiki_desmeusi_queue/dynamiki_desmeusi_queue")
include_directories("���035 - stack, queue , apla sind")
include_directories(������/C-Algorithms-master/algorithms_in_C_lesson_5/BFSSpanningTree)
include_directories(������/C-Algorithms-master/algorithms_in_C_lesson_5/DFSSpanningTree)
include_directories(������/C-Algorithms-master/algorithms_in_C_lesson_5/exercise01)
include_directories(������/C-Algorithms-master/algorithms_in_C_lesson_5/exercise02)
include_directories(������/C-Algorithms-master/algorithms_in_C_lesson_5/exercise03)
include_directories(������/C-Algorithms-master/algorithms_in_C_lesson_5/exercise04)
include_directories(������/C-Algorithms-master/algorithms_in_C_lesson_5/exercise05)
include_directories(������/C-Algorithms-master/algorithms_in_C_lesson_5/exercise06)
include_directories(������/C-Algorithms-master/algorithms_in_C_lesson_6/Bellman)
include_directories(������/C-Algorithms-master/algorithms_in_C_lesson_6/Dijkstra)
include_directories(������/C-Algorithms-master/algorithms_in_C_lesson_6/exercise01)
include_directories(������/C-Algorithms-master/algorithms_in_C_lesson_6/exercise02)
include_directories(������/C-Algorithms-master/algorithms_in_C_lesson_6/exercise03)
include_directories(������/C-Algorithms-master/algorithms_in_C_lesson_6/exercise04)
include_directories(������/C-Algorithms-master/algorithms_in_C_lesson_7/exercise01)
include_directories(������/C-Algorithms-master/algorithms_in_C_lesson_7/exercise02)
include_directories(������/C-Algorithms-master/algorithms_in_C_lesson_7/exercise03)
include_directories(������/C-Algorithms-master/algorithms_in_C_lesson_7/Kruskal)
include_directories(������/C-Algorithms-master/algorithms_in_C_lesson_7/Prim)

add_executable(325_Run
        Assignment11_2020/Assignment11/main.cpp
        Assignment11_2020/Assignment11.cpp
        "Ergasia 1/Askisi 1.cpp"
        "Ergasia 1/askisi3.c"
        "Ergasia 1/DutchFlagProblem.cpp"
        "Ergasia 10/ask1.c"
        "Ergasia 10/shortest.c"
        "Ergasia 10/transitiveclos.cpp"
        "Ergasia 2/askisi 3/Graph.h"
        "Ergasia 2/askisi 3/Main.c"
        "Ergasia 2/psounis/graph.c"
        "Ergasia 2/psounis/graph.h"
        "Ergasia 2/psounis/main.c"
        "Ergasia 2/ask2.c"
        "Ergasia 2/lifoqueue.c"
        "Ergasia 3/brutalforce_part2.c"
        "Ergasia 3/Graph.h"
        "Ergasia 3/Main_part1.c"
        "Ergasia 3/testing.c"
        "Ergasia 3/Traveling_Salesman.cpp"
        "Ergasia 3/Untitled1.c"
        "Ergasia 3/Untitled2.c"
        "Ergasia 4/kodikes/ask1.c"
        "Ergasia 4/kodikes/iterative.c"
        "Ergasia 4/kodikes/recursive.c"
        "Ergasia 5/closest.cpp"
        "Ergasia 5/convexhull.cpp"
        "Ergasia 6/algor2.cpp"
        "Ergasia 6/ask1.cpp"
        "Ergasia 6/Ergasia 6_3_again.c"
        "Ergasia 7/askisi1_statiki_desmeusi_queue/dynamiki_desmeusi_queue/Graph_7c.h"
        "Ergasia 7/askisi1_statiki_desmeusi_queue/dynamiki_desmeusi_queue/Main_7c.c"
        "Ergasia 7/askisi1_statiki_desmeusi_queue/Graph_7.h"
        "Ergasia 7/askisi1_statiki_desmeusi_queue/Main_7.c"
        "Ergasia 7/askisi2.cpp"
        "Ergasia 8/1_part1.c"
        "Ergasia 8/1_part2.c"
        "Ergasia 8/askisi2.cpp"
        "Ergasia 8/somenew.cpp"
        "Ergasia 9/kruskal.cpp"
        "Ergasia 9/Prim.c"
        "���035 - stack, queue , apla sind/apla_sindedemenes_listes.c"
        "���035 - stack, queue , apla sind/queue.c"
        "���035 - stack, queue , apla sind/queue.h"
        "���035 - stack, queue , apla sind/stack.c"
        "���035 - stack, queue , apla sind/stack.h"
        ������/C-Algorithms-master/algorithms_in_C_lesson_1/efarmogi1_2max.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_1/efarmogi2_sum_squares.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_1/efarmogi3_plithos_emfanisewn.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_1/efarmogi4_fibonacci.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_1/max_function.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_1/max_program.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_1/min_function.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_1/min_program.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_1/mo_function.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_1/mo_program.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_1/prod_function.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_1/prod_program.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_1/sum_function.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_1/sum_program.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_2/binary_search.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_2/binary_search_function.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_2/binary_search_recursive.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_2/efarmogi1.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_2/efarmogi2.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_2/efarmogi3.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_2/efarmogi4.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_2/linear_search.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_2/linear_search_function.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_3/askisi1.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_3/askisi2.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_3/askisi3.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_3/askisi4.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_3/bubble_sort.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_3/bubble_sort_function.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_3/insertion_sort.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_3/insertion_sort_function.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_3/merge_sort.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_3/merge_sort_function.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_3/quick_sort.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_3/quick_sort_function.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_3/selection_sort.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_3/selection_sort_function.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_4/1d-copy.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_4/1d-product.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_4/1d-sum.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_4/2d-print.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_4/2d_traversal_cols.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_4/2d_traversal_rows.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_4/askisi1.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_4/askisi10.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_4/askisi11.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_4/askisi12.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_4/askisi13.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_4/askisi14.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_4/askisi2.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_4/askisi3.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_4/askisi4.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_4/askisi5.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_4/askisi6.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_4/askisi7.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_4/askisi8.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_4/askisi9.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_4/sum_rows.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_5/BFSSpanningTree/graph.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_5/BFSSpanningTree/graph.h
        ������/C-Algorithms-master/algorithms_in_C_lesson_5/BFSSpanningTree/linked_list.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_5/BFSSpanningTree/linked_list.h
        ������/C-Algorithms-master/algorithms_in_C_lesson_5/BFSSpanningTree/main.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_5/BFSSpanningTree/queue.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_5/BFSSpanningTree/queue.h
        ������/C-Algorithms-master/algorithms_in_C_lesson_5/DFSSpanningTree/graph.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_5/DFSSpanningTree/graph.h
        ������/C-Algorithms-master/algorithms_in_C_lesson_5/DFSSpanningTree/linked_list.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_5/DFSSpanningTree/linked_list.h
        ������/C-Algorithms-master/algorithms_in_C_lesson_5/DFSSpanningTree/main.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_5/DFSSpanningTree/queue.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_5/DFSSpanningTree/queue.h
        ������/C-Algorithms-master/algorithms_in_C_lesson_5/DFSSpanningTree/stack.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_5/DFSSpanningTree/stack.h
        ������/C-Algorithms-master/algorithms_in_C_lesson_5/exercise01/graph.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_5/exercise01/graph.h
        ������/C-Algorithms-master/algorithms_in_C_lesson_5/exercise01/linked_list.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_5/exercise01/linked_list.h
        ������/C-Algorithms-master/algorithms_in_C_lesson_5/exercise01/main.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_5/exercise01/queue.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_5/exercise01/queue.h
        ������/C-Algorithms-master/algorithms_in_C_lesson_5/exercise02/graph.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_5/exercise02/graph.h
        ������/C-Algorithms-master/algorithms_in_C_lesson_5/exercise02/linked_list.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_5/exercise02/linked_list.h
        ������/C-Algorithms-master/algorithms_in_C_lesson_5/exercise02/main.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_5/exercise02/queue.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_5/exercise02/queue.h
        ������/C-Algorithms-master/algorithms_in_C_lesson_5/exercise03/graph.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_5/exercise03/graph.h
        ������/C-Algorithms-master/algorithms_in_C_lesson_5/exercise03/linked_list.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_5/exercise03/linked_list.h
        ������/C-Algorithms-master/algorithms_in_C_lesson_5/exercise03/main.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_5/exercise03/queue.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_5/exercise03/queue.h
        ������/C-Algorithms-master/algorithms_in_C_lesson_5/exercise04/graph.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_5/exercise04/graph.h
        ������/C-Algorithms-master/algorithms_in_C_lesson_5/exercise04/linked_list.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_5/exercise04/linked_list.h
        ������/C-Algorithms-master/algorithms_in_C_lesson_5/exercise04/main.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_5/exercise04/queue.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_5/exercise04/queue.h
        ������/C-Algorithms-master/algorithms_in_C_lesson_5/exercise04/tree.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_5/exercise04/tree.h
        ������/C-Algorithms-master/algorithms_in_C_lesson_5/exercise05/graph.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_5/exercise05/graph.h
        ������/C-Algorithms-master/algorithms_in_C_lesson_5/exercise05/linked_list.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_5/exercise05/linked_list.h
        ������/C-Algorithms-master/algorithms_in_C_lesson_5/exercise05/main.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_5/exercise05/stack.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_5/exercise05/stack.h
        ������/C-Algorithms-master/algorithms_in_C_lesson_5/exercise06/graph.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_5/exercise06/graph.h
        ������/C-Algorithms-master/algorithms_in_C_lesson_5/exercise06/linked_list.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_5/exercise06/linked_list.h
        ������/C-Algorithms-master/algorithms_in_C_lesson_5/exercise06/main.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_5/exercise06/stack.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_5/exercise06/stack.h
        ������/C-Algorithms-master/algorithms_in_C_lesson_6/Bellman/graph.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_6/Bellman/graph.h
        ������/C-Algorithms-master/algorithms_in_C_lesson_6/Bellman/linked_list.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_6/Bellman/linked_list.h
        ������/C-Algorithms-master/algorithms_in_C_lesson_6/Bellman/main.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_6/Dijkstra/graph.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_6/Dijkstra/graph.h
        ������/C-Algorithms-master/algorithms_in_C_lesson_6/Dijkstra/linked_list.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_6/Dijkstra/linked_list.h
        ������/C-Algorithms-master/algorithms_in_C_lesson_6/Dijkstra/main.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_6/exercise01/graph.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_6/exercise01/graph.h
        ������/C-Algorithms-master/algorithms_in_C_lesson_6/exercise01/linked_list.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_6/exercise01/linked_list.h
        ������/C-Algorithms-master/algorithms_in_C_lesson_6/exercise01/main.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_6/exercise02/graph.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_6/exercise02/graph.h
        ������/C-Algorithms-master/algorithms_in_C_lesson_6/exercise02/linked_list.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_6/exercise02/linked_list.h
        ������/C-Algorithms-master/algorithms_in_C_lesson_6/exercise02/main.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_6/exercise02/queue.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_6/exercise02/queue.h
        ������/C-Algorithms-master/algorithms_in_C_lesson_6/exercise03/graph.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_6/exercise03/graph.h
        ������/C-Algorithms-master/algorithms_in_C_lesson_6/exercise03/linked_list.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_6/exercise03/linked_list.h
        ������/C-Algorithms-master/algorithms_in_C_lesson_6/exercise03/main.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_6/exercise04/graph.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_6/exercise04/graph.h
        ������/C-Algorithms-master/algorithms_in_C_lesson_6/exercise04/linked_list.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_6/exercise04/linked_list.h
        ������/C-Algorithms-master/algorithms_in_C_lesson_6/exercise04/main.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_7/exercise01/graph.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_7/exercise01/graph.h
        ������/C-Algorithms-master/algorithms_in_C_lesson_7/exercise01/linked_list.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_7/exercise01/linked_list.h
        ������/C-Algorithms-master/algorithms_in_C_lesson_7/exercise01/main.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_7/exercise02/graph.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_7/exercise02/graph.h
        ������/C-Algorithms-master/algorithms_in_C_lesson_7/exercise02/linked_list.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_7/exercise02/linked_list.h
        ������/C-Algorithms-master/algorithms_in_C_lesson_7/exercise02/main.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_7/exercise02/queue.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_7/exercise02/queue.h
        ������/C-Algorithms-master/algorithms_in_C_lesson_7/exercise03/disjoint_sets.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_7/exercise03/disjoint_sets.h
        ������/C-Algorithms-master/algorithms_in_C_lesson_7/exercise03/graph.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_7/exercise03/graph.h
        ������/C-Algorithms-master/algorithms_in_C_lesson_7/exercise03/linked_list.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_7/exercise03/linked_list.h
        ������/C-Algorithms-master/algorithms_in_C_lesson_7/exercise03/main.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_7/exercise03/queue.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_7/exercise03/queue.h
        ������/C-Algorithms-master/algorithms_in_C_lesson_7/Kruskal/disjoint_sets.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_7/Kruskal/disjoint_sets.h
        ������/C-Algorithms-master/algorithms_in_C_lesson_7/Kruskal/graph.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_7/Kruskal/graph.h
        ������/C-Algorithms-master/algorithms_in_C_lesson_7/Kruskal/linked_list.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_7/Kruskal/linked_list.h
        ������/C-Algorithms-master/algorithms_in_C_lesson_7/Kruskal/main.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_7/Prim/graph.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_7/Prim/graph.h
        ������/C-Algorithms-master/algorithms_in_C_lesson_7/Prim/linked_list.c
        ������/C-Algorithms-master/algorithms_in_C_lesson_7/Prim/linked_list.h
        ������/C-Algorithms-master/algorithms_in_C_lesson_7/Prim/main.c
        Bipartite.cpp
        BipartiteBFS.cpp
        nutsbolts.cpp)
