import { useState } from "react";
import reactLogo from "./assets/react.svg";
import viteLogo from "/vite.svg";
import "./App.css";
import { useEffect } from "react";

function useTodo() {
  const [todo, setTodo] = useState([]);

  useEffect(() => {
    setInterval(() => {
      fetch("http://localhost:3000/todos").then((response) => {
        response.json().then((data) => {
          console.log(data);
          setTodo(data);
        });
      });
    }, 2000);
  }, []);

  return todo;
}

function App() {
  const todo = useTodo();

  return (
    <>
      {todo.map((todo) => {
        return (
          <div>
            {todo.title}
            {todo.description}
            <button>Delete</button>
            <br />
          </div>
        );
      })}
    </>
  );
}

export default App;
