/**
 * ALICE Bookkeeping
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 0.0.0
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.0.0-beta2.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Run.h
 *
 * Describes an intervention or an event that happened.
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Run_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Run_H_


#include "../ModelBase.h"

#include "RunType.h"
#include <cpprest/details/basic_types.h>
#include "RunQuality.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// Describes an intervention or an event that happened.
/// </summary>
class  Run
    : public ModelBase
{
public:
    Run();
    virtual ~Run();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Run members

    /// <summary>
    /// The unique identifier of this entity.
    /// </summary>
    utility::string_t getActivityId() const;
    bool activityIdIsSet() const;
    void unsetActivityId();

    void setActivityId(const utility::string_t& value);

    /// <summary>
    /// Total data volume read out from the detectors by the O2 system in bytes.
    /// </summary>
    int64_t getBytesReadOut() const;
    bool bytesReadOutIsSet() const;
    void unsetBytesReadOut();

    void setBytesReadOut(int64_t value);

    /// <summary>
    /// Unix timestamp when this entity was created.
    /// </summary>
    int64_t getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetCreatedAt();

    void setCreatedAt(int64_t value);

    /// <summary>
    /// The unique identifier of this entity.
    /// </summary>
    int32_t getId() const;
    bool idIsSet() const;
    void unsetId();

    void setId(int32_t value);

    /// <summary>
    /// The amount of detectors in a single run.
    /// </summary>
    int64_t getNDetectors() const;
    bool nDetectorsIsSet() const;
    void unsetNDetectors();

    void setNDetectors(int64_t value);

    /// <summary>
    /// The amount of Epns nodes in a single run.
    /// </summary>
    int64_t getNEpns() const;
    bool nEpnsIsSet() const;
    void unsetNEpns();

    void setNEpns(int64_t value);

    /// <summary>
    /// The amount of Flps nodes in a single run.
    /// </summary>
    int64_t getNFlps() const;
    bool nFlpsIsSet() const;
    void unsetNFlps();

    void setNFlps(int64_t value);

    /// <summary>
    /// Total number of subtimeframes processed by the O2 system.
    /// </summary>
    int64_t getNSubtimeframes() const;
    bool nSubtimeframesIsSet() const;
    void unsetNSubtimeframes();

    void setNSubtimeframes(int64_t value);

    /// <summary>
    /// The unique identifier of this entity.
    /// </summary>
    int64_t getRunNumber() const;
    bool runNumberIsSet() const;
    void unsetRunNumber();

    void setRunNumber(int64_t value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<RunQuality> getRunQuality() const;
    bool runQualityIsSet() const;
    void unsetRunQuality();

    void setRunQuality(const std::shared_ptr<RunQuality>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<RunType> getRunType() const;
    bool runTypeIsSet() const;
    void unsetRunType();

    void setRunType(const std::shared_ptr<RunType>& value);

    /// <summary>
    /// Unix timestamp when this entity was created.
    /// </summary>
    int64_t getTimeO2End() const;
    bool timeO2EndIsSet() const;
    void unsetTimeO2End();

    void setTimeO2End(int64_t value);

    /// <summary>
    /// Unix timestamp when this entity was created.
    /// </summary>
    int64_t getTimeO2Start() const;
    bool timeO2StartIsSet() const;
    void unsetTimeO2Start();

    void setTimeO2Start(int64_t value);

    /// <summary>
    /// Unix timestamp when this entity was created.
    /// </summary>
    int64_t getTimeTrgEnd() const;
    bool timeTrgEndIsSet() const;
    void unsetTimeTrgEnd();

    void setTimeTrgEnd(int64_t value);

    /// <summary>
    /// Unix timestamp when this entity was created.
    /// </summary>
    int64_t getTimeTrgStart() const;
    bool timeTrgStartIsSet() const;
    void unsetTimeTrgStart();

    void setTimeTrgStart(int64_t value);

    /// <summary>
    /// Unix timestamp when this entity was last updated.
    /// </summary>
    int64_t getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetUpdatedAt();

    void setUpdatedAt(int64_t value);


protected:
    utility::string_t m_ActivityId;
    bool m_ActivityIdIsSet;
    int64_t m_BytesReadOut;
    bool m_BytesReadOutIsSet;
    int64_t m_CreatedAt;
    bool m_CreatedAtIsSet;
    int32_t m_Id;
    bool m_IdIsSet;
    int64_t m_NDetectors;
    bool m_NDetectorsIsSet;
    int64_t m_NEpns;
    bool m_NEpnsIsSet;
    int64_t m_NFlps;
    bool m_NFlpsIsSet;
    int64_t m_NSubtimeframes;
    bool m_NSubtimeframesIsSet;
    int64_t m_RunNumber;
    bool m_RunNumberIsSet;
    std::shared_ptr<RunQuality> m_RunQuality;
    bool m_RunQualityIsSet;
    std::shared_ptr<RunType> m_RunType;
    bool m_RunTypeIsSet;
    int64_t m_TimeO2End;
    bool m_TimeO2EndIsSet;
    int64_t m_TimeO2Start;
    bool m_TimeO2StartIsSet;
    int64_t m_TimeTrgEnd;
    bool m_TimeTrgEndIsSet;
    int64_t m_TimeTrgStart;
    bool m_TimeTrgStartIsSet;
    int64_t m_UpdatedAt;
    bool m_UpdatedAtIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Run_H_ */