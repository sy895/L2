document.addEventListener("DOMContentLoaded", () => {
    document.getElementById("btn-title").addEventListener("click", () => {
      alert(document.title);
    });
  
    document.getElementById("btn-tree").addEventListener("click", () => {
      const out = [];
      traverse(document.documentElement, 0, out);
      document.getElementById("dump").textContent = out.join("\n");
    });
  });
  

  function traverse(node, depth, outArr) {
    const indent = "  ".repeat(depth);
    outArr.push(`${indent}${node.nodeName}`);
    node.childNodes.forEach(child => traverse(child, depth + 1, outArr));
  }
  
  /*
  Console – propriétés utiles de window.document.body :
    document.body
    document.body.children
    document.body.childNodes
    document.body.firstElementChild
    document.body.lastElementChild
    document.body.nodeType   // 1 = ELEMENT_NODE
    document.body.nodeName   // "BODY"
  */
  