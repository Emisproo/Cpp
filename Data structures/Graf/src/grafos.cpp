#include <iostream>
#include <queue>
#include <vector>
#define MAXV 100 // Maxima cantidad de vertices.
#define oo 0x3f3f3f3f // Nuestro valor infinito.
using namespace std;

struct Edge
{
	int node;
	int cost;
	Edge(int _node, int _cost) : node(_node), cost(_cost) {} 
	Edge() : node(-1), cost(-1) {}
};

struct Graph
{
	vector<Edge> G[MAXV]; 
	int vertex; 
	int _edge; 
};

struct State
{
	int node; 
	int cost; 
	State(int _node, int _cost) : node(_node), cost(_cost) {} 
	bool operator <(const State &b) const 
	{
		return cost > b.cost;
	}
};

int algorithm(const int begin, const int end, const Graph graph)
{
    priority_queue<State> pq; 
	vector<int> Dist(graph.vertex, oo); 
	vector<bool> mark(graph.vertex, false); 

    Dist[begin] = 0; 
	pq.push(State(begin, 0)); 
	while(!pq.empty()) 
	{
		State st = pq.top(); pq.pop(); 
		mark[st.node] = true; 
		if (st.node == end)
			return st.cost; 

		int T = (int)graph.G[st.node].size();
		for(int i = 0; i < T; ++i) 
		{
			if (!mark[graph.G[st.node][i].node] && ((Dist[st.node] + graph.G[st.node][i].cost) < Dist[graph.G[st.node][i].node]))
			{
				Dist[graph.G[st.node][i].node] = st.cost + graph.G[st.node][i].cost;
				pq.push(State(graph.G[st.node][i].node, st.cost + graph.G[st.node][i].cost));
			}
		}
	}
	return -1;
}

struct Program
{
	int Vertex, __edge;
	int _begin, _end;
	void defineGraph(Graph& graph)
	{
		cout << "Enter number of vertexs: " << endl;
		cin >> Vertex;
		cout << "Enter number of edges: " << endl;
		cin >> __edge;

		graph.vertex = Vertex;
		graph._edge = __edge;
	}
	void loadGraph(Graph & graph)
	{
		for (int i = 0; i < __edge; ++i)
		{
			int origin, destination, weight;
			cout << "Enter origin: " << endl;
			cin >>origin;
			cout << "Enter destination: " << endl;
			cin >> destination;
			cout << "Enter weight de la Arista: " << endl;
			cin >> weight;

			// Insertamos la arista dos veces, ya que nuestro grafo es un grafo no dirigido.
			graph.G[origin].push_back(Edge(destination, weight));
			graph.G[destination].push_back(Edge(origin, weight));
		}
	}
	void Dijkstra(Graph graph)
	{
		cout << "Enter first vertex: " << endl;
		cin >> _begin;
		cout << "Enter last vertex: " << endl;
		cin >> _end;
		int n = algorithm(_begin, _end, graph);
		cout << "Shortest path: " << n << endl;
	}
};

int main()
{
	bool out=false;
	char exit;

	Program program; //TAD
	Graph graph; // Grafo.

	cout << " Dijkstra's algorithm in C++" << endl;

	while (!out)
	{
	program.defineGraph(graph); 
	program.loadGraph(graph); 
	program.Dijkstra(graph);

	//Desea Salir?
	cout << "Exit? (Y/N)" << endl;
	cin >> exit;
		if (exit == 'Y')
		{
			out = true;
		}
	}
}