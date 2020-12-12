

public class Main {

    public static void main(String[] args) {
        System.out.println("Hello World");
        String message = new String("Hello World");     //string keyword
        //in java we have shorter way to initialise string variables
        String message0 = "Hello World"; //shorter way, string literals
        System.out.println(message0);

        //concatenate or combine strings

        String message1 = "hello world" + "!!!";
        System.out.println(message1);

        String messages =message.concat("@@@"); //concat method
        System.out.println(messages);

        String Messages = message0.concat(message); //concat method
        System.out.println(Messages);


        //with endsWith method we can check whether the string ends with a character or sequence of char
        message1.endsWith("!!!");
                //let's print this
        System.out.println(message1.endsWith("!!!"));   //is true or not, returns boolean values

        //with startsWith method we can check whether the string starts with a character or sequence of char
        message1.startsWith("!!!");
                //let's print this
        System.out.println(message1.startsWith("!!!"));   //is true or not, returns boolean values

        //length method is called to get the number of characters in the string
        message1.length();
                //let's print this
        System.out.println(message1.length());   //we can use this to check the length of input by the user

        //indexOf returns the index of the first occurrence of the string/character we pass

        System.out.println(message1.indexOf("h"));      //it's index is 0
        System.out.println(message1.indexOf("e"));      // is 1
        System.out.println(message1.indexOf("Help"));      // it is not in the message1 string so it returns negative value

        //replace method is used to replace one or more characters with something else

        System.out.println(message1.replace("!","#"));
        //here "target and replacement" are PARAMETERS and we passed two ARGUMENTS which are separated with comma
        //"return method" does not modify our original string it returns a new string
        System.out.println(message1);   //original string is not changed, in JAVA strings are immutable/unchangeable

        //ANY METHOD which modifies string will always return a new string object

        //toLowerCase method converts all characters to lower case
        System.out.println(message.toLowerCase());
        System.out.println(message);

        //toUpperCase method converts all characters to upper case
        System.out.println(message.toUpperCase());
        System.out.println(message);

        //trim method can be used to get rid of extra wide spaces that can be at the beginning or the end of the string
        String message2 = "     Hello World" + "!!!     ";
        System.out.println(message2);
        System.out.println(message2.trim());

        //charAT method returns character at specified index in a string

        char character = message1.charAt(0);    //at index 0 character is h
        System.out.println(character);          //it will print index at 0

        char character1 = message1.charAt(4);
        System.out.println(character1);

        char character2 = message1.charAt(13);
        System.out.println(character2);

        //equals method compares the two given strings based on the content of the string, returns boolean value

        System.out.println(message1.equals(message2));
                //the String equals() method overrides the equals() method of Object class

        //Empty method checks if the string is empty or length of string is 0 or not, it returns boolean value

        String message3 = "";
        System.out.println(message3.isEmpty());
                //if the length of string is 0, it returns true
        System.out.println(message2.isEmpty());

        //equalsIgnoreCase method called to compare one string to another string ignoring case consideration
                    //returns boolean value
        System.out.println(message0.equalsIgnoreCase(message1));
        System.out.println(message0.equalsIgnoreCase(message));

        //compareTo method compares string on the basis of Unicode value of each character in the strings
                //compareTo compares the given string with current string lexicographically
                //it returns positive number, negative number or zero

        System.out.println(message.compareTo(message0));    //0 because both are equal
        System.out.println(message0.compareTo(message1));   //negative value because string, character value of message0 is lower than message1
        System.out.println(message1.compareTo(message2));   //positive value because string, character value of message1 is greater than message2





    }
}
