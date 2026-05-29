# AI-assignment-5
PROJECTS INCLUDED

Implementation of Search Algorithms
Test Cases for Search Algorithms
AI Based Travel Planner
Knowledge Graph Implementation
Bayesian Network Implementation
IMPLEMENTATION OF SEARCH ALGORITHMS
Objective: The objective of this project is to implement and compare different AI search algorithms using the Tic-Tac-Toe game environment.

Algorithms Implemented:

Minimax Search Algorithm
Alpha-Beta Search
Heuristic Alpha-Beta Search
Monte Carlo Tree Search (MCTS)
Description: The project uses Tic-Tac-Toe to demonstrate how AI search algorithms make decisions in a game environment. Each algorithm selects optimal moves based on the current board configuration.

Minimax: Minimax explores all possible game states and chooses the best move by maximizing the player's chances of winning and minimizing the opponent's advantage.

Alpha-Beta Search: Alpha-Beta pruning improves Minimax by eliminating unnecessary branches that do not affect the final decision.

Heuristic Alpha-Beta Search: This algorithm improves efficiency using a heuristic evaluation function and depth-limited search.

Monte Carlo Tree Search: MCTS selects moves by performing multiple random simulations and choosing the move with the highest success rate.

Files:

search_algorithms.py
test_search_algorithms.py
How to Run:

python search_algorithms.py

python test_search_algorithms.py

Expected Result: The algorithms should select valid and optimal moves according to the Tic-Tac-Toe board state.

TEST CASES FOR SEARCH ALGORITHMS
Objective: The objective of the test cases is to validate the correctness and working of the implemented search algorithms.

Description: Multiple Tic-Tac-Toe board configurations are tested to evaluate the behavior of Minimax, Alpha-Beta Search, Heuristic Alpha-Beta Search, and Monte Carlo Tree Search.

Algorithms Tested:

Minimax Search Algorithm
Alpha-Beta Search
Heuristic Alpha-Beta Search
Monte Carlo Tree Search
Test Cases Included:

Winning move test
Opponent blocking test
Empty board test
Draw state test
How to Run:

python test_search_algorithms.py

Expected Result: All algorithms should return correct and valid moves according to the given board configuration.

AI BASED TRAVEL PLANNER
Objective: The objective of this project is to design an AI-based travel planner that reuses an existing travel knowledge base to generate personalized travel recommendations.

Description: The system recommends tourist places, food options, hotel categories, and generates a personalized travel plan according to user preferences.

Features:

Tourist place recommendation
Food recommendation
Budget-based hotel selection
Cost assessment
Personalized travel itinerary
Knowledge Base Used: The system uses a predefined travel knowledge base containing:

Tourist places
Food recommendations
Hotel categories
Transport information
Cities Included:

Hyderabad
Visakhapatnam
Bengaluru
Inputs:

Destination city
Budget
Number of days
Travel interest
Food preference
Outputs:

Recommended tourist places
Food suggestions
Estimated travel cost
Personalized tour plan
How to Run:

python travel_planner.py

Expected Result: The system generates a personalized travel itinerary along with recommendations and estimated travel cost.

KNOWLEDGE GRAPH IMPLEMENTATION
Objective: The objective of this project is to understand Knowledge Graphs and explore tools used for building knowledge graphs.

Description: A Knowledge Graph is a structured representation of entities and relationships.

In this implementation, cities are connected with tourist places, food recommendations, and transport options using graph-like relationships.

Example Relationships: Hyderabad → has_place → Charminar Hyderabad → has_food → Hyderabadi Biryani Hyderabad → has_transport → Metro

Features:

Knowledge representation
Relationship mapping
Information retrieval
Graph exploration
Tools Explored:

Neo4j
RDFLib
Protégé
GraphDB
NetworkX
How to Run:

python knowledge_graphs.py

Expected Result: The system displays knowledge graph information including tourist places, food, and transport facilities for a selected city.

BAYESIAN NETWORK IMPLEMENTATION
Objective: The objective of this project is to explore modelling, problem representation, and inferencing using Bayesian Networks.

Description: A Bayesian Network is a probabilistic graphical model used to represent uncertainty and perform reasoning based on probabilities.

In this implementation, a disease diagnosis example is created using symptoms such as fever, cough, and fatigue.

Problem Representation:

Disease → Fever Disease → Cough Disease → Fatigue

Inference: Inference is used to predict disease probability based on observed symptoms.

Tools Explored:

pgmpy
GeNIe
Netica
BayesiaLab
bnlearn
Requirements:

pip install pgmpy

How to Run:

python bayesian_networks.py

Expected Result: The system performs probabilistic inference and predicts disease probability based on symptoms.

CONCLUSION

These projects demonstrate the practical implementation of important Artificial Intelligence concepts including search algorithms, test validation, intelligent travel planning, knowledge representation, inferencing, and Bayesian Networks. The implementations show how AI techniques can be used for decision-making, planning, reasoning, and problem solving.
