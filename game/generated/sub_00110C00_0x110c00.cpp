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

// Function: sub_00110C00
// Address: 0x110c00 - 0x110cb0
void sub_00110C00_0x110c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110C00_0x110c00");
#endif

    switch (ctx->pc) {
        case 0x110c40u: goto label_110c40;
        default: break;
    }

    ctx->pc = 0x110c00u;

    // 0x110c00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x110c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x110c04: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x110c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x110c08: 0x3c110013  lui         $s1, 0x13
    ctx->pc = 0x110c08u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)19 << 16));
    // 0x110c0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x110c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x110c10: 0x8e251104  lw          $a1, 0x1104($s1)
    ctx->pc = 0x110c10u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x131104u));
    // 0x110c14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x110c14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110c18: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x110c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x110c1c: 0x28a2007e  slti        $v0, $a1, 0x7E
    ctx->pc = 0x110c1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)126) ? 1 : 0);
    // 0x110c20: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x110C20u;
    {
        const bool branch_taken_0x110c20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x110C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110C20u;
        // 0x110c24: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110c20) {
            ctx->pc = 0x110C48u;
            goto label_110c48;
        }
    }
    ctx->pc = 0x110C28u;
    // 0x110c28: 0x3c12001f  lui         $s2, 0x1F
    ctx->pc = 0x110c28u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)31 << 16));
    // 0x110c2c: 0xae201104  sw          $zero, 0x1104($s1)
    ctx->pc = 0x110c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4356), GPR_U32(ctx, 0));
    // 0x110c30: 0x26428740  addiu       $v0, $s2, -0x78C0
    ctx->pc = 0x110c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936384));
    // 0x110c34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x110c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110c38: 0xc046b7a  jal         func_11ADE8
    ctx->pc = 0x110C38u;
    SET_GPR_U32(ctx, 31, 0x110C40u);
    ctx->pc = 0x110C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110C38u;
    // 0x110c3c: 0xa040007f  sb          $zero, 0x7F($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 127), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ADE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ADE8u, 0x110C38u, 0x110C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110C40u;
label_110c40:
    // 0x110c40: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x110C40u;
    {
        const bool branch_taken_0x110c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110C40u;
        // 0x110c44: 0x8e251104  lw          $a1, 0x1104($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4356)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110c40) {
            ctx->pc = 0x110C4Cu;
            goto label_110c4c;
        }
    }
    ctx->pc = 0x110C48u;
label_110c48:
    // 0x110c48: 0x3c12001f  lui         $s2, 0x1F
    ctx->pc = 0x110c48u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)31 << 16));
label_110c4c:
    // 0x110c4c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x110c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x110c50: 0x1602000d  bne         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x110C50u;
    {
        const bool branch_taken_0x110c50 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x110C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110C50u;
        // 0x110c54: 0x26428740  addiu       $v0, $s2, -0x78C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110c50) {
            ctx->pc = 0x110C88u;
            goto label_110c88;
        }
    }
    ctx->pc = 0x110C58u;
    // 0x110c58: 0x26448740  addiu       $a0, $s2, -0x78C0
    ctx->pc = 0x110c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936384));
    // 0x110c5c: 0xae201104  sw          $zero, 0x1104($s1)
    ctx->pc = 0x110c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4356), GPR_U32(ctx, 0));
    // 0x110c60: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x110c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x110c64: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x110c64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x110c68: 0xa0500000  sb          $s0, 0x0($v0)
    ctx->pc = 0x110c68u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x110c6c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x110c6cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110c70: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x110c70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x110c74: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x110c74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x110c78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x110c78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110c7c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x110c7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x110c80: 0x8046b7a  j           func_11ADE8
    ctx->pc = 0x110C80u;
    ctx->pc = 0x110C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110C80u;
    // 0x110c84: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ADE8u;
    sub_0011ADE8_0x11ade8(rdram, ctx, runtime); return;
    ctx->pc = 0x110C88u;
label_110c88:
    // 0x110c88: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x110c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x110c8c: 0xae231104  sw          $v1, 0x1104($s1)
    ctx->pc = 0x110c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4356), GPR_U32(ctx, 3));
    // 0x110c90: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x110c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x110c94: 0xa0500000  sb          $s0, 0x0($v0)
    ctx->pc = 0x110c94u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x110c98: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x110c98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x110c9c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x110c9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x110ca0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x110ca0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x110ca4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x110ca4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110ca8: 0x3e00008  jr          $ra
    ctx->pc = 0x110CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110CA8u;
        // 0x110cac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110CA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110CB0u;
}
