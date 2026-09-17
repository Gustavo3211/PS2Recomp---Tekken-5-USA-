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

// Function: sub_00355BE0
// Address: 0x355be0 - 0x355cd0
void sub_00355BE0_0x355be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00355BE0_0x355be0");
#endif

    switch (ctx->pc) {
        case 0x355c04u: goto label_355c04;
        case 0x355cb4u: goto label_355cb4;
        default: break;
    }

    ctx->pc = 0x355be0u;

    // 0x355be0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x355be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x355be4: 0xffbe0020  sd          $fp, 0x20($sp)
    ctx->pc = 0x355be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
    // 0x355be8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x355be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x355bec: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x355becu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355bf0: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x355bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x355bf4: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x355bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x355bf8: 0x8f84c728  lw          $a0, -0x38D8($gp)
    ctx->pc = 0x355bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952744)));
    // 0x355bfc: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x355BFCu;
    SET_GPR_U32(ctx, 31, 0x355C04u);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x355BFCu, 0x355C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355C04u;
label_355c04:
    // 0x355c04: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x355c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x355c08: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x355c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x355c0c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x355c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x355c10: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x355c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x355c14: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x355c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x355c18: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x355c18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355c1c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x355c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x355c20: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x355c20u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x355c24: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x355c24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x355c28: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x355c28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x355c2c: 0x2442d740  addiu       $v0, $v0, -0x28C0
    ctx->pc = 0x355c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956864));
    // 0x355c30: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x355c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x355c34: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x355c34u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x355c38: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x355c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x355c3c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x355c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x355c40: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x355C40u;
    {
        const bool branch_taken_0x355c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x355c40) {
            ctx->pc = 0x355CA4u;
            goto label_355ca4;
        }
    }
    ctx->pc = 0x355C48u;
    // 0x355c48: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x355c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x355c4c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x355c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x355c50: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x355c50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x355c54: 0xffc20010  sd          $v0, 0x10($fp)
    ctx->pc = 0x355c54u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 16), GPR_U64(ctx, 2));
    // 0x355c58: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x355c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x355c5c: 0xdfc20010  ld          $v0, 0x10($fp)
    ctx->pc = 0x355c5cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x355c60: 0xfc620008  sd          $v0, 0x8($v1)
    ctx->pc = 0x355c60u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
    // 0x355c64: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x355c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x355c68: 0xdfc20010  ld          $v0, 0x10($fp)
    ctx->pc = 0x355c68u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x355c6c: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x355c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x355c70: 0x8fc40004  lw          $a0, 0x4($fp)
    ctx->pc = 0x355c70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x355c74: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x355c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x355c78: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x355c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x355c7c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x355c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x355c80: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x355c80u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x355c84: 0x1812  mflo        $v1
    ctx->pc = 0x355c84u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x355c88: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x355C88u;
    {
        const bool branch_taken_0x355c88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x355c88) {
            ctx->pc = 0x355C8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x355C88u;
            // 0x355c8c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x355C90u;
            goto label_355c90;
        }
    }
    ctx->pc = 0x355C90u;
label_355c90:
    // 0x355c90: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x355c90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x355c94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x355c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x355c98: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x355c98u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x355c9c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x355C9Cu;
    {
        const bool branch_taken_0x355c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x355c9c) {
            ctx->pc = 0x355CA8u;
            goto label_355ca8;
        }
    }
    ctx->pc = 0x355CA4u;
label_355ca4:
    // 0x355ca4: 0xafc00008  sw          $zero, 0x8($fp)
    ctx->pc = 0x355ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 0));
label_355ca8:
    // 0x355ca8: 0x8f84c728  lw          $a0, -0x38D8($gp)
    ctx->pc = 0x355ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952744)));
    // 0x355cac: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x355CACu;
    SET_GPR_U32(ctx, 31, 0x355CB4u);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x355CACu, 0x355CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355CB4u;
label_355cb4:
    // 0x355cb4: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x355cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x355cb8: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x355cb8u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355cbc: 0xdfbe0020  ld          $fp, 0x20($sp)
    ctx->pc = 0x355cbcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x355cc0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x355cc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x355cc4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x355cc4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x355cc8: 0x3e00008  jr          $ra
    ctx->pc = 0x355CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x355CC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x355CD0u;
}
