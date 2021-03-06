package io.swagger.api;


import io.swagger.annotations.*;

import org.springframework.http.HttpStatus;
import org.springframework.http.ResponseEntity;
import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestHeader;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RequestPart;
import org.springframework.web.multipart.MultipartFile;

import java.util.List;
import com.fasterxml.jackson.databind.ObjectMapper;
import java.io.IOException;
import javax.validation.constraints.*;
import javax.validation.Valid;
@javax.annotation.Generated(value = "io.swagger.codegen.languages.SpringCodegen", date = "2017-08-03T23:37:43.850Z")

@Controller
public class CreateItemApiController implements CreateItemApi {
    private final ObjectMapper objectMapper;

    public CreateItemApiController(ObjectMapper objectMapper) {
        this.objectMapper = objectMapper;
    }

    public ResponseEntity<Void> postCreateItem( @NotNull@ApiParam(value = "Name of the new job", required = true) @RequestParam(value = "name", required = true) String name,
        @ApiParam(value = "Existing job to copy from") @RequestParam(value = "from", required = false) String from,
        @ApiParam(value = "Set to 'copy' for copying an existing job") @RequestParam(value = "mode", required = false) String mode,
        @ApiParam(value = "Job configuration in config.xml format"  )  @Valid @RequestBody String body,
        @ApiParam(value = "CSRF protection token" ) @RequestHeader(value="Jenkins-Crumb", required=false) String jenkinsCrumb,
        @ApiParam(value = "Content type header application/xml" ) @RequestHeader(value="Content-Type", required=false) String contentType,
        @RequestHeader(value = "Accept", required = false) String accept) throws Exception {
        // do some magic!
        return new ResponseEntity<Void>(HttpStatus.OK);
    }

}
