 
#ifndef H_BillType
#define H_BillType

#include <iosfwd>
#include <string>
 

class Bill 
{
public:
    void printBill(std::ostream& out) const;
	/*
	Prints in the following format:
	
   "Pharmacy Charges: $2.00
    Room Charges:     $1.00
    Doctor's Fees:    $3.55
    ______________________________
    Total Charges:    $6.55
	"

	*/
            
    std::string getID() const;

    void setPharmacyCharges(double charges);
    double getPharmacyCharges() const;
    void addPharmacyCharges(double charges);

    void setRoomRent(double charges);
    double getRoomRent() const;
    void addRoomRent(double charges);

    void setDoctorFee(double charges);
    double getDoctorFee() const;
    void addDoctorFee(double charges);

	// billing amount is the sum of the three fees (Pharmacy charges, room rent, and the doctor fee).
    double billingAmount() const;
    
    explicit Bill(const std::string & id, double phCharges = 0, double rRent = 0, double docFee = 0);

 private:
    std::string ID;
    double pharmacyCharges;
    double roomRent;
    double doctorFee;
};

#endif