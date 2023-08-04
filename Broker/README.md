# Broker

The Broker design pattern, also known as the Mediator pattern, is a behavioral design pattern that promotes loose coupling and simplifies communication between 
objects in a system. It is particularly useful when you have a complex system with many objects that need to interact with each other without knowing their 
concrete classes

## Problem

In a traditional object-oriented system, when multiple objects need to communicate with each other, they often end up with direct references to each other. This 
can lead to a tightly coupled design, where changes in one object may require modifications in several other objects. Moreover, understanding and maintaining the 
code can become challenging as the number of interactions increases.

## Solution

The Broker design pattern introduces a central component called the "Broker" or "Mediator." This Mediator encapsulates the communication logic and acts as an 
intermediary between the participating objects, enabling them to interact without direct references to each other.

## Key Participants

Mediator (Broker): The central component responsible for managing the communication between objects. It knows about all the participants and facilitates their interactions.

Colleague (Participant): The objects that need to interact with each other. They communicate through the Mediator and do not have direct references to other colleagues.

## Benefits

Reduced Coupling: Objects no longer depend on each other directly, reducing the level of coupling in the system. This makes it easier to modify and extend individual components.

Centralized Control: The Mediator encapsulates the communication logic, making it easier to manage and modify the interactions in a centralized manner.

Reusability: Since the communication logic is isolated in the Mediator, it can be reused across different components without affecting their implementation.

Simplified Communication: Objects only need to know about the Mediator, simplifying the communication process and reducing the complexity of object interactions.

## Example 

Imagine a chat application where multiple users need to send messages to each other. In a traditional design, users might directly reference each other to send 
messages. However, with the Broker design pattern, the chat application can have a central ChatRoom acting as the Mediator. Each user communicates through the 
ChatRoom to send and receive messages to other users, without knowing their concrete classes.

## Usage

1. Identify the objects that need to communicate with each other.

2. Design the Mediator class that encapsulates the communication logic and provides methods for communication between objects.

3. Modify the objects to interact with each other through the Mediator by calling appropriate methods.

