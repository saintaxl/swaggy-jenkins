=begin
#Swaggy Jenkins

#Jenkins API clients generated from Swagger / Open API specification

OpenAPI spec version: 0.1.0
Contact: blah@cliffano.com
Generated by: https://github.com/swagger-api/swagger-codegen.git
Swagger Codegen version: 2.3.0-SNAPSHOT

=end

require 'spec_helper'
require 'json'
require 'date'

# Unit tests for SwaggyJenkinsClient::GithubRepositorylinks
# Automatically generated by swagger-codegen (github.com/swagger-api/swagger-codegen)
# Please update as you see appropriate
describe 'GithubRepositorylinks' do
  before do
    # run before each test
    @instance = SwaggyJenkinsClient::GithubRepositorylinks.new
  end

  after do
    # run after each test
  end

  describe 'test an instance of GithubRepositorylinks' do
    it 'should create an instance of GithubRepositorylinks' do
      expect(@instance).to be_instance_of(SwaggyJenkinsClient::GithubRepositorylinks)
    end
  end
  describe 'test attribute "_self"' do
    it 'should work' do
       # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  describe 'test attribute "_class"' do
    it 'should work' do
       # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

end
