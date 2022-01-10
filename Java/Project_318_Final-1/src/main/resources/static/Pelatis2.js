class DeleteButton extends React.Component{
    constructor(props) {
        super(props);
    }
    render(){

        return (
            <div>
                <form action="/deleteStoixeiaPelati" method="get">
                    <input name="id" type="hidden" value={this.props.id} readOnly/>
                    <button type="submit" className="btn btn-danger"> DELETE</button>
                </form>
            </div>
        )
    };
}

class Emfanisilist extends React.Component {

    render() {

        return (
            <div>
                <div>
                    You have {this.props.stoixeia.length} request!
                </div>
                <table id="question-list" className="table">
                    <thead>
                    <tr>
                        <th scope="col">#id</th>
                        <th scope="col">Customer's Name</th>
                        <th scope="col">Customer Email</th>
                        <th scope="col">Customer Location</th>
                        <th scope="col">Details</th>
                        <th scope="col">Choice of Technician</th>
                        <th scope="col">Delete</th>


                    </tr>
                    </thead>
                    <tbody>
                    {this.props.stoixeia.map(sstoixeia => (
                        <tr>
                            <td> {sstoixeia.id}</td>
                            <td> {sstoixeia.namePelati}</td>
                            <td>{sstoixeia.emailPelati}</td>
                            <td>{sstoixeia.topothesiaPelati}</td>
                            <td>{sstoixeia.perigrafi}</td>
                            <td>{sstoixeia.epilogiTexnikou}</td>
                            <td><DeleteButton id={sstoixeia.id}/></td>

                        </tr>
                    ))}
                    </tbody>
                </table>
            </div>
        );
    }
}


class Emfanisi extends React.Component {
    constructor(props) {
        super(props)
        this.state = {
            stoixeia : []
        }
    }

    componentDidMount() {
        fetch("/listStoixeiaPelati")// perni oti ginetai sto "/" dld  repositoryKnow.findAll se Iterable<Question>
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
            <div id="main">
                <Emfanisilist stoixeia={this.state.stoixeia}/>
            </div>
        );
    }

}

ReactDOM.render(
    <Emfanisi />,
    document.getElementById('Pelatis2')
);