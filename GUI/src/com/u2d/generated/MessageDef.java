/*
 * MessageDef.java
 *
 * This code has been auto-updated by JTS after it has been auto-generated by umlc
 * Created on Wed Oct 05 10:31:03 EDT 2011
 */

package com.u2d.generated;


import com.u2d.model.*;
import com.u2d.app.PersistenceMechanism;
import com.u2d.type.*;
import com.u2d.type.atom.*;
import com.u2d.type.composite.*;
import com.u2d.list.RelationalList;
import com.u2d.reflection.Fld;
import javax.persistence.Entity;
import org.hibernate.Query;



@Entity
public  class MessageDef extends AbstractComplexEObject_JTS implements HasHeaderBodyFooter {

    
    /** Creates a new instance of MessageDef */
    public MessageDef() {
    }
    public Title title() { 
        StringBuffer text = new StringBuffer();
        text.append(name.title() + " 0x" + messageId.title()+" [MessageDef]");
        messageId.setValue( messageId.toString().toUpperCase() );
        return new Title(text.toString());
    }    
    


    // ******    name   ******
    private final StringEO name = new StringEO();
    public StringEO getName() { return name;}
    public void setName( String s ) { name.setValue( s ); }

    // ******    messageId   ******
    private final StringEO messageId = new StringEO();
    @Fld(label="ID (2 byte hex)")
    public StringEO getMessageId() { return messageId;}

    // ******    description   ******
    private final TextEO description = new TextEO();
    public TextEO getDescription() { return description;}
    public void setDescription( String s ) { description.setValue( s ); }

    // ******    isCommand   ******
    private final BooleanEO isCommand = new BooleanEO();
    public BooleanEO getIsCommand() { return isCommand;}
    public void setIsCommand( boolean b ) { isCommand.setValue( b ); }

    // ******    deprecated   ******
    private final BooleanEO deprecated = new BooleanEO();
    public BooleanEO getDeprecated() { return deprecated;}
    public void setDeprecated( boolean b ) { deprecated.setValue( b ); }
   


 
    // ********  body ********
    private Body body;
    public Body getBody() {
        return body;
    }
    public void setBody(Body body) {
        Body old = this.body;
        this.body = body;
        firePropertyChange("body", old, this.body );
    }


 
    // ********  header ********
    private Header header;
    public Header getHeader() {
        return header;
    }
    public void setHeader(Header header) {
        Header old = this.header;
        this.header = header;
        firePropertyChange("header", old, this.header );
    }


 
    // ********  footer ********
    private Footer footer;
    public Footer getFooter() {
        return footer;
    }
    public void setFooter(Footer footer) {
        Footer old = this.footer;
        this.footer = footer;
        firePropertyChange("footer", old, this.footer );
    }




 
/************** Uncomment the following as needed *****************************/
      public static String[] fieldOrder  = {"name", "messageId", "description", "isCommand", "deprecated", "header", "body", "footer", "referencingElements"};
public static String[] readOnly  = {"referencingElements"};
// ******    referencingElements   ******
   private final StringEO referencingElements = new StringEO("{Input Sets, Output Sets}");
   public StringEO getReferencingElements() { return referencingElements;}

      ;
//    public static String[] tabViews          = {"fieldname1", "fieldname2"};

      ;
//    public static String[] flattenIntoParent = {"fieldname1", "fieldname2"};

      ;
//    public static String[] identities = {"fieldname1", "fieldname2"};

//    public static String pluralName() { return "MessageDefs"; }
      /* Specify a color to represnt this class */
//    public static Color colorCode = new Color(0x2332);

      /* Use a different Icon for each instance. Change photoFieldName. */
//    private transient PhotoIconAssistant assistant = 
//                        new PhotoIconAssistant(this, photoFieldname);
//    public Icon iconLg() { return assistant.iconLg(); }
//    public Icon iconSm() { return assistant.iconSm(); }


      /* Specify the default search field for this class */
//    public static String defaultSearchPath = "";


      /* Specify a custom view for this class. 
//    public EView getMainView()
//    {
//       return new CustomMessageDefView(this);
//    }
/**********************/

public void initialize() {
	super.initialize(); 
	Query hibernateQuery = hbmPersistor().getSession().createQuery("from Header hdr where hdr.name=:name"); 
	hibernateQuery.setParameter("name", "JTS_DefaultHeader" );
	com.u2d.generated.Header defHeader = (com.u2d.generated.Header) hibernateQuery.uniqueResult();

	// Default header does not exist.  Create it.       
	if (defHeader == null)
	{
		defHeader = new com.u2d.generated.Header();
		defHeader.getName().setValue("JTS_DefaultHeader"); 
		com.u2d.generated.Record defRecord = new com.u2d.generated.Record();
		defRecord.getName().setValue("DefaultHeaderRec"); 
		com.u2d.generated.FixedField defField = new com.u2d.generated.FixedField(); 
	 	defField.getName().setValue("MessageID"); 
	 	defField.getOptional().setValue(false); 
		defField.getUnits().getCode().setValue("one");
 		defField.getUnits().getCaption().setValue("one"); 
		defField.getType().getCode().setValue("unsigned short integer");
	 	defField.getType().getCaption().setValue("unsigned short integer");
	 	defRecord.getSimpleFields().add(defField);
		defHeader.setComplexField(defRecord);
		defField.save();
	 	defRecord.save();
		defHeader.save();
	}

	this.header = defHeader;
}

        
}
