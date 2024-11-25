using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace UkraineLibrary
{
    public interface ISingleton
    {
        double[] longitude { get; set; }
        double[] latitude { get; set; }
        string name { get; set; }
        void InsertCity(double[] lon, double[] lat, string n);
        double ConvertToRadians(double[] coordinate);
        string calculateDistanceFromKuivToCity();
    }
}
