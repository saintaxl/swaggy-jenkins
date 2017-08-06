/*
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 0.1.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/**
 * SwagCauseUserIdCause
 */
public class SwagCauseUserIdCause implements Swagger.MappedProperties {
    /**
     * Get propertyClass
     * @return propertyClass
     */
    public String propertyClass { get; set; }

    /**
     * Get shortDescription
     * @return shortDescription
     */
    public String shortDescription { get; set; }

    /**
     * Get userId
     * @return userId
     */
    public String userId { get; set; }

    /**
     * Get userName
     * @return userName
     */
    public String userName { get; set; }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        '_class' => 'propertyClass'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    public static SwagCauseUserIdCause getExample() {
        SwagCauseUserIdCause causeUserIdCause = new SwagCauseUserIdCause();
        causeUserIdCause.propertyClass = 'aeiou';
        causeUserIdCause.shortDescription = 'aeiou';
        causeUserIdCause.userId = 'aeiou';
        causeUserIdCause.userName = 'aeiou';
        return causeUserIdCause;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof SwagCauseUserIdCause) {
            SwagCauseUserIdCause causeUserIdCause = (SwagCauseUserIdCause) obj;
            return this.propertyClass == causeUserIdCause.propertyClass
                && this.shortDescription == causeUserIdCause.shortDescription
                && this.userId == causeUserIdCause.userId
                && this.userName == causeUserIdCause.userName;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (propertyClass == null ? 0 : System.hashCode(propertyClass));
        hashCode = (17 * hashCode) + (shortDescription == null ? 0 : System.hashCode(shortDescription));
        hashCode = (17 * hashCode) + (userId == null ? 0 : System.hashCode(userId));
        hashCode = (17 * hashCode) + (userName == null ? 0 : System.hashCode(userName));
        return hashCode;
    }
}
