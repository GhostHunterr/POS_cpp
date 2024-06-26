#ifndef SDDS_POSIO_H
#define SDDS_POSIO_H

#include <iostream>

using namespace std;

namespace sdds
{
	class PosIO
	{
	public:
		// Constructor and Destructor
		~PosIO();

		// Virtual Functions
		virtual ostream &write(ostream &os) const = 0;
		virtual istream &read(istream &is) = 0;
		virtual ofstream &save(ofstream &ofs) = 0;
		virtual ifstream &load(ifstream &ifs) = 0;
	};
	ostream &operator<<(ostream &os, const PosIO &rOp);

	ofstream &operator<<(ofstream &ofs, PosIO &rOp);

	istream &operator>>(istream &is, PosIO &rOp);

	ifstream &operator>>(ifstream &ifs, PosIO &rOp);

} // namespace sdds

#endif