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

// Function: sub_0034C908
// Address: 0x34c908 - 0x34c9f0
void sub_0034C908_0x34c908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034C908_0x34c908");
#endif

    switch (ctx->pc) {
        case 0x34c908u: goto label_34c908;
        case 0x34c90cu: goto label_34c90c;
        case 0x34c910u: goto label_34c910;
        case 0x34c914u: goto label_34c914;
        case 0x34c918u: goto label_34c918;
        case 0x34c91cu: goto label_34c91c;
        case 0x34c920u: goto label_34c920;
        case 0x34c924u: goto label_34c924;
        case 0x34c928u: goto label_34c928;
        case 0x34c92cu: goto label_34c92c;
        case 0x34c930u: goto label_34c930;
        case 0x34c934u: goto label_34c934;
        case 0x34c938u: goto label_34c938;
        case 0x34c93cu: goto label_34c93c;
        case 0x34c940u: goto label_34c940;
        case 0x34c944u: goto label_34c944;
        case 0x34c948u: goto label_34c948;
        case 0x34c94cu: goto label_34c94c;
        case 0x34c950u: goto label_34c950;
        case 0x34c954u: goto label_34c954;
        case 0x34c958u: goto label_34c958;
        case 0x34c95cu: goto label_34c95c;
        case 0x34c960u: goto label_34c960;
        case 0x34c964u: goto label_34c964;
        case 0x34c968u: goto label_34c968;
        case 0x34c96cu: goto label_34c96c;
        case 0x34c970u: goto label_34c970;
        case 0x34c974u: goto label_34c974;
        case 0x34c978u: goto label_34c978;
        case 0x34c97cu: goto label_34c97c;
        case 0x34c980u: goto label_34c980;
        case 0x34c984u: goto label_34c984;
        case 0x34c988u: goto label_34c988;
        case 0x34c98cu: goto label_34c98c;
        case 0x34c990u: goto label_34c990;
        case 0x34c994u: goto label_34c994;
        case 0x34c998u: goto label_34c998;
        case 0x34c99cu: goto label_34c99c;
        case 0x34c9a0u: goto label_34c9a0;
        case 0x34c9a4u: goto label_34c9a4;
        case 0x34c9a8u: goto label_34c9a8;
        case 0x34c9acu: goto label_34c9ac;
        case 0x34c9b0u: goto label_34c9b0;
        case 0x34c9b4u: goto label_34c9b4;
        case 0x34c9b8u: goto label_34c9b8;
        case 0x34c9bcu: goto label_34c9bc;
        case 0x34c9c0u: goto label_34c9c0;
        case 0x34c9c4u: goto label_34c9c4;
        case 0x34c9c8u: goto label_34c9c8;
        case 0x34c9ccu: goto label_34c9cc;
        case 0x34c9d0u: goto label_34c9d0;
        case 0x34c9d4u: goto label_34c9d4;
        case 0x34c9d8u: goto label_34c9d8;
        case 0x34c9dcu: goto label_34c9dc;
        case 0x34c9e0u: goto label_34c9e0;
        case 0x34c9e4u: goto label_34c9e4;
        case 0x34c9e8u: goto label_34c9e8;
        case 0x34c9ecu: goto label_34c9ec;
        default: break;
    }

    ctx->pc = 0x34c908u;

label_34c908:
    // 0x34c908: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x34c908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_34c90c:
    // 0x34c90c: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x34c90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
label_34c910:
    // 0x34c910: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x34c910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_34c914:
    // 0x34c914: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34c914u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_34c918:
    // 0x34c918: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x34c918u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_34c91c:
    // 0x34c91c: 0x27c20010  addiu       $v0, $fp, 0x10
    ctx->pc = 0x34c91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
label_34c920:
    // 0x34c920: 0x27c30008  addiu       $v1, $fp, 0x8
    ctx->pc = 0x34c920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_34c924:
    // 0x34c924: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x34c924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_34c928:
    // 0x34c928: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x34c928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34c92c:
    // 0x34c92c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x34c92cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_34c930:
    // 0x34c930: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x34c930u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_34c934:
    // 0x34c934: 0xc0d3332  jal         func_34CCC8
label_34c938:
    if (ctx->pc == 0x34C938u) {
        ctx->pc = 0x34C93Cu;
        goto label_34c93c;
    }
    ctx->pc = 0x34C934u;
    SET_GPR_U32(ctx, 31, 0x34C93Cu);
    ctx->pc = 0x34CCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34CCC8u, 0x34C934u, 0x34C93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C93Cu;
label_34c93c:
    // 0x34c93c: 0xafc20030  sw          $v0, 0x30($fp)
    ctx->pc = 0x34c93cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 48), GPR_U32(ctx, 2));
label_34c940:
    // 0x34c940: 0x8fc20030  lw          $v0, 0x30($fp)
    ctx->pc = 0x34c940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 48)));
label_34c944:
    // 0x34c944: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_34c948:
    if (ctx->pc == 0x34C948u) {
        ctx->pc = 0x34C94Cu;
        goto label_34c94c;
    }
    ctx->pc = 0x34C944u;
    {
        const bool branch_taken_0x34c944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34c944) {
            ctx->pc = 0x34C95Cu;
            goto label_34c95c;
        }
    }
    ctx->pc = 0x34C94Cu;
label_34c94c:
    // 0x34c94c: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x34c94cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
label_34c950:
    // 0x34c950: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x34c950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
label_34c954:
    // 0x34c954: 0x10000020  b           . + 4 + (0x20 << 2)
label_34c958:
    if (ctx->pc == 0x34C958u) {
        ctx->pc = 0x34C95Cu;
        goto label_34c95c;
    }
    ctx->pc = 0x34C954u;
    {
        const bool branch_taken_0x34c954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c954) {
            ctx->pc = 0x34C9D8u;
            goto label_34c9d8;
        }
    }
    ctx->pc = 0x34C95Cu;
label_34c95c:
    // 0x34c95c: 0x27c20010  addiu       $v0, $fp, 0x10
    ctx->pc = 0x34c95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
label_34c960:
    // 0x34c960: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x34c960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34c964:
    // 0x34c964: 0xc0d407a  jal         func_3501E8
label_34c968:
    if (ctx->pc == 0x34C968u) {
        ctx->pc = 0x34C96Cu;
        goto label_34c96c;
    }
    ctx->pc = 0x34C964u;
    SET_GPR_U32(ctx, 31, 0x34C96Cu);
    ctx->pc = 0x3501E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3501E8u, 0x34C964u, 0x34C96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C96Cu;
label_34c96c:
    // 0x34c96c: 0xafc20034  sw          $v0, 0x34($fp)
    ctx->pc = 0x34c96cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 52), GPR_U32(ctx, 2));
label_34c970:
    // 0x34c970: 0x8fc20034  lw          $v0, 0x34($fp)
    ctx->pc = 0x34c970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 52)));
label_34c974:
    // 0x34c974: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_34c978:
    if (ctx->pc == 0x34C978u) {
        ctx->pc = 0x34C97Cu;
        goto label_34c97c;
    }
    ctx->pc = 0x34C974u;
    {
        const bool branch_taken_0x34c974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34c974) {
            ctx->pc = 0x34C998u;
            goto label_34c998;
        }
    }
    ctx->pc = 0x34C97Cu;
label_34c97c:
    // 0x34c97c: 0xafc0000c  sw          $zero, 0xC($fp)
    ctx->pc = 0x34c97cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 0));
label_34c980:
    // 0x34c980: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x34c980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_34c984:
    // 0x34c984: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x34c984u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
label_34c988:
    // 0x34c988: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x34c988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_34c98c:
    // 0x34c98c: 0xafc20030  sw          $v0, 0x30($fp)
    ctx->pc = 0x34c98cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 48), GPR_U32(ctx, 2));
label_34c990:
    // 0x34c990: 0x10000003  b           . + 4 + (0x3 << 2)
label_34c994:
    if (ctx->pc == 0x34C994u) {
        ctx->pc = 0x34C998u;
        goto label_34c998;
    }
    ctx->pc = 0x34C990u;
    {
        const bool branch_taken_0x34c990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c990) {
            ctx->pc = 0x34C9A0u;
            goto label_34c9a0;
        }
    }
    ctx->pc = 0x34C998u;
label_34c998:
    // 0x34c998: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34c998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34c99c:
    // 0x34c99c: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x34c99cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
label_34c9a0:
    // 0x34c9a0: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x34c9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_34c9a4:
    // 0x34c9a4: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x34c9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_34c9a8:
    // 0x34c9a8: 0x24430020  addiu       $v1, $v0, 0x20
    ctx->pc = 0x34c9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_34c9ac:
    // 0x34c9ac: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x34c9acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_34c9b0:
    // 0x34c9b0: 0x2442ba54  addiu       $v0, $v0, -0x45AC
    ctx->pc = 0x34c9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949460));
label_34c9b4:
    // 0x34c9b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34c9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_34c9b8:
    // 0x34c9b8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x34c9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_34c9bc:
    // 0x34c9bc: 0x8fc40034  lw          $a0, 0x34($fp)
    ctx->pc = 0x34c9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 52)));
label_34c9c0:
    // 0x34c9c0: 0x8fc50008  lw          $a1, 0x8($fp)
    ctx->pc = 0x34c9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_34c9c4:
    // 0x34c9c4: 0x8fc60030  lw          $a2, 0x30($fp)
    ctx->pc = 0x34c9c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 48)));
label_34c9c8:
    // 0x34c9c8: 0x40f809  jalr        $v0
label_34c9cc:
    if (ctx->pc == 0x34C9CCu) {
        ctx->pc = 0x34C9D0u;
        goto label_34c9d0;
    }
    ctx->pc = 0x34C9C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34C9D0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34C9C8u, 0x34C9D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34C9D0u;
label_34c9d0:
    // 0x34c9d0: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x34c9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
label_34c9d4:
    // 0x34c9d4: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x34c9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_34c9d8:
    // 0x34c9d8: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34c9d8u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_34c9dc:
    // 0x34c9dc: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x34c9dcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_34c9e0:
    // 0x34c9e0: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x34c9e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_34c9e4:
    // 0x34c9e4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x34c9e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_34c9e8:
    // 0x34c9e8: 0x3e00008  jr          $ra
label_34c9ec:
    if (ctx->pc == 0x34C9ECu) {
        ctx->pc = 0x34C9F0u;
        goto label_fallthrough_0x34c9e8;
    }
    ctx->pc = 0x34C9E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34C9E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x34c9e8:
    ctx->pc = 0x34C9F0u;
}
