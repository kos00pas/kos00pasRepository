class DikseApantisi extends React.Component{
    render(){
        return(
            <div>
                {this.props.Apantisi.map(s =>(<h1>Apantisi: {s.saveAnswer}</h1>))}
            </div>
        );
    }
}



class AskedMe extends React.Component {
    constructor(props) {
        super(props)
        this.state = {
            Apantisi: []
        }
    }
    componentDidMount() {
        fetch("/yourSaveAnswers")
            .then(res => res.json())
            .then(
                (response) => {
                    this.setState({
                        Apantisi: response
                    });
                },
                (error) => {
                    alert(error);
                }
            )
    }
    render() {

        return (
            <div>
                <DikseApantisi Apantisi={this.state.Apantisi}/>
            </div>
        );
    }

}

ReactDOM.render(
    <AskedMe />,
    document.getElementById('Apantisi')
);