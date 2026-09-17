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

// Function: sub_00353090
// Address: 0x353090 - 0x353144
void sub_00353090_0x353090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00353090_0x353090");
#endif

    switch (ctx->pc) {
        case 0x353090u: goto label_353090;
        case 0x353094u: goto label_353094;
        case 0x353098u: goto label_353098;
        case 0x35309cu: goto label_35309c;
        case 0x3530a0u: goto label_3530a0;
        case 0x3530a4u: goto label_3530a4;
        case 0x3530a8u: goto label_3530a8;
        case 0x3530acu: goto label_3530ac;
        case 0x3530b0u: goto label_3530b0;
        case 0x3530b4u: goto label_3530b4;
        case 0x3530b8u: goto label_3530b8;
        case 0x3530bcu: goto label_3530bc;
        case 0x3530c0u: goto label_3530c0;
        case 0x3530c4u: goto label_3530c4;
        case 0x3530c8u: goto label_3530c8;
        case 0x3530ccu: goto label_3530cc;
        case 0x3530d0u: goto label_3530d0;
        case 0x3530d4u: goto label_3530d4;
        case 0x3530d8u: goto label_3530d8;
        case 0x3530dcu: goto label_3530dc;
        case 0x3530e0u: goto label_3530e0;
        case 0x3530e4u: goto label_3530e4;
        case 0x3530e8u: goto label_3530e8;
        case 0x3530ecu: goto label_3530ec;
        case 0x3530f0u: goto label_3530f0;
        case 0x3530f4u: goto label_3530f4;
        case 0x3530f8u: goto label_3530f8;
        case 0x3530fcu: goto label_3530fc;
        case 0x353100u: goto label_353100;
        case 0x353104u: goto label_353104;
        case 0x353108u: goto label_353108;
        case 0x35310cu: goto label_35310c;
        case 0x353110u: goto label_353110;
        case 0x353114u: goto label_353114;
        case 0x353118u: goto label_353118;
        case 0x35311cu: goto label_35311c;
        case 0x353120u: goto label_353120;
        case 0x353124u: goto label_353124;
        case 0x353128u: goto label_353128;
        case 0x35312cu: goto label_35312c;
        case 0x353130u: goto label_353130;
        case 0x353134u: goto label_353134;
        case 0x353138u: goto label_353138;
        case 0x35313cu: goto label_35313c;
        case 0x353140u: goto label_353140;
        default: break;
    }

    ctx->pc = 0x353090u;

label_353090:
    // 0x353090: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x353090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_353094:
    // 0x353094: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x353094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
label_353098:
    // 0x353098: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x353098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_35309c:
    // 0x35309c: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x35309cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3530a0:
    // 0x3530a0: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x3530a0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_3530a4:
    // 0x3530a4: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x3530a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_3530a8:
    // 0x3530a8: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x3530a8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
label_3530ac:
    // 0x3530ac: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x3530acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_3530b0:
    // 0x3530b0: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x3530b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_3530b4:
    // 0x3530b4: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x3530b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_3530b8:
    // 0x3530b8: 0x8c650018  lw          $a1, 0x18($v1)
    ctx->pc = 0x3530b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_3530bc:
    // 0x3530bc: 0xc0d5100  jal         func_354400
label_3530c0:
    if (ctx->pc == 0x3530C0u) {
        ctx->pc = 0x3530C4u;
        goto label_3530c4;
    }
    ctx->pc = 0x3530BCu;
    SET_GPR_U32(ctx, 31, 0x3530C4u);
    ctx->pc = 0x354400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354400u, 0x3530BCu, 0x3530C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3530C4u;
label_3530c4:
    // 0x3530c4: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x3530c4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
label_3530c8:
    // 0x3530c8: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x3530c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_3530cc:
    // 0x3530cc: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x3530ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_3530d0:
    // 0x3530d0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_3530d4:
    if (ctx->pc == 0x3530D4u) {
        ctx->pc = 0x3530D8u;
        goto label_3530d8;
    }
    ctx->pc = 0x3530D0u;
    {
        const bool branch_taken_0x3530d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3530d0) {
            ctx->pc = 0x353128u;
            goto label_353128;
        }
    }
    ctx->pc = 0x3530D8u;
label_3530d8:
    // 0x3530d8: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x3530d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_3530dc:
    // 0x3530dc: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x3530dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_3530e0:
    // 0x3530e0: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x3530e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_3530e4:
    // 0x3530e4: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x3530e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_3530e8:
    // 0x3530e8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3530e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3530ec:
    // 0x3530ec: 0x8fc50004  lw          $a1, 0x4($fp)
    ctx->pc = 0x3530ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_3530f0:
    // 0x3530f0: 0x8cc60020  lw          $a2, 0x20($a2)
    ctx->pc = 0x3530f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
label_3530f4:
    // 0x3530f4: 0x40f809  jalr        $v0
label_3530f8:
    if (ctx->pc == 0x3530F8u) {
        ctx->pc = 0x3530FCu;
        goto label_3530fc;
    }
    ctx->pc = 0x3530F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3530FCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3530F4u, 0x3530FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3530FCu;
label_3530fc:
    // 0x3530fc: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x3530fcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
label_353100:
    // 0x353100: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x353100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_353104:
    // 0x353104: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
label_353108:
    if (ctx->pc == 0x353108u) {
        ctx->pc = 0x35310Cu;
        goto label_35310c;
    }
    ctx->pc = 0x353104u;
    {
        const bool branch_taken_0x353104 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x353104) {
            ctx->pc = 0x353128u;
            goto label_353128;
        }
    }
    ctx->pc = 0x35310Cu;
label_35310c:
    // 0x35310c: 0x8fc3000c  lw          $v1, 0xC($fp)
    ctx->pc = 0x35310cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_353110:
    // 0x353110: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x353110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_353114:
    // 0x353114: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_353118:
    if (ctx->pc == 0x353118u) {
        ctx->pc = 0x35311Cu;
        goto label_35311c;
    }
    ctx->pc = 0x353114u;
    {
        const bool branch_taken_0x353114 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x353114) {
            ctx->pc = 0x353128u;
            goto label_353128;
        }
    }
    ctx->pc = 0x35311Cu;
label_35311c:
    // 0x35311c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x35311cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_353120:
    // 0x353120: 0x10000002  b           . + 4 + (0x2 << 2)
label_353124:
    if (ctx->pc == 0x353124u) {
        ctx->pc = 0x353128u;
        goto label_353128;
    }
    ctx->pc = 0x353120u;
    {
        const bool branch_taken_0x353120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x353120) {
            ctx->pc = 0x35312Cu;
            goto label_35312c;
        }
    }
    ctx->pc = 0x353128u;
label_353128:
    // 0x353128: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x353128u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35312c:
    // 0x35312c: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x35312cu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_353130:
    // 0x353130: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x353130u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_353134:
    // 0x353134: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x353134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_353138:
    // 0x353138: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x353138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_35313c:
    // 0x35313c: 0x3e00008  jr          $ra
label_353140:
    if (ctx->pc == 0x353140u) {
        ctx->pc = 0x353144u;
        goto label_fallthrough_0x35313c;
    }
    ctx->pc = 0x35313Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35313Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x35313c:
    ctx->pc = 0x353144u;
}
