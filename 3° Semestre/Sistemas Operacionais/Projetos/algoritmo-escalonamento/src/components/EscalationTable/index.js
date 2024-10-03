import React from "react";
import Table from "@mui/material/Table";
import TableBody from "@mui/material/TableBody";
import TableCell from "@mui/material/TableCell";
import TableContainer from "@mui/material/TableContainer";
import TableHead from "@mui/material/TableHead";
import TableRow from "@mui/material/TableRow";
import Paper from "@mui/material/Paper";
import DeleteButton from "../DeleteButton";

function BasicTable({ data, delete: handleDelete}) {
  return (
    <TableContainer component={Paper}>
      <Table sx={{ minWidth: 650 }} aria-label="simple table">
        <TableHead>
          <TableRow>
            <TableCell>Ordem (tempo 0)</TableCell>
            <TableCell align="right">Processo</TableCell>
            <TableCell align="right">Tempo Execução</TableCell>
            <TableCell align="right">Prioridade</TableCell>
            <TableCell align="right">Ações</TableCell>
          </TableRow>
        </TableHead>
        <TableBody>
          {data.map((row) => (
            <TableRow key={row.id}>
              <TableCell component="th" scope="row">
                {row.order}
              </TableCell>
              <TableCell align="right">{row.process}</TableCell>
              <TableCell align="right">{row.execTime}</TableCell>
              <TableCell align="right">{row.priority}</TableCell>
              <TableCell align="right">
                <DeleteButton id={row.id} onDelete={handleDelete} />
              </TableCell>
            </TableRow>
          ))}
        </TableBody>
      </Table>
    </TableContainer>
  );
}

export default BasicTable;