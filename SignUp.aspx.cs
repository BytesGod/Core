using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;
using System.Data;
using System.Data.SqlClient;
using System.Configuration;

namespace EMS
{
    public partial class SignUp : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            if (!IsPostBack)
            {
                string CS = ConfigurationManager.ConnectionStrings["EMSConnectionString"].ConnectionString;
                using (SqlConnection con = new SqlConnection(CS))
                {
                    SqlCommand cmd = new SqlCommand("Select * from tblType", con);
                    con.Open();
                    SqlDataReader rdr = cmd.ExecuteReader();
                    ddlUserType.DataSource = rdr;
                    ddlUserType.DataValueField = "TypeId";
                    ddlUserType.DataTextField = "TypeName";
                    ddlUserType.DataBind();
                    ListItem liDefault = new ListItem("Select User Type", "-1");
                    ddlUserType.Items.Insert(0, liDefault);
                }
            }
        }

        protected void ddlUserType_SelectedIndexChanged(object sender, EventArgs e)
        {
            if (ddlUserType.SelectedIndex == 1)
            {
                multiRegView.ActiveViewIndex = 0;

                string CS = ConfigurationManager.ConnectionStrings["EMSConnectionString"].ConnectionString;
                using (SqlConnection con = new SqlConnection(CS))
                {
                    SqlCommand cmd = new SqlCommand("Select * from tblGraduation", con);
                    con.Open();
                    SqlDataReader rdr = cmd.ExecuteReader();
                    ddlSType.DataSource = rdr;
                    ddlSType.DataValueField = "GraduationId";
                    ddlSType.DataTextField = "GraduationType";
                    ddlSType.DataBind();
                    ListItem liDefaultType = new ListItem("Select Graduation Type", "-1");
                    ddlSType.Items.Insert(0, liDefaultType);
                }
            }
            if (ddlUserType.SelectedIndex == 2)
            {
                multiRegView.ActiveViewIndex = 1;
            }
        }

        protected void ddlSType_SelectedIndexChanged(object sender, EventArgs e)
        {
            string CS = ConfigurationManager.ConnectionStrings["EMSConnectionString"].ConnectionString;
            using (SqlConnection con = new SqlConnection(CS))
            {
                SqlCommand cmd = new SqlCommand("Select * from tblCourse where GraduationId = '" + ddlSType.SelectedValue + "'", con);
                con.Open();
                SqlDataReader rdr = cmd.ExecuteReader();
                ddlSCourse.DataSource = rdr;
                ddlSCourse.DataValueField = "CourseId";
                ddlSCourse.DataTextField = "CourseName";
                ddlSCourse.DataBind();
                ListItem liDefault = new ListItem("Select Course", "-1");
                ddlSCourse.Items.Insert(0, liDefault);
            }
        }

        protected void ddlSCourse_SelectedIndexChanged(object sender, EventArgs e)
        {
            string CS = ConfigurationManager.ConnectionStrings["EMSConnectionString"].ConnectionString;
            using (SqlConnection con = new SqlConnection(CS))
            {
                SqlCommand cmd = new SqlCommand("Select * from tblClass where CourseId = '" + ddlSCourse.SelectedValue + "'", con);
                con.Open();
                SqlDataReader rdr = cmd.ExecuteReader();
                ddlSClass.DataSource = rdr;
                ddlSClass.DataValueField = "ClassId";
                ddlSClass.DataTextField = "Class";
                ddlSClass.DataBind();
                ListItem liDefault = new ListItem("Select Class", "-1");
                ddlSClass.Items.Insert(0, liDefault);
            }
        }

        protected void btnSRegistration_Click(object sender, EventArgs e)
        {
            string ConnectionString = ConfigurationManager.ConnectionStrings["EMSConnectionString"].ConnectionString;
            using (SqlConnection con = new SqlConnection(ConnectionString))
            {
                SqlCommand cmd = new SqlCommand("spRegisterUser", con);
                cmd.CommandType = CommandType.StoredProcedure;

                cmd.Parameters.AddWithValue("@FName", txtSFName.Text);
                cmd.Parameters.AddWithValue("@LName", txtSLName.Text);
                cmd.Parameters.AddWithValue("@Username", txtSUsername.Text);
                cmd.Parameters.AddWithValue("@Password", txtSPass.Text);
                cmd.Parameters.AddWithValue("@Email", txtSEmail.Text);
                cmd.Parameters.AddWithValue("@Mobile", txtSMobile.Text);
                cmd.Parameters.AddWithValue("@GraduationType", ddlUserType.SelectedItem.Text);
                cmd.Parameters.AddWithValue("@Course", ddlSCourse.SelectedItem.Text);
                cmd.Parameters.AddWithValue("@Class", ddlSClass.SelectedItem.Text);
                cmd.Parameters.AddWithValue("@DOB", txtSDOB.Text);

                con.Open();
                cmd.ExecuteNonQuery();

                lblMeassage.Text = "Insert Successfully.";
            }
        }
    }
}