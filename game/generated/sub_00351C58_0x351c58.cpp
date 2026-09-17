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

// Function: sub_00351C58
// Address: 0x351c58 - 0x3520e0
void sub_00351C58_0x351c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00351C58_0x351c58");
#endif

    switch (ctx->pc) {
        case 0x351c80u: goto label_351c80;
        case 0x351cf8u: goto label_351cf8;
        case 0x351d38u: goto label_351d38;
        case 0x351db0u: goto label_351db0;
        case 0x351df0u: goto label_351df0;
        case 0x351e68u: goto label_351e68;
        case 0x351ec4u: goto label_351ec4;
        case 0x351f3cu: goto label_351f3c;
        case 0x351f94u: goto label_351f94;
        case 0x352000u: goto label_352000;
        case 0x352044u: goto label_352044;
        case 0x3520c8u: goto label_3520c8;
        default: break;
    }

    ctx->pc = 0x351c58u;

    // 0x351c58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x351c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x351c5c: 0xffbe0020  sd          $fp, 0x20($sp)
    ctx->pc = 0x351c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
    // 0x351c60: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x351c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x351c64: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x351c64u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351c68: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x351c68u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x351c6c: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x351c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x351c70: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x351c70u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x351c74: 0xafc7000c  sw          $a3, 0xC($fp)
    ctx->pc = 0x351c74u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 7));
    // 0x351c78: 0xc0d41ac  jal         func_3506B0
    ctx->pc = 0x351C78u;
    SET_GPR_U32(ctx, 31, 0x351C80u);
    ctx->pc = 0x3506B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3506B0u, 0x351C78u, 0x351C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351C80u;
label_351c80:
    // 0x351c80: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x351c80u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x351c84: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x351c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x351c88: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x351c88u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x351c8c: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x351c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x351c90: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x351C90u;
    {
        const bool branch_taken_0x351c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x351c90) {
            ctx->pc = 0x351CA8u;
            goto label_351ca8;
        }
    }
    ctx->pc = 0x351C98u;
    // 0x351c98: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x351c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x351c9c: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x351c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x351ca0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x351CA0u;
    {
        const bool branch_taken_0x351ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x351ca0) {
            ctx->pc = 0x351CF8u;
            goto label_351cf8;
        }
    }
    ctx->pc = 0x351CA8u;
label_351ca8:
    // 0x351ca8: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x351ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x351cac: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x351cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x351cb0: 0x24422fdc  addiu       $v0, $v0, 0x2FDC
    ctx->pc = 0x351cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12252));
    // 0x351cb4: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x351cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x351cb8: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x351cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x351cbc: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x351cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x351cc0: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x351cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x351cc4: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x351cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x351cc8: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x351cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x351ccc: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x351cccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x351cd0: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x351cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x351cd4: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x351cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x351cd8: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x351cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x351cdc: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x351cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x351ce0: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x351ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x351ce4: 0xac620020  sw          $v0, 0x20($v1)
    ctx->pc = 0x351ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
    // 0x351ce8: 0x8fc40010  lw          $a0, 0x10($fp)
    ctx->pc = 0x351ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x351cec: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x351cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x351cf0: 0xc0d41d8  jal         func_350760
    ctx->pc = 0x351CF0u;
    SET_GPR_U32(ctx, 31, 0x351CF8u);
    ctx->pc = 0x350760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350760u, 0x351CF0u, 0x351CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351CF8u;
label_351cf8:
    // 0x351cf8: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x351cf8u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351cfc: 0xdfbe0020  ld          $fp, 0x20($sp)
    ctx->pc = 0x351cfcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x351d00: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x351d00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x351d04: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x351d04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x351d08: 0x3e00008  jr          $ra
    ctx->pc = 0x351D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351D08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x351D10u;
    // 0x351d10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x351d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x351d14: 0xffbe0020  sd          $fp, 0x20($sp)
    ctx->pc = 0x351d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
    // 0x351d18: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x351d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x351d1c: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x351d1cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351d20: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x351d20u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x351d24: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x351d24u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x351d28: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x351d28u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x351d2c: 0xafc7000c  sw          $a3, 0xC($fp)
    ctx->pc = 0x351d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 7));
    // 0x351d30: 0xc0d41ac  jal         func_3506B0
    ctx->pc = 0x351D30u;
    SET_GPR_U32(ctx, 31, 0x351D38u);
    ctx->pc = 0x3506B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3506B0u, 0x351D30u, 0x351D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351D38u;
label_351d38:
    // 0x351d38: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x351d38u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x351d3c: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x351d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x351d40: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x351d40u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x351d44: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x351d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x351d48: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x351D48u;
    {
        const bool branch_taken_0x351d48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x351d48) {
            ctx->pc = 0x351D60u;
            goto label_351d60;
        }
    }
    ctx->pc = 0x351D50u;
    // 0x351d50: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x351d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x351d54: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x351d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x351d58: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x351D58u;
    {
        const bool branch_taken_0x351d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x351d58) {
            ctx->pc = 0x351DB0u;
            goto label_351db0;
        }
    }
    ctx->pc = 0x351D60u;
label_351d60:
    // 0x351d60: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x351d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x351d64: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x351d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x351d68: 0x24423090  addiu       $v0, $v0, 0x3090
    ctx->pc = 0x351d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12432));
    // 0x351d6c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x351d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x351d70: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x351d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x351d74: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x351d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x351d78: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x351d78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x351d7c: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x351d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x351d80: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x351d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x351d84: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x351d84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x351d88: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x351d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x351d8c: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x351d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x351d90: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x351d90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x351d94: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x351d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x351d98: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x351d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x351d9c: 0xac620020  sw          $v0, 0x20($v1)
    ctx->pc = 0x351d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
    // 0x351da0: 0x8fc40010  lw          $a0, 0x10($fp)
    ctx->pc = 0x351da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x351da4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x351da4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x351da8: 0xc0d41d8  jal         func_350760
    ctx->pc = 0x351DA8u;
    SET_GPR_U32(ctx, 31, 0x351DB0u);
    ctx->pc = 0x350760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350760u, 0x351DA8u, 0x351DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351DB0u;
label_351db0:
    // 0x351db0: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x351db0u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351db4: 0xdfbe0020  ld          $fp, 0x20($sp)
    ctx->pc = 0x351db4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x351db8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x351db8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x351dbc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x351dbcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x351dc0: 0x3e00008  jr          $ra
    ctx->pc = 0x351DC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351DC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x351DC8u;
    // 0x351dc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x351dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x351dcc: 0xffbe0020  sd          $fp, 0x20($sp)
    ctx->pc = 0x351dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
    // 0x351dd0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x351dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x351dd4: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x351dd4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351dd8: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x351dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x351ddc: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x351ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x351de0: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x351de0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x351de4: 0xafc7000c  sw          $a3, 0xC($fp)
    ctx->pc = 0x351de4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 7));
    // 0x351de8: 0xc0d41ac  jal         func_3506B0
    ctx->pc = 0x351DE8u;
    SET_GPR_U32(ctx, 31, 0x351DF0u);
    ctx->pc = 0x3506B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3506B0u, 0x351DE8u, 0x351DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351DF0u;
label_351df0:
    // 0x351df0: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x351df0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x351df4: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x351df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x351df8: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x351df8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x351dfc: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x351dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x351e00: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x351E00u;
    {
        const bool branch_taken_0x351e00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x351e00) {
            ctx->pc = 0x351E18u;
            goto label_351e18;
        }
    }
    ctx->pc = 0x351E08u;
    // 0x351e08: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x351e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x351e0c: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x351e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x351e10: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x351E10u;
    {
        const bool branch_taken_0x351e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x351e10) {
            ctx->pc = 0x351E68u;
            goto label_351e68;
        }
    }
    ctx->pc = 0x351E18u;
label_351e18:
    // 0x351e18: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x351e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x351e1c: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x351e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x351e20: 0x24423144  addiu       $v0, $v0, 0x3144
    ctx->pc = 0x351e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12612));
    // 0x351e24: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x351e24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x351e28: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x351e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x351e2c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x351e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x351e30: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x351e30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x351e34: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x351e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x351e38: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x351e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x351e3c: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x351e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x351e40: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x351e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x351e44: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x351e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x351e48: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x351e48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x351e4c: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x351e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x351e50: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x351e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x351e54: 0xac620020  sw          $v0, 0x20($v1)
    ctx->pc = 0x351e54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
    // 0x351e58: 0x8fc40010  lw          $a0, 0x10($fp)
    ctx->pc = 0x351e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x351e5c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x351e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x351e60: 0xc0d41d8  jal         func_350760
    ctx->pc = 0x351E60u;
    SET_GPR_U32(ctx, 31, 0x351E68u);
    ctx->pc = 0x350760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350760u, 0x351E60u, 0x351E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351E68u;
label_351e68:
    // 0x351e68: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x351e68u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351e6c: 0xdfbe0020  ld          $fp, 0x20($sp)
    ctx->pc = 0x351e6cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x351e70: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x351e70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x351e74: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x351e74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x351e78: 0x3e00008  jr          $ra
    ctx->pc = 0x351E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351E78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x351E80u;
    // 0x351e80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x351e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x351e84: 0xffbe0020  sd          $fp, 0x20($sp)
    ctx->pc = 0x351e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
    // 0x351e88: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x351e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x351e8c: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x351e8cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351e90: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x351e90u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x351e94: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x351e94u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x351e98: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x351e98u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x351e9c: 0xafc7000c  sw          $a3, 0xC($fp)
    ctx->pc = 0x351e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 7));
    // 0x351ea0: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x351ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x351ea4: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x351EA4u;
    {
        const bool branch_taken_0x351ea4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x351ea4) {
            ctx->pc = 0x351EBCu;
            goto label_351ebc;
        }
    }
    ctx->pc = 0x351EACu;
    // 0x351eac: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x351eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x351eb0: 0x3442fff7  ori         $v0, $v0, 0xFFF7
    ctx->pc = 0x351eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65527);
    // 0x351eb4: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x351EB4u;
    {
        const bool branch_taken_0x351eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x351eb4) {
            ctx->pc = 0x351F3Cu;
            goto label_351f3c;
        }
    }
    ctx->pc = 0x351EBCu;
label_351ebc:
    // 0x351ebc: 0xc0d41ac  jal         func_3506B0
    ctx->pc = 0x351EBCu;
    SET_GPR_U32(ctx, 31, 0x351EC4u);
    ctx->pc = 0x3506B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3506B0u, 0x351EBCu, 0x351EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351EC4u;
label_351ec4:
    // 0x351ec4: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x351ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x351ec8: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x351ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x351ecc: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x351eccu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x351ed0: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x351ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x351ed4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x351ED4u;
    {
        const bool branch_taken_0x351ed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x351ed4) {
            ctx->pc = 0x351EECu;
            goto label_351eec;
        }
    }
    ctx->pc = 0x351EDCu;
    // 0x351edc: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x351edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x351ee0: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x351ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x351ee4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x351EE4u;
    {
        const bool branch_taken_0x351ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x351ee4) {
            ctx->pc = 0x351F3Cu;
            goto label_351f3c;
        }
    }
    ctx->pc = 0x351EECu;
label_351eec:
    // 0x351eec: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x351eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x351ef0: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x351ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x351ef4: 0x244231f8  addiu       $v0, $v0, 0x31F8
    ctx->pc = 0x351ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12792));
    // 0x351ef8: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x351ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x351efc: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x351efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x351f00: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x351f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x351f04: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x351f04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x351f08: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x351f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x351f0c: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x351f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x351f10: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x351f10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x351f14: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x351f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x351f18: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x351f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x351f1c: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x351f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x351f20: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x351f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x351f24: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x351f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x351f28: 0xac620020  sw          $v0, 0x20($v1)
    ctx->pc = 0x351f28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
    // 0x351f2c: 0x8fc40010  lw          $a0, 0x10($fp)
    ctx->pc = 0x351f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x351f30: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x351f30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x351f34: 0xc0d41d8  jal         func_350760
    ctx->pc = 0x351F34u;
    SET_GPR_U32(ctx, 31, 0x351F3Cu);
    ctx->pc = 0x350760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350760u, 0x351F34u, 0x351F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351F3Cu;
label_351f3c:
    // 0x351f3c: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x351f3cu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351f40: 0xdfbe0020  ld          $fp, 0x20($sp)
    ctx->pc = 0x351f40u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x351f44: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x351f44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x351f48: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x351f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x351f4c: 0x3e00008  jr          $ra
    ctx->pc = 0x351F4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351F4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x351F54u;
    // 0x351f54: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x351f54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x351f58: 0xffbe0020  sd          $fp, 0x20($sp)
    ctx->pc = 0x351f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
    // 0x351f5c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x351f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x351f60: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x351f60u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351f64: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x351f64u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x351f68: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x351f68u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x351f6c: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x351f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x351f70: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x351f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x351f74: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x351F74u;
    {
        const bool branch_taken_0x351f74 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x351f74) {
            ctx->pc = 0x351F8Cu;
            goto label_351f8c;
        }
    }
    ctx->pc = 0x351F7Cu;
    // 0x351f7c: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x351f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x351f80: 0x3442fff7  ori         $v0, $v0, 0xFFF7
    ctx->pc = 0x351f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65527);
    // 0x351f84: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x351F84u;
    {
        const bool branch_taken_0x351f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x351f84) {
            ctx->pc = 0x352000u;
            goto label_352000;
        }
    }
    ctx->pc = 0x351F8Cu;
label_351f8c:
    // 0x351f8c: 0xc0d41ac  jal         func_3506B0
    ctx->pc = 0x351F8Cu;
    SET_GPR_U32(ctx, 31, 0x351F94u);
    ctx->pc = 0x3506B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3506B0u, 0x351F8Cu, 0x351F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351F94u;
label_351f94:
    // 0x351f94: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x351f94u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x351f98: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x351f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x351f9c: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x351f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x351fa0: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x351fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x351fa4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x351FA4u;
    {
        const bool branch_taken_0x351fa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x351fa4) {
            ctx->pc = 0x351FBCu;
            goto label_351fbc;
        }
    }
    ctx->pc = 0x351FACu;
    // 0x351fac: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x351facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x351fb0: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x351fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x351fb4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x351FB4u;
    {
        const bool branch_taken_0x351fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x351fb4) {
            ctx->pc = 0x352000u;
            goto label_352000;
        }
    }
    ctx->pc = 0x351FBCu;
label_351fbc:
    // 0x351fbc: 0x8fc30010  lw          $v1, 0x10($fp)
    ctx->pc = 0x351fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x351fc0: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x351fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x351fc4: 0x244232ac  addiu       $v0, $v0, 0x32AC
    ctx->pc = 0x351fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12972));
    // 0x351fc8: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x351fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x351fcc: 0x8fc30010  lw          $v1, 0x10($fp)
    ctx->pc = 0x351fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x351fd0: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x351fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x351fd4: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x351fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x351fd8: 0x8fc30010  lw          $v1, 0x10($fp)
    ctx->pc = 0x351fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x351fdc: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x351fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x351fe0: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x351fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x351fe4: 0x8fc30010  lw          $v1, 0x10($fp)
    ctx->pc = 0x351fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x351fe8: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x351fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x351fec: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x351fecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x351ff0: 0x8fc4000c  lw          $a0, 0xC($fp)
    ctx->pc = 0x351ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x351ff4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x351ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x351ff8: 0xc0d41d8  jal         func_350760
    ctx->pc = 0x351FF8u;
    SET_GPR_U32(ctx, 31, 0x352000u);
    ctx->pc = 0x350760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350760u, 0x351FF8u, 0x352000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352000u;
label_352000:
    // 0x352000: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x352000u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352004: 0xdfbe0020  ld          $fp, 0x20($sp)
    ctx->pc = 0x352004u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x352008: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x352008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35200c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x35200cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x352010: 0x3e00008  jr          $ra
    ctx->pc = 0x352010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x352010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x352018u;
    // 0x352018: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x352018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35201c: 0xffbe0020  sd          $fp, 0x20($sp)
    ctx->pc = 0x35201cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
    // 0x352020: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x352020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x352024: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x352024u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352028: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x352028u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x35202c: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x35202cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x352030: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x352030u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x352034: 0xafc7000c  sw          $a3, 0xC($fp)
    ctx->pc = 0x352034u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 7));
    // 0x352038: 0xafc80010  sw          $t0, 0x10($fp)
    ctx->pc = 0x352038u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 8));
    // 0x35203c: 0xc0d41ac  jal         func_3506B0
    ctx->pc = 0x35203Cu;
    SET_GPR_U32(ctx, 31, 0x352044u);
    ctx->pc = 0x3506B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3506B0u, 0x35203Cu, 0x352044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352044u;
label_352044:
    // 0x352044: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x352044u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x352048: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x352048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x35204c: 0xafc20018  sw          $v0, 0x18($fp)
    ctx->pc = 0x35204cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
    // 0x352050: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x352050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x352054: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x352054u;
    {
        const bool branch_taken_0x352054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x352054) {
            ctx->pc = 0x35206Cu;
            goto label_35206c;
        }
    }
    ctx->pc = 0x35205Cu;
    // 0x35205c: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x35205cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x352060: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x352060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x352064: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x352064u;
    {
        const bool branch_taken_0x352064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x352064) {
            ctx->pc = 0x3520C8u;
            goto label_3520c8;
        }
    }
    ctx->pc = 0x35206Cu;
label_35206c:
    // 0x35206c: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x35206cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x352070: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x352070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x352074: 0x24423358  addiu       $v0, $v0, 0x3358
    ctx->pc = 0x352074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13144));
    // 0x352078: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x352078u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x35207c: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x35207cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x352080: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x352080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x352084: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x352084u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x352088: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x352088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x35208c: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x35208cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x352090: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x352090u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x352094: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x352094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x352098: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x352098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x35209c: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x35209cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x3520a0: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x3520a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x3520a4: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x3520a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x3520a8: 0xac620020  sw          $v0, 0x20($v1)
    ctx->pc = 0x3520a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
    // 0x3520ac: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x3520acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x3520b0: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x3520b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x3520b4: 0xac620024  sw          $v0, 0x24($v1)
    ctx->pc = 0x3520b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
    // 0x3520b8: 0x8fc40014  lw          $a0, 0x14($fp)
    ctx->pc = 0x3520b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x3520bc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3520bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3520c0: 0xc0d41d8  jal         func_350760
    ctx->pc = 0x3520C0u;
    SET_GPR_U32(ctx, 31, 0x3520C8u);
    ctx->pc = 0x350760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350760u, 0x3520C0u, 0x3520C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3520C8u;
label_3520c8:
    // 0x3520c8: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x3520c8u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3520cc: 0xdfbe0020  ld          $fp, 0x20($sp)
    ctx->pc = 0x3520ccu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3520d0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x3520d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3520d4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x3520d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3520d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3520D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3520D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3520E0u;
}
