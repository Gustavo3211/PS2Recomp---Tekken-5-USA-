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

// Function: sub_00506E68
// Address: 0x506e68 - 0x506ee8
void sub_00506E68_0x506e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00506E68_0x506e68");
#endif

    switch (ctx->pc) {
        case 0x506eccu: goto label_506ecc;
        default: break;
    }

    ctx->pc = 0x506e68u;

    // 0x506e68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x506e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x506e6c: 0x74400  sll         $t0, $a3, 16
    ctx->pc = 0x506e6cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x506e70: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x506e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x506e74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x506e74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x506e78: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x506e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x506e7c: 0x62400  sll         $a0, $a2, 16
    ctx->pc = 0x506e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x506e80: 0x43c03  sra         $a3, $a0, 16
    ctx->pc = 0x506e80u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 4), 16));
    // 0x506e84: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x506e84u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x506e88: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x506e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x506e8c: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x506e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x506e90: 0x53403  sra         $a2, $a1, 16
    ctx->pc = 0x506e90u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 5), 16));
    // 0x506e94: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x506e94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x506e98: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x506e98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x506e9c: 0x24690002  addiu       $t1, $v1, 0x2
    ctx->pc = 0x506e9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x506ea0: 0x84403  sra         $t0, $t0, 16
    ctx->pc = 0x506ea0u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 16));
    // 0x506ea4: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x506ea4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x506ea8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x506ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x506eac: 0xafa90000  sw          $t1, 0x0($sp)
    ctx->pc = 0x506eacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 9));
    // 0x506eb0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x506eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x506eb4: 0x85240000  lh          $a0, 0x0($t1)
    ctx->pc = 0x506eb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x506eb8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x506eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x506ebc: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x506ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x506ec0: 0x8a2025  or          $a0, $a0, $t2
    ctx->pc = 0x506ec0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 10));
    // 0x506ec4: 0xc141b00  jal         func_506C00
    ctx->pc = 0x506EC4u;
    SET_GPR_U32(ctx, 31, 0x506ECCu);
    ctx->pc = 0x506EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x506EC4u;
    // 0x506ec8: 0x442024  and         $a0, $v0, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x506C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x506C00u, 0x506EC4u, 0x506ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x506ECCu;
label_506ecc:
    // 0x506ecc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x506eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x506ed0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x506ed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x506ed4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x506ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x506ed8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x506ed8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x506edc: 0x3e00008  jr          $ra
    ctx->pc = 0x506EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x506EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x506EDCu;
        // 0x506ee0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x506EDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x506EE4u;
    // 0x506ee4: 0x0  nop
    ctx->pc = 0x506ee4u;
    // NOP
    ctx->pc = 0x506ee8u;
}
