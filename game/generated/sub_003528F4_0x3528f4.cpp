#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003528F4
// Address: 0x3528f4 - 0x3529a8
void sub_003528F4_0x3528f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003528F4_0x3528f4");
#endif

    switch (ctx->pc) {
        case 0x3528f4u: goto label_3528f4;
        case 0x3528f8u: goto label_3528f8;
        case 0x3528fcu: goto label_3528fc;
        case 0x352900u: goto label_352900;
        case 0x352904u: goto label_352904;
        case 0x352908u: goto label_352908;
        case 0x35290cu: goto label_35290c;
        case 0x352910u: goto label_352910;
        case 0x352914u: goto label_352914;
        case 0x352918u: goto label_352918;
        case 0x35291cu: goto label_35291c;
        case 0x352920u: goto label_352920;
        case 0x352924u: goto label_352924;
        case 0x352928u: goto label_352928;
        case 0x35292cu: goto label_35292c;
        case 0x352930u: goto label_352930;
        case 0x352934u: goto label_352934;
        case 0x352938u: goto label_352938;
        case 0x35293cu: goto label_35293c;
        case 0x352940u: goto label_352940;
        case 0x352944u: goto label_352944;
        case 0x352948u: goto label_352948;
        case 0x35294cu: goto label_35294c;
        case 0x352950u: goto label_352950;
        case 0x352954u: goto label_352954;
        case 0x352958u: goto label_352958;
        case 0x35295cu: goto label_35295c;
        case 0x352960u: goto label_352960;
        case 0x352964u: goto label_352964;
        case 0x352968u: goto label_352968;
        case 0x35296cu: goto label_35296c;
        case 0x352970u: goto label_352970;
        case 0x352974u: goto label_352974;
        case 0x352978u: goto label_352978;
        case 0x35297cu: goto label_35297c;
        case 0x352980u: goto label_352980;
        case 0x352984u: goto label_352984;
        case 0x352988u: goto label_352988;
        case 0x35298cu: goto label_35298c;
        case 0x352990u: goto label_352990;
        case 0x352994u: goto label_352994;
        case 0x352998u: goto label_352998;
        case 0x35299cu: goto label_35299c;
        case 0x3529a0u: goto label_3529a0;
        case 0x3529a4u: goto label_3529a4;
        default: break;
    }

    ctx->pc = 0x3528f4u;

label_3528f4:
    // 0x3528f4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3528f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3528f8:
    // 0x3528f8: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x3528f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
label_3528fc:
    // 0x3528fc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3528fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_352900:
    // 0x352900: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x352900u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_352904:
    // 0x352904: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x352904u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_352908:
    // 0x352908: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x352908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_35290c:
    // 0x35290c: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x35290cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
label_352910:
    // 0x352910: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x352910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352914:
    // 0x352914: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x352914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352918:
    // 0x352918: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x352918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_35291c:
    // 0x35291c: 0x8c650018  lw          $a1, 0x18($v1)
    ctx->pc = 0x35291cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_352920:
    // 0x352920: 0xc0d31cc  jal         func_34C730
label_352924:
    if (ctx->pc == 0x352924u) {
        ctx->pc = 0x352928u;
        goto label_352928;
    }
    ctx->pc = 0x352920u;
    SET_GPR_U32(ctx, 31, 0x352928u);
    ctx->pc = 0x34C730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34C730u, 0x352920u, 0x352928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352928u;
label_352928:
    // 0x352928: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x352928u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
label_35292c:
    // 0x35292c: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x35292cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352930:
    // 0x352930: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x352930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_352934:
    // 0x352934: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_352938:
    if (ctx->pc == 0x352938u) {
        ctx->pc = 0x35293Cu;
        goto label_35293c;
    }
    ctx->pc = 0x352934u;
    {
        const bool branch_taken_0x352934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x352934) {
            ctx->pc = 0x35298Cu;
            goto label_35298c;
        }
    }
    ctx->pc = 0x35293Cu;
label_35293c:
    // 0x35293c: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x35293cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352940:
    // 0x352940: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x352940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352944:
    // 0x352944: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x352944u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352948:
    // 0x352948: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x352948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_35294c:
    // 0x35294c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x35294cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_352950:
    // 0x352950: 0x8fc50004  lw          $a1, 0x4($fp)
    ctx->pc = 0x352950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_352954:
    // 0x352954: 0x8cc60020  lw          $a2, 0x20($a2)
    ctx->pc = 0x352954u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
label_352958:
    // 0x352958: 0x40f809  jalr        $v0
label_35295c:
    if (ctx->pc == 0x35295Cu) {
        ctx->pc = 0x352960u;
        goto label_352960;
    }
    ctx->pc = 0x352958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x352960u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x352958u, 0x352960u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x352960u;
label_352960:
    // 0x352960: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x352960u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
label_352964:
    // 0x352964: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x352964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_352968:
    // 0x352968: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
label_35296c:
    if (ctx->pc == 0x35296Cu) {
        ctx->pc = 0x352970u;
        goto label_352970;
    }
    ctx->pc = 0x352968u;
    {
        const bool branch_taken_0x352968 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x352968) {
            ctx->pc = 0x35298Cu;
            goto label_35298c;
        }
    }
    ctx->pc = 0x352970u;
label_352970:
    // 0x352970: 0x8fc3000c  lw          $v1, 0xC($fp)
    ctx->pc = 0x352970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_352974:
    // 0x352974: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x352974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_352978:
    // 0x352978: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_35297c:
    if (ctx->pc == 0x35297Cu) {
        ctx->pc = 0x352980u;
        goto label_352980;
    }
    ctx->pc = 0x352978u;
    {
        const bool branch_taken_0x352978 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x352978) {
            ctx->pc = 0x35298Cu;
            goto label_35298c;
        }
    }
    ctx->pc = 0x352980u;
label_352980:
    // 0x352980: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x352980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_352984:
    // 0x352984: 0x10000002  b           . + 4 + (0x2 << 2)
label_352988:
    if (ctx->pc == 0x352988u) {
        ctx->pc = 0x35298Cu;
        goto label_35298c;
    }
    ctx->pc = 0x352984u;
    {
        const bool branch_taken_0x352984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x352984) {
            ctx->pc = 0x352990u;
            goto label_352990;
        }
    }
    ctx->pc = 0x35298Cu;
label_35298c:
    // 0x35298c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35298cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_352990:
    // 0x352990: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x352990u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_352994:
    // 0x352994: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x352994u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_352998:
    // 0x352998: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x352998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_35299c:
    // 0x35299c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x35299cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3529a0:
    // 0x3529a0: 0x3e00008  jr          $ra
label_3529a4:
    if (ctx->pc == 0x3529A4u) {
        ctx->pc = 0x3529A8u;
        goto label_fallthrough_0x3529a0;
    }
    ctx->pc = 0x3529A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3529A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3529a0:
    ctx->pc = 0x3529A8u;
}
