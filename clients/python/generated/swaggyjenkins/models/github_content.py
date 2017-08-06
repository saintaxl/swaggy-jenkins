# coding: utf-8

"""
    Swaggy Jenkins

    Jenkins API clients generated from Swagger / Open API specification

    OpenAPI spec version: 0.1.0
    Contact: blah@cliffano.com
    Generated by: https://github.com/swagger-api/swagger-codegen.git
"""


from pprint import pformat
from six import iteritems
import re


class GithubContent(object):
    """
    NOTE: This class is auto generated by the swagger code generator program.
    Do not edit the class manually.
    """


    """
    Attributes:
      swagger_types (dict): The key is attribute name
                            and the value is attribute type.
      attribute_map (dict): The key is attribute name
                            and the value is json key in definition.
    """
    swagger_types = {
        'name': 'str',
        'sha': 'str',
        '_class': 'str',
        'repo': 'str',
        'size': 'int',
        'owner': 'str',
        'path': 'str',
        'base64_data': 'str'
    }

    attribute_map = {
        'name': 'name',
        'sha': 'sha',
        '_class': '_class',
        'repo': 'repo',
        'size': 'size',
        'owner': 'owner',
        'path': 'path',
        'base64_data': 'base64Data'
    }

    def __init__(self, name=None, sha=None, _class=None, repo=None, size=None, owner=None, path=None, base64_data=None):
        """
        GithubContent - a model defined in Swagger
        """

        self._name = None
        self._sha = None
        self.__class = None
        self._repo = None
        self._size = None
        self._owner = None
        self._path = None
        self._base64_data = None
        self.discriminator = None

        if name is not None:
          self.name = name
        if sha is not None:
          self.sha = sha
        if _class is not None:
          self._class = _class
        if repo is not None:
          self.repo = repo
        if size is not None:
          self.size = size
        if owner is not None:
          self.owner = owner
        if path is not None:
          self.path = path
        if base64_data is not None:
          self.base64_data = base64_data

    @property
    def name(self):
        """
        Gets the name of this GithubContent.

        :return: The name of this GithubContent.
        :rtype: str
        """
        return self._name

    @name.setter
    def name(self, name):
        """
        Sets the name of this GithubContent.

        :param name: The name of this GithubContent.
        :type: str
        """

        self._name = name

    @property
    def sha(self):
        """
        Gets the sha of this GithubContent.

        :return: The sha of this GithubContent.
        :rtype: str
        """
        return self._sha

    @sha.setter
    def sha(self, sha):
        """
        Sets the sha of this GithubContent.

        :param sha: The sha of this GithubContent.
        :type: str
        """

        self._sha = sha

    @property
    def _class(self):
        """
        Gets the _class of this GithubContent.

        :return: The _class of this GithubContent.
        :rtype: str
        """
        return self.__class

    @_class.setter
    def _class(self, _class):
        """
        Sets the _class of this GithubContent.

        :param _class: The _class of this GithubContent.
        :type: str
        """

        self.__class = _class

    @property
    def repo(self):
        """
        Gets the repo of this GithubContent.

        :return: The repo of this GithubContent.
        :rtype: str
        """
        return self._repo

    @repo.setter
    def repo(self, repo):
        """
        Sets the repo of this GithubContent.

        :param repo: The repo of this GithubContent.
        :type: str
        """

        self._repo = repo

    @property
    def size(self):
        """
        Gets the size of this GithubContent.

        :return: The size of this GithubContent.
        :rtype: int
        """
        return self._size

    @size.setter
    def size(self, size):
        """
        Sets the size of this GithubContent.

        :param size: The size of this GithubContent.
        :type: int
        """

        self._size = size

    @property
    def owner(self):
        """
        Gets the owner of this GithubContent.

        :return: The owner of this GithubContent.
        :rtype: str
        """
        return self._owner

    @owner.setter
    def owner(self, owner):
        """
        Sets the owner of this GithubContent.

        :param owner: The owner of this GithubContent.
        :type: str
        """

        self._owner = owner

    @property
    def path(self):
        """
        Gets the path of this GithubContent.

        :return: The path of this GithubContent.
        :rtype: str
        """
        return self._path

    @path.setter
    def path(self, path):
        """
        Sets the path of this GithubContent.

        :param path: The path of this GithubContent.
        :type: str
        """

        self._path = path

    @property
    def base64_data(self):
        """
        Gets the base64_data of this GithubContent.

        :return: The base64_data of this GithubContent.
        :rtype: str
        """
        return self._base64_data

    @base64_data.setter
    def base64_data(self, base64_data):
        """
        Sets the base64_data of this GithubContent.

        :param base64_data: The base64_data of this GithubContent.
        :type: str
        """

        self._base64_data = base64_data

    def to_dict(self):
        """
        Returns the model properties as a dict
        """
        result = {}

        for attr, _ in iteritems(self.swagger_types):
            value = getattr(self, attr)
            if isinstance(value, list):
                result[attr] = list(map(
                    lambda x: x.to_dict() if hasattr(x, "to_dict") else x,
                    value
                ))
            elif hasattr(value, "to_dict"):
                result[attr] = value.to_dict()
            elif isinstance(value, dict):
                result[attr] = dict(map(
                    lambda item: (item[0], item[1].to_dict())
                    if hasattr(item[1], "to_dict") else item,
                    value.items()
                ))
            else:
                result[attr] = value

        return result

    def to_str(self):
        """
        Returns the string representation of the model
        """
        return pformat(self.to_dict())

    def __repr__(self):
        """
        For `print` and `pprint`
        """
        return self.to_str()

    def __eq__(self, other):
        """
        Returns true if both objects are equal
        """
        if not isinstance(other, GithubContent):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """
        Returns true if both objects are not equal
        """
        return not self == other