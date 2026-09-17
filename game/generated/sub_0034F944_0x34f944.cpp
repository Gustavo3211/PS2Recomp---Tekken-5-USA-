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

// Function: sub_0034F944
// Address: 0x34f944 - 0x34fa18
void sub_0034F944_0x34f944(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034F944_0x34f944");
#endif

    switch (ctx->pc) {
        case 0x34f944u: goto label_34f944;
        case 0x34f948u: goto label_34f948;
        case 0x34f94cu: goto label_34f94c;
        case 0x34f950u: goto label_34f950;
        case 0x34f954u: goto label_34f954;
        case 0x34f958u: goto label_34f958;
        case 0x34f95cu: goto label_34f95c;
        case 0x34f960u: goto label_34f960;
        case 0x34f964u: goto label_34f964;
        case 0x34f968u: goto label_34f968;
        case 0x34f96cu: goto label_34f96c;
        case 0x34f970u: goto label_34f970;
        case 0x34f974u: goto label_34f974;
        case 0x34f978u: goto label_34f978;
        case 0x34f97cu: goto label_34f97c;
        case 0x34f980u: goto label_34f980;
        case 0x34f984u: goto label_34f984;
        case 0x34f988u: goto label_34f988;
        case 0x34f98cu: goto label_34f98c;
        case 0x34f990u: goto label_34f990;
        case 0x34f994u: goto label_34f994;
        case 0x34f998u: goto label_34f998;
        case 0x34f99cu: goto label_34f99c;
        case 0x34f9a0u: goto label_34f9a0;
        case 0x34f9a4u: goto label_34f9a4;
        case 0x34f9a8u: goto label_34f9a8;
        case 0x34f9acu: goto label_34f9ac;
        case 0x34f9b0u: goto label_34f9b0;
        case 0x34f9b4u: goto label_34f9b4;
        case 0x34f9b8u: goto label_34f9b8;
        case 0x34f9bcu: goto label_34f9bc;
        case 0x34f9c0u: goto label_34f9c0;
        case 0x34f9c4u: goto label_34f9c4;
        case 0x34f9c8u: goto label_34f9c8;
        case 0x34f9ccu: goto label_34f9cc;
        case 0x34f9d0u: goto label_34f9d0;
        case 0x34f9d4u: goto label_34f9d4;
        case 0x34f9d8u: goto label_34f9d8;
        case 0x34f9dcu: goto label_34f9dc;
        case 0x34f9e0u: goto label_34f9e0;
        case 0x34f9e4u: goto label_34f9e4;
        case 0x34f9e8u: goto label_34f9e8;
        case 0x34f9ecu: goto label_34f9ec;
        case 0x34f9f0u: goto label_34f9f0;
        case 0x34f9f4u: goto label_34f9f4;
        case 0x34f9f8u: goto label_34f9f8;
        case 0x34f9fcu: goto label_34f9fc;
        case 0x34fa00u: goto label_34fa00;
        case 0x34fa04u: goto label_34fa04;
        case 0x34fa08u: goto label_34fa08;
        case 0x34fa0cu: goto label_34fa0c;
        case 0x34fa10u: goto label_34fa10;
        case 0x34fa14u: goto label_34fa14;
        default: break;
    }

    ctx->pc = 0x34f944u;

label_34f944:
    // 0x34f944: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34f944u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_34f948:
    // 0x34f948: 0xffbe0020  sd          $fp, 0x20($sp)
    ctx->pc = 0x34f948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
label_34f94c:
    // 0x34f94c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x34f94cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_34f950:
    // 0x34f950: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34f950u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_34f954:
    // 0x34f954: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x34f954u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_34f958:
    // 0x34f958: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x34f958u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
label_34f95c:
    // 0x34f95c: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x34f95cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
label_34f960:
    // 0x34f960: 0xc0d3f53  jal         func_34FD4C
label_34f964:
    if (ctx->pc == 0x34F964u) {
        ctx->pc = 0x34F968u;
        goto label_34f968;
    }
    ctx->pc = 0x34F960u;
    SET_GPR_U32(ctx, 31, 0x34F968u);
    ctx->pc = 0x34FD4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34FD4Cu, 0x34F960u, 0x34F968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F968u;
label_34f968:
    // 0x34f968: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x34f968u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
label_34f96c:
    // 0x34f96c: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x34f96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_34f970:
    // 0x34f970: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_34f974:
    if (ctx->pc == 0x34F974u) {
        ctx->pc = 0x34F978u;
        goto label_34f978;
    }
    ctx->pc = 0x34F970u;
    {
        const bool branch_taken_0x34f970 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x34f970) {
            ctx->pc = 0x34F984u;
            goto label_34f984;
        }
    }
    ctx->pc = 0x34F978u;
label_34f978:
    // 0x34f978: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x34f978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_34f97c:
    // 0x34f97c: 0x10000020  b           . + 4 + (0x20 << 2)
label_34f980:
    if (ctx->pc == 0x34F980u) {
        ctx->pc = 0x34F984u;
        goto label_34f984;
    }
    ctx->pc = 0x34F97Cu;
    {
        const bool branch_taken_0x34f97c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f97c) {
            ctx->pc = 0x34FA00u;
            goto label_34fa00;
        }
    }
    ctx->pc = 0x34F984u;
label_34f984:
    // 0x34f984: 0x8fc40010  lw          $a0, 0x10($fp)
    ctx->pc = 0x34f984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_34f988:
    // 0x34f988: 0xc0d3fc6  jal         func_34FF18
label_34f98c:
    if (ctx->pc == 0x34F98Cu) {
        ctx->pc = 0x34F990u;
        goto label_34f990;
    }
    ctx->pc = 0x34F988u;
    SET_GPR_U32(ctx, 31, 0x34F990u);
    ctx->pc = 0x34FF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34FF18u, 0x34F988u, 0x34F990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F990u;
label_34f990:
    // 0x34f990: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x34f990u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
label_34f994:
    // 0x34f994: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x34f994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
label_34f998:
    // 0x34f998: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_34f99c:
    if (ctx->pc == 0x34F99Cu) {
        ctx->pc = 0x34F9A0u;
        goto label_34f9a0;
    }
    ctx->pc = 0x34F998u;
    {
        const bool branch_taken_0x34f998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34f998) {
            ctx->pc = 0x34F9B0u;
            goto label_34f9b0;
        }
    }
    ctx->pc = 0x34F9A0u;
label_34f9a0:
    // 0x34f9a0: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x34f9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
label_34f9a4:
    // 0x34f9a4: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x34f9a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
label_34f9a8:
    // 0x34f9a8: 0x10000015  b           . + 4 + (0x15 << 2)
label_34f9ac:
    if (ctx->pc == 0x34F9ACu) {
        ctx->pc = 0x34F9B0u;
        goto label_34f9b0;
    }
    ctx->pc = 0x34F9A8u;
    {
        const bool branch_taken_0x34f9a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f9a8) {
            ctx->pc = 0x34FA00u;
            goto label_34fa00;
        }
    }
    ctx->pc = 0x34F9B0u;
label_34f9b0:
    // 0x34f9b0: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x34f9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
label_34f9b4:
    // 0x34f9b4: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x34f9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_34f9b8:
    // 0x34f9b8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x34f9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_34f9bc:
    // 0x34f9bc: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x34f9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
label_34f9c0:
    // 0x34f9c0: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x34f9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_34f9c4:
    // 0x34f9c4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x34f9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_34f9c8:
    // 0x34f9c8: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x34f9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
label_34f9cc:
    // 0x34f9cc: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x34f9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_34f9d0:
    // 0x34f9d0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x34f9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_34f9d4:
    // 0x34f9d4: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x34f9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_34f9d8:
    // 0x34f9d8: 0x8fc40014  lw          $a0, 0x14($fp)
    ctx->pc = 0x34f9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
label_34f9dc:
    // 0x34f9dc: 0x8fc50008  lw          $a1, 0x8($fp)
    ctx->pc = 0x34f9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_34f9e0:
    // 0x34f9e0: 0x40f809  jalr        $v0
label_34f9e4:
    if (ctx->pc == 0x34F9E4u) {
        ctx->pc = 0x34F9E8u;
        goto label_34f9e8;
    }
    ctx->pc = 0x34F9E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34F9E8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34F9E0u, 0x34F9E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34F9E8u;
label_34f9e8:
    // 0x34f9e8: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x34f9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
label_34f9ec:
    // 0x34f9ec: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x34f9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
label_34f9f0:
    // 0x34f9f0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x34f9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_34f9f4:
    // 0x34f9f4: 0xc0d3f96  jal         func_34FE58
label_34f9f8:
    if (ctx->pc == 0x34F9F8u) {
        ctx->pc = 0x34F9FCu;
        goto label_34f9fc;
    }
    ctx->pc = 0x34F9F4u;
    SET_GPR_U32(ctx, 31, 0x34F9FCu);
    ctx->pc = 0x34FE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34FE58u, 0x34F9F4u, 0x34F9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F9FCu;
label_34f9fc:
    // 0x34f9fc: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x34f9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_34fa00:
    // 0x34fa00: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34fa00u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_34fa04:
    // 0x34fa04: 0xdfbe0020  ld          $fp, 0x20($sp)
    ctx->pc = 0x34fa04u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_34fa08:
    // 0x34fa08: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x34fa08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_34fa0c:
    // 0x34fa0c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x34fa0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_34fa10:
    // 0x34fa10: 0x3e00008  jr          $ra
label_34fa14:
    if (ctx->pc == 0x34FA14u) {
        ctx->pc = 0x34FA18u;
        goto label_fallthrough_0x34fa10;
    }
    ctx->pc = 0x34FA10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34FA10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x34fa10:
    ctx->pc = 0x34FA18u;
}
