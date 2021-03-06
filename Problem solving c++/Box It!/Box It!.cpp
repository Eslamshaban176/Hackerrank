

class Box{
private:
    int length , breadth,height;
public:
    Box():length(0),breadth(0),height(0){}
    Box(int length,int breadth,int height)
    {
        this->length = length;
        this->breadth = breadth;
        this->height = height;
    }
    Box(const Box &con)
    {
        length = con.length;
        breadth = con.breadth;
        height = con.height;
    }
    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
    int getHeight()
    {
        return height;
    }
    long long CalculateVolume()
    {
        return  (long long) (breadth) * length * height;
    }

    bool operator<(Box &B)
    {
        
        if (length < B.length) 
        {
            return true;
        } 
        else if (length == B.length) 
        {
            if (breadth < B.breadth) 
            {
                return true;
            } 
            else if (breadth == B.breadth) 
            {
                if (height < B.height) 
                {
                return true;
                }
            }
        }

        return false;

    }

};
ostream &operator<<(ostream &out, Box &B)
{
    out << B.getLength() << " " << B.getBreadth() << " " << B.getHeight();
    return out;
};
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)

