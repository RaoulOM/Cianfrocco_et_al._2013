
		int getAge( ) { return age; }
		bool isTooOld( ) { return age >= maxAge; } 
		float getError( Node * );
		float * getLoc( Node * );
		void decreaseError( Node *, float );
		void makeConnection( Node *, Node * );
		void eraseEdge( Node * );
		int getGridX( Node * );
		int getGridY( Node * );
		bool isConnectedTo( Node *, Node * );

		void tellNeighborNULL( Node * );

		static int maxAge;
		Node * figurePolarity( Node * );
