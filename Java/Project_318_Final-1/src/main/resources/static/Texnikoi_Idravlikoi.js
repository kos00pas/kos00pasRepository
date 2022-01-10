
class AcceptButton extends React.Component {
    constructor(props) {
        super(props);
        console.log(props)
    }

    render() {

        return (
            <div>
                <form action="/emailtopelatis" method="get" >
                    <input name="email" type="hidden" value={this.props.email} readOnly/>
                    <input name="idMatchRepository" type="hidden" value={this.props.idMatchRepository} readOnly/>
                    <input name="idMatchspecific" type="hidden" value={this.props.idMatchspecific} readOnly/>
                    <input name="idPelati" type="hidden" value={this.props.idPelati} readOnly/>
                    <input name="epilogiTexnikouMatch" type="hidden" value={this.props.epilogiTexnikouMatch} readOnly/>

                    <button type="submit" className="btn btn-warning"  >Accept </button>
                </form>
                <form action="/delete_after_accept" method="get" >
                    <input name="idMatchRepository" type="hidden" value={this.props.idMatchRepository} readOnly/>
                    <input name="idMatchspecific" type="hidden" value={this.props.idMatchspecific} readOnly/>
                    <input name="idPelati" type="hidden" value={this.props.idPelati} readOnly/>
                    <input name="epilogiTexnikouMatch" type="hidden" value={this.props.epilogiTexnikouMatch} readOnly/>


                    <button type="submit" className="btn btn-warning"  >Reject </button>
                </form>


            </div>
        )
    };
}
class EmfanisilistTexnikou extends React.Component {
    render() {

        return (
            <div>
                <h5>edw1</h5>
                <table id="stoixeia-list" className="table">
                    <thead>
                    <tr>
                        <th scope="col">ID</th>
                        <th scope="col">Pelatis Name</th>
                        <th scope="col">Email</th>
                        <th scope="col">perigrafi</th>
                        <th scope="col">Accept</th>
                    </tr>
                    </thead>
                    <tbody>
                    {this.props.stoixeia.map(sstoixeia => (
                        <tr>
                            <td> {sstoixeia.idPelati}</td>
                            <td> {sstoixeia.namePelatiMatch}</td>
                            <td>{sstoixeia.emailPelatiMatch}</td>
                            <td>{sstoixeia.topothesiaPelatiMatch}</td>
                            <td>{sstoixeia.perigrafi}</td>
                            <td><AcceptButton email={sstoixeia.emailPelatiMatch}

                                              idMatchRepository={sstoixeia.idMatchRepository}
                                              idPelati={sstoixeia.idPelati}
                                              idMatchspecific={sstoixeia.idMatchspecific}
                                              epilogiTexnikouMatch={sstoixeia.epilogiTexnikouMatch} /></td>

                        </tr>
                    ))}
                    </tbody>
                </table>
            </div>
        );
    }
}


class EmfanisiTexnikou extends React.Component {
    constructor(props) {
        super(props)
        this.state = {
            stoixeia : []
        }
    }

    componentDidMount() {
        fetch("/getIdravlikosMatch")// perni oti ginetai sto "/" dld  repositoryKnow.findAll se Iterable<Question>
            .then(res => res.json())//metatropi se json
            .then(//me to apotelesma tou json kane to pio katw
                (response) => { //response =to apotelesma tou json  filakse to sto question
                    this.setState({
                        stoixeia: response
                    });
                },
                (error) => {
                    alert(error);
                }
            )
    }

    render() {

        return (
            <div id="mainn">
                <EmfanisilistTexnikou stoixeia={this.state.stoixeia}/>
            </div>
        );
    }

}

ReactDOM.render(
    <EmfanisiTexnikou />,
    document.getElementById('Texnikoi_Idravlikoi')
);