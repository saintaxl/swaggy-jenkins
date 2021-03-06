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
 * SwagGithubOrganizationlinks
 */
public class SwagGithubOrganizationlinks implements Swagger.MappedProperties {
    /**
     * Get repositories
     * @return repositories
     */
    public SwagLink repositories { get; set; }

    /**
     * Get self
     * @return self
     */
    public SwagLink self { get; set; }

    /**
     * Get propertyClass
     * @return propertyClass
     */
    public String propertyClass { get; set; }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        '_class' => 'propertyClass'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    public static SwagGithubOrganizationlinks getExample() {
        SwagGithubOrganizationlinks githubOrganizationlinks = new SwagGithubOrganizationlinks();
        githubOrganizationlinks.repositories = SwagLink.getExample();
        githubOrganizationlinks.self = SwagLink.getExample();
        githubOrganizationlinks.propertyClass = 'aeiou';
        return githubOrganizationlinks;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof SwagGithubOrganizationlinks) {
            SwagGithubOrganizationlinks githubOrganizationlinks = (SwagGithubOrganizationlinks) obj;
            return this.repositories == githubOrganizationlinks.repositories
                && this.self == githubOrganizationlinks.self
                && this.propertyClass == githubOrganizationlinks.propertyClass;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (repositories == null ? 0 : System.hashCode(repositories));
        hashCode = (17 * hashCode) + (self == null ? 0 : System.hashCode(self));
        hashCode = (17 * hashCode) + (propertyClass == null ? 0 : System.hashCode(propertyClass));
        return hashCode;
    }
}

