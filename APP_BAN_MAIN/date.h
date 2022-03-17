#pragma once


class date
{

private:

	int day;
	int month;
	int year;

public:

	date();
	date(int d, int m, int y);
	date(const date& d);


	void afficher()const;
	bool bissexitile()const;
	void nbr_de_jour()const;
	bool valide() const;


	date operator = (const date& d);
	bool operator == (date& d) const;
	date operator + (const date& d);

};