#include "set.h"

TSet::TSet(int mp) : bitField(mp), maxPower(mp) {}
TSet::TSet(const TSet& s) : bitField(s.bitField), maxPower(s.maxPower) {}
TSet::operator TBitField() { return bitField; }
size_t TSet::GetMaxPower() const noexcept { return maxPower; }
void TSet::InsElem(size_t Elem) { bitField.set(Elem); }
void TSet::DelElem(size_t Elem) { bitField.reset(Elem); }
bool TSet::IsMember(size_t Elem) const { return bitField.test(Elem); }
TSet TSet::operator+(const int Elem)
{
	if ((Elem > maxPower - 1) || (Elem < 0)) {
		throw std::logic_error("out of universe");
	}
	else {
		TSet tmp(*this);
		tmp.bitField.set(Elem);
		return tmp;
	}
}
TSet TSet::operator-(const int Elem)
{
	if ((Elem > maxPower - 1) || (Elem < 0)) {
		throw std::logic_error("out of universe");
	}
	else {
		TSet tmp(*this);
		tmp.bitField.reset(Elem);
		return tmp;
	}
}
TSet TSet::operator+(const TSet& s)
{
	TSet tmp(*this);
	tmp.bitField = bitField | s.bitField;
	return tmp;
}
TSet TSet::operator*(const TSet& s)
{
	TSet tmp(*this);
	tmp.bitField = bitField & s.bitField;
	return tmp;
}
TSet TSet::operator~()
{
	TSet tmp(*this);
	tmp.bitField = ~bitField;
	return tmp;
}
bool TSet::operator==(const TSet& s) const { return s.bitField == bitField; }
bool TSet::operator!=(const TSet& s) const { return s.bitField != bitField; }

TSet& TSet::operator=(const TSet& s)
{
	if (this == &s) { return *this; }
	bitField = s.bitField;
	maxPower = s.maxPower;
	return *this;
}

std::istream& operator>>(std::istream& in, TSet& bf)
{
	// TODO: вставьте здесь оператор return
}

std::ostream& operator<<(std::ostream& out, const TSet& bf)
{
	// TODO: вставьте здесь оператор return
}