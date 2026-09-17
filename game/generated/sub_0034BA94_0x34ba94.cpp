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

// Function: sub_0034BA94
// Address: 0x34ba94 - 0x34bb94
void sub_0034BA94_0x34ba94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034BA94_0x34ba94");
#endif

    switch (ctx->pc) {
        case 0x34bb28u: goto label_34bb28;
        case 0x34bb40u: goto label_34bb40;
        case 0x34bb58u: goto label_34bb58;
        case 0x34bb70u: goto label_34bb70;
        default: break;
    }

    ctx->pc = 0x34ba94u;

    // 0x34ba94: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34ba94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34ba98: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x34ba98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x34ba9c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x34ba9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x34baa0: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34baa0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34baa4: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x34baa4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x34baa8: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x34baa8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x34baac: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x34baacu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x34bab0: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x34bab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x34bab4: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x34bab4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x34bab8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x34bab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34babc: 0x8fc3000c  lw          $v1, 0xC($fp)
    ctx->pc = 0x34babcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34bac0: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x34BAC0u;
    {
        const bool branch_taken_0x34bac0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x34bac0) {
            ctx->pc = 0x34BB30u;
            goto label_34bb30;
        }
    }
    ctx->pc = 0x34BAC8u;
    // 0x34bac8: 0x8fc3000c  lw          $v1, 0xC($fp)
    ctx->pc = 0x34bac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34bacc: 0x2c620003  sltiu       $v0, $v1, 0x3
    ctx->pc = 0x34baccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x34bad0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x34BAD0u;
    {
        const bool branch_taken_0x34bad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34bad0) {
            ctx->pc = 0x34BAF0u;
            goto label_34baf0;
        }
    }
    ctx->pc = 0x34BAD8u;
    // 0x34bad8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34bad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34badc: 0x8fc3000c  lw          $v1, 0xC($fp)
    ctx->pc = 0x34badcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34bae0: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x34BAE0u;
    {
        const bool branch_taken_0x34bae0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x34bae0) {
            ctx->pc = 0x34BB18u;
            goto label_34bb18;
        }
    }
    ctx->pc = 0x34BAE8u;
    // 0x34bae8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x34BAE8u;
    {
        const bool branch_taken_0x34bae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34bae8) {
            ctx->pc = 0x34BB78u;
            goto label_34bb78;
        }
    }
    ctx->pc = 0x34BAF0u;
label_34baf0:
    // 0x34baf0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x34baf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34baf4: 0x8fc3000c  lw          $v1, 0xC($fp)
    ctx->pc = 0x34baf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34baf8: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x34BAF8u;
    {
        const bool branch_taken_0x34baf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x34baf8) {
            ctx->pc = 0x34BB48u;
            goto label_34bb48;
        }
    }
    ctx->pc = 0x34BB00u;
    // 0x34bb00: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x34bb00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x34bb04: 0x8fc3000c  lw          $v1, 0xC($fp)
    ctx->pc = 0x34bb04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34bb08: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x34BB08u;
    {
        const bool branch_taken_0x34bb08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x34bb08) {
            ctx->pc = 0x34BB60u;
            goto label_34bb60;
        }
    }
    ctx->pc = 0x34BB10u;
    // 0x34bb10: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x34BB10u;
    {
        const bool branch_taken_0x34bb10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34bb10) {
            ctx->pc = 0x34BB78u;
            goto label_34bb78;
        }
    }
    ctx->pc = 0x34BB18u;
label_34bb18:
    // 0x34bb18: 0x8fc40004  lw          $a0, 0x4($fp)
    ctx->pc = 0x34bb18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x34bb1c: 0x8fc50008  lw          $a1, 0x8($fp)
    ctx->pc = 0x34bb1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x34bb20: 0xc0d2ee5  jal         func_34BB94
    ctx->pc = 0x34BB20u;
    SET_GPR_U32(ctx, 31, 0x34BB28u);
    ctx->pc = 0x34BB94u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BB94u, 0x34BB20u, 0x34BB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BB28u;
label_34bb28:
    // 0x34bb28: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x34BB28u;
    {
        const bool branch_taken_0x34bb28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34bb28) {
            ctx->pc = 0x34BB7Cu;
            goto label_34bb7c;
        }
    }
    ctx->pc = 0x34BB30u;
label_34bb30:
    // 0x34bb30: 0x8fc40004  lw          $a0, 0x4($fp)
    ctx->pc = 0x34bb30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x34bb34: 0x8fc50008  lw          $a1, 0x8($fp)
    ctx->pc = 0x34bb34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x34bb38: 0xc0d2f07  jal         func_34BC1C
    ctx->pc = 0x34BB38u;
    SET_GPR_U32(ctx, 31, 0x34BB40u);
    ctx->pc = 0x34BC1Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BC1Cu, 0x34BB38u, 0x34BB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BB40u;
label_34bb40:
    // 0x34bb40: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x34BB40u;
    {
        const bool branch_taken_0x34bb40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34bb40) {
            ctx->pc = 0x34BB7Cu;
            goto label_34bb7c;
        }
    }
    ctx->pc = 0x34BB48u;
label_34bb48:
    // 0x34bb48: 0x8fc40004  lw          $a0, 0x4($fp)
    ctx->pc = 0x34bb48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x34bb4c: 0x8fc50008  lw          $a1, 0x8($fp)
    ctx->pc = 0x34bb4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x34bb50: 0xc0d2f1f  jal         func_34BC7C
    ctx->pc = 0x34BB50u;
    SET_GPR_U32(ctx, 31, 0x34BB58u);
    ctx->pc = 0x34BC7Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BC7Cu, 0x34BB50u, 0x34BB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BB58u;
label_34bb58:
    // 0x34bb58: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x34BB58u;
    {
        const bool branch_taken_0x34bb58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34bb58) {
            ctx->pc = 0x34BB7Cu;
            goto label_34bb7c;
        }
    }
    ctx->pc = 0x34BB60u;
label_34bb60:
    // 0x34bb60: 0x8fc40004  lw          $a0, 0x4($fp)
    ctx->pc = 0x34bb60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x34bb64: 0x8fc50008  lw          $a1, 0x8($fp)
    ctx->pc = 0x34bb64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x34bb68: 0xc0d2f3e  jal         func_34BCF8
    ctx->pc = 0x34BB68u;
    SET_GPR_U32(ctx, 31, 0x34BB70u);
    ctx->pc = 0x34BCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BCF8u, 0x34BB68u, 0x34BB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BB70u;
label_34bb70:
    // 0x34bb70: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x34BB70u;
    {
        const bool branch_taken_0x34bb70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34bb70) {
            ctx->pc = 0x34BB7Cu;
            goto label_34bb7c;
        }
    }
    ctx->pc = 0x34BB78u;
label_34bb78:
    // 0x34bb78: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x34bb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_34bb7c:
    // 0x34bb7c: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34bb7cu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bb80: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x34bb80u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34bb84: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x34bb84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34bb88: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x34bb88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x34bb8c: 0x3e00008  jr          $ra
    ctx->pc = 0x34BB8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34BB8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34BB94u;
}
