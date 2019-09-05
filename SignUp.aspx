<%@ Page Title="" Language="C#" MasterPageFile="~/Default.Master" AutoEventWireup="true" CodeBehind="SignUp.aspx.cs" Inherits="EMS.SignUp" %>
<asp:Content ID="Content1" ContentPlaceHolderID="head" runat="server">
    <style type="text/css">
        .auto-style5 {
            width: 100%;
        }
        .auto-style6 {
            height: 33px;
        }
        .auto-style7 {
            height: 33px;
            text-align: center;
            width: 413px;
        }
        .auto-style8 {
            width: 413px;
            height: 29px;
            text-align: center;
        }
        .auto-style9 {
            height: 33px;
            width: 471px;
        }
        .auto-style10 {
            width: 471px;
            height: 29px;
            text-align: right;
        }
        .auto-style11 {
            height: 29px;
        }
        .auto-style12 {
            height: 30px;
        }
        .auto-style13 {
            height: 34px;
        }
        .auto-style14 {
            height: 31px;
        }
        .auto-style15 {
            height: 32px;
        }
        .auto-style16 {
            height: 36px;
        }
        .auto-style19 {
            height: 36px;
            text-align: right;
            width: 431px;
        }
        .auto-style20 {
            height: 30px;
            text-align: right;
            width: 431px;
        }
        .auto-style21 {
            height: 34px;
            text-align: right;
            width: 431px;
        }
        .auto-style22 {
            height: 33px;
            text-align: right;
            width: 431px;
        }
        .auto-style23 {
            height: 31px;
            text-align: right;
            width: 431px;
        }
        .auto-style24 {
            height: 32px;
            text-align: right;
            width: 431px;
        }
        .auto-style27 {
            height: 36px;
            text-align: center;
            width: 391px;
        }
        .auto-style28 {
            height: 30px;
            text-align: center;
            width: 391px;
        }
        .auto-style29 {
            height: 34px;
            text-align: center;
            width: 391px;
        }
        .auto-style30 {
            height: 33px;
            text-align: center;
            width: 391px;
        }
        .auto-style31 {
            height: 31px;
            text-align: center;
            width: 391px;
        }
        .auto-style32 {
            height: 32px;
            text-align: center;
            width: 391px;
        }
    </style>
</asp:Content>
<asp:Content ID="Content2" ContentPlaceHolderID="ContentPlaceHolder1" runat="server">
    <table class="auto-style5">
        <tr>
            <td class="auto-style9"></td>
            <td class="auto-style7">
                <asp:Label ID="lblRegistration" runat="server" Font-Size="X-Large" Text="Registration"></asp:Label>
            </td>
            <td class="auto-style6"></td>
        </tr>
        <tr>
            <td class="auto-style10">User Type</td>
            <td class="auto-style8">
                <asp:DropDownList ID="ddlUserType" runat="server" AutoPostBack="True" OnSelectedIndexChanged="ddlUserType_SelectedIndexChanged">
                </asp:DropDownList>
            </td>
            <td class="auto-style11"></td>
        </tr>
    </table>
    <p>

        <asp:MultiView ID="multiRegView" runat="server">
            <asp:View ID="studentView" runat="server">

                <table align="center" class="auto-style5">
                    <tr>
                        <td class="auto-style22">First Name</td>
                        <td class="auto-style30">
                            <asp:TextBox ID="txtSFName" runat="server"></asp:TextBox>
                        </td>
                        <td class="auto-style6">
                            <asp:RequiredFieldValidator ID="rfvSFName" runat="server" ControlToValidate="txtSFName" ErrorMessage="Please enter first name." ForeColor="Red"></asp:RequiredFieldValidator>
                        </td>
                    </tr>
                    <tr>
                        <td class="auto-style21">Last Name</td>
                        <td class="auto-style29">
                            <asp:TextBox ID="txtSLName" runat="server"></asp:TextBox>
                        </td>
                        <td class="auto-style13">
                            <asp:RequiredFieldValidator ID="rfvSLName" runat="server" ControlToValidate="txtSLName" ErrorMessage="Please enter last name." ForeColor="Red"></asp:RequiredFieldValidator>
                        </td>
                    </tr>
                    <tr>
                        <td class="auto-style23">Username</td>
                        <td class="auto-style31">
                            <asp:TextBox ID="txtSUsername" runat="server"></asp:TextBox>
                        </td>
                        <td class="auto-style14">
                            <asp:RequiredFieldValidator ID="rfvSUsername" runat="server" ControlToValidate="txtSUsername" ErrorMessage="Please enter username." ForeColor="Red"></asp:RequiredFieldValidator>
                        </td>
                    </tr>
                    <tr>
                        <td class="auto-style24">Email</td>
                        <td class="auto-style32">
                            <asp:TextBox ID="txtSEmail" runat="server"></asp:TextBox>
                        </td>
                        <td class="auto-style15">
                            <asp:RegularExpressionValidator ID="revSEmail" runat="server" ControlToValidate="txtSEmail" ErrorMessage="Please enter proper email." ForeColor="Red" ValidationExpression="\w+([-+.']\w+)*@\w+([-.]\w+)*\.\w+([-.]\w+)*"></asp:RegularExpressionValidator>
                        </td>
                    </tr>
                    <tr>
                        <td class="auto-style23">Mobile No</td>
                        <td class="auto-style31">
                            <asp:TextBox ID="txtSMobile" runat="server"></asp:TextBox>
                        </td>
                        <td class="auto-style14">
                            <asp:RegularExpressionValidator ID="revSMobile" runat="server" ControlToValidate="txtSMobile" ErrorMessage="Please enter 10 digit number." ForeColor="Red" ValidationExpression="\d{10}"></asp:RegularExpressionValidator>
                        </td>
                    </tr>
                    <tr>
                        <td class="auto-style20">Graduction Type</td>
                        <td class="auto-style28">
                            <asp:DropDownList ID="ddlSType" runat="server" AutoPostBack="True" OnSelectedIndexChanged="ddlSType_SelectedIndexChanged">
                            </asp:DropDownList>
                        </td>
                        <td class="auto-style12">
                            <asp:RequiredFieldValidator ID="rfvSType" runat="server" ControlToValidate="ddlSType" ErrorMessage="Please select graduation type." ForeColor="Red" InitialValue="-1"></asp:RequiredFieldValidator>
                        </td>
                    </tr>
                    <tr>
                        <td class="auto-style24">Course</td>
                        <td class="auto-style32">
                            <asp:DropDownList ID="ddlSCourse" runat="server" AutoPostBack="True" DataTextField="CourseName" DataValueField="CourseId" OnSelectedIndexChanged="ddlSCourse_SelectedIndexChanged">
                            </asp:DropDownList>
                        </td>
                        <td class="auto-style15">
                            <asp:RequiredFieldValidator ID="rfvSCourse" runat="server" ControlToValidate="ddlSCourse" ErrorMessage="Please select Course." ForeColor="Red" InitialValue="-1"></asp:RequiredFieldValidator>
                        </td>
                    </tr>
                    <tr>
                        <td class="auto-style19">Class</td>
                        <td class="auto-style27">
                            <asp:DropDownList ID="ddlSClass" runat="server" AutoPostBack="True" DataTextField="Class" DataValueField="ClassId">
                            </asp:DropDownList>
                        </td>
                        <td class="auto-style16">
                            <asp:RequiredFieldValidator ID="rfvSClass" runat="server" ControlToValidate="ddlSClass" ErrorMessage="Please select class." ForeColor="Red" InitialValue="-1"></asp:RequiredFieldValidator>
                        </td>
                    </tr>
                    <tr>
                        <td class="auto-style24">Image</td>
                        <td class="auto-style32">
                            <asp:FileUpload ID="fupSImage" runat="server" />
                        </td>
                        <td class="auto-style15">
                            <asp:RequiredFieldValidator ID="rfvSImage" runat="server" ControlToValidate="fupSImage" ErrorMessage="Please select image." ForeColor="Red"></asp:RequiredFieldValidator>
                        </td>
                    </tr>
                    <tr>
                        <td class="auto-style23">DOB</td>
                        <td class="auto-style31">
                            <asp:TextBox ID="txtSDOB" runat="server"></asp:TextBox>
                            <ajaxToolkit:CalendarExtender ID="txtSDOB_CalendarExtender" runat="server" BehaviorID="txtSDOB_CalendarExtender" TargetControlID="txtSDOB" />
                        </td>
                        <td class="auto-style14">
                            <asp:RequiredFieldValidator ID="rfvSDOB" runat="server" ControlToValidate="txtSDOB" ErrorMessage="Please enter DOB" ForeColor="Red"></asp:RequiredFieldValidator>
                        </td>
                    </tr>
                    <tr>
                        <td class="auto-style23">Password</td>
                        <td class="auto-style31">
                            <asp:TextBox ID="txtSPass" runat="server"></asp:TextBox>
                        </td>
                        <td class="auto-style14">
                            <asp:RequiredFieldValidator ID="rfvSPass" runat="server" ControlToValidate="txtSPass" ErrorMessage="Please enter the password." ForeColor="Red"></asp:RequiredFieldValidator>
                        </td>
                    </tr>
                    <tr>
                        <td class="auto-style23">Confirm Password</td>
                        <td class="auto-style31">
                            <asp:TextBox ID="txtSConPass" runat="server"></asp:TextBox>
                        </td>
                        <td class="auto-style14">
                            <asp:CompareValidator ID="cvSPass" runat="server" ControlToCompare="txtSPass" ControlToValidate="txtSConPass" ErrorMessage="Password not match." ForeColor="Red"></asp:CompareValidator>
                        </td>
                    </tr>
                    <tr>
                        <td class="auto-style23">
                            <asp:Label ID="lblMeassage" runat="server" ForeColor="Green"></asp:Label>
                        </td>
                        <td class="auto-style31">
                            <asp:Button ID="btnSRegistration" runat="server" Text="Register" OnClick="btnSRegistration_Click" />
                            &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
                            <asp:HyperLink ID="hypLogin" runat="server" NavigateUrl="~/Login.aspx">Already have a account.</asp:HyperLink>
                        </td>
                        <td class="auto-style14">
                            <asp:ScriptManager ID="ScriptManager1" runat="server">
                            </asp:ScriptManager>
                        </td>
                    </tr>
                </table>

            </asp:View>
            <asp:View ID="facultyView" runat="server">

            </asp:View>
        </asp:MultiView>

    </p>
    <p>

    </p>
</asp:Content>
