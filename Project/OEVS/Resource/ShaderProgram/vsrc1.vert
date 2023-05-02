#version 330
uniform mat4 uPMatrix,uVMatrix,uMMatrix;
uniform vec3 uLightLocation,uCamera;
layout (location = 0) in vec3 aPosition;
layout (location = 1) in vec2 aTextureCoord;
layout (location = 2) in vec3 aNormal;
smooth out vec2 vTextureCood;
smooth out vec4 vAmbient;
smooth out vec4 vDiffuse;
smooth out vec4 vSpecular;

void pointLight(in vec3 normal,inout vec4 ambient,inout vec4 diffuse,inout vec4 specular,in vec4 lightAmbient,in vec4 lightDiffuse,in vec4 lightSpecular,in float shininess){
    ambient = lightAmbient;

    vec3 normalTarget = aPosition + normal;
    vec3 newNormal = normalize((uMMatrix * vec4(normalTarget,1)).xyz - (uMMatrix * vec4(aPosition,1)).xyz);
    vec3 eye = normalize(uCamera - (uMMatrix * vec4(aPosition,1)).xyz);
    vec3 vp = normalize(uLightLocation - (uMMatrix * vec4(aPosition,1)).xyz);
    vec3 halfVector = normalize(eye + vp);

    float nDotViewPotision = max(0.0,dot(newNormal,vp));
    diffuse = lightDiffuse * nDotViewPotision;

    float nDotViewHalfVector = dot(newNormal,halfVector);
    float powerFactor = max(0.0,pow(nDotViewHalfVector,shininess));
    specular = lightSpecular * powerFactor;
}

void main(void)
{
    gl_Position = uPMatrix * uVMatrix * uMMatrix * vec4(aPosition,1);
    vec4 ambient = vec4(0.0,0.0,0.0,0.0),diffuse = vec4(0.0,0.0,0.0,0.0),specular = vec4(0.0,0.0,0.0,0.0);
    //pointLight(aNormal,ambient,diffuse,specular,vec4(0.6,0.6,0.6,1.0),vec4(0.8,0.8,0.8,1.0),vec4(0.9,0.9,0.9,1),50);
    ambient = vec4(0.6,0.6,0.6,1.0);

    vec3 normalTarget = aPosition + aNormal;
    vec4 ttarget = uMMatrix * vec4(normalTarget,1);
    vec4 tpos = uMMatrix * vec4(aPosition,1);
    vec3 newNormal = normalize(ttarget.xyz - tpos.xyz);
    vec3 eye = normalize(uCamera - tpos.xyz);
    vec3 vp = normalize(uLightLocation - tpos.xyz);
    vec3 halfVector = normalize(eye + vp);

    float nDotViewPotision = max(0.0,dot(newNormal,vp));
    diffuse = vec4(0.8,0.8,0.8,1.0) * nDotViewPotision;

    float nDotViewHalfVector = dot(newNormal,halfVector);
    float powerFactor = max(0.0,pow(nDotViewHalfVector,50.0));
    specular =vec4(0.8,0.8,0.8,1.0) * powerFactor;

    vAmbient = ambient;
    vDiffuse = diffuse;
    vSpecular = specular;
    vTextureCood = aTextureCoord;
}
