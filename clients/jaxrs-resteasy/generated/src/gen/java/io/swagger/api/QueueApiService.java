package io.swagger.api;

import io.swagger.api.*;
import io.swagger.model.*;


import io.swagger.model.Queue;

import java.util.List;
import io.swagger.api.NotFoundException;

import java.io.InputStream;

import javax.ws.rs.core.Response;
import javax.ws.rs.core.SecurityContext;

@javax.annotation.Generated(value = "io.swagger.codegen.languages.JavaResteasyServerCodegen", date = "2017-08-03T23:34:55.006Z")
public abstract class QueueApiService {
      public abstract Response getQueue(SecurityContext securityContext)
      throws NotFoundException;
      public abstract Response getQueueItem(String number,SecurityContext securityContext)
      throws NotFoundException;
}
