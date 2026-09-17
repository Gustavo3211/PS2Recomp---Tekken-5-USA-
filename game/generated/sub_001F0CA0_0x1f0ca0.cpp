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

// Function: sub_001F0CA0
// Address: 0x1f0ca0 - 0x1f0d58
void sub_001F0CA0_0x1f0ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F0CA0_0x1f0ca0");
#endif

    switch (ctx->pc) {
        case 0x1f0cd0u: goto label_1f0cd0;
        case 0x1f0d14u: goto label_1f0d14;
        case 0x1f0d2cu: goto label_1f0d2c;
        default: break;
    }

    ctx->pc = 0x1f0ca0u;

    // 0x1f0ca0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f0ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f0ca4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1f0ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1f0ca8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f0ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f0cac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f0cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f0cb0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f0cb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0cb4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f0cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f0cb8: 0x245183c0  addiu       $s1, $v0, -0x7C40
    ctx->pc = 0x1f0cb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935488));
    // 0x1f0cbc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f0cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f0cc0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1f0cc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0cc4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1f0cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1f0cc8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1f0cc8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0ccc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1f0cccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A83C0u));
label_1f0cd0:
    // 0x1f0cd0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f0cd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0cd4: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x1f0cd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1f0cd8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F0CD8u;
    {
        const bool branch_taken_0x1f0cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0CD8u;
        // 0x1f0cdc: 0x250280b  movn        $a1, $s2, $s0 (Delay Slot)
        if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0cd8) {
            ctx->pc = 0x1F0CF8u;
            goto label_1f0cf8;
        }
    }
    ctx->pc = 0x1F0CE0u;
    // 0x1f0ce0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1f0ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f0ce4: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1f0ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x1f0ce8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f0ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f0cec: 0x8c633180  lw          $v1, 0x3180($v1)
    ctx->pc = 0x1f0cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12672)));
    // 0x1f0cf0: 0x600008  jr          $v1
    ctx->pc = 0x1F0CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F0CF8u: goto label_1f0cf8;
            case 0x1F0D08u: goto label_1f0d08;
            case 0x1F0D20u: goto label_1f0d20;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0CF0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1F0CF8u;
label_1f0cf8:
    // 0x1f0cf8: 0x8ca2069c  lw          $v0, 0x69C($a1)
    ctx->pc = 0x1f0cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1692)));
    // 0x1f0cfc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1F0CFCu;
    {
        const bool branch_taken_0x1f0cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0CFCu;
        // 0x1f0d00: 0xaca206a4  sw          $v0, 0x6A4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 1700), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0cfc) {
            ctx->pc = 0x1F0D2Cu;
            goto label_1f0d2c;
        }
    }
    ctx->pc = 0x1F0D04u;
    // 0x1f0d04: 0x0  nop
    ctx->pc = 0x1f0d04u;
    // NOP
label_1f0d08:
    // 0x1f0d08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f0d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0d0c: 0xc07c2e4  jal         func_1F0B90
    ctx->pc = 0x1F0D0Cu;
    SET_GPR_U32(ctx, 31, 0x1F0D14u);
    ctx->pc = 0x1F0D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0D0Cu;
    // 0x1f0d10: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0B90u, 0x1F0D0Cu, 0x1F0D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0D14u;
label_1f0d14:
    // 0x1f0d14: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F0D14u;
    {
        const bool branch_taken_0x1f0d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0D14u;
        // 0x1f0d18: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0d14) {
            ctx->pc = 0x1F0D30u;
            goto label_1f0d30;
        }
    }
    ctx->pc = 0x1F0D1Cu;
    // 0x1f0d1c: 0x0  nop
    ctx->pc = 0x1f0d1cu;
    // NOP
label_1f0d20:
    // 0x1f0d20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f0d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0d24: 0xc07c2fc  jal         func_1F0BF0
    ctx->pc = 0x1F0D24u;
    SET_GPR_U32(ctx, 31, 0x1F0D2Cu);
    ctx->pc = 0x1F0D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0D24u;
    // 0x1f0d28: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0BF0u, 0x1F0D24u, 0x1F0D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0D2Cu;
label_1f0d2c:
    // 0x1f0d2c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f0d2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1f0d30:
    // 0x1f0d30: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x1f0d30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f0d34: 0x5440ffe6  bnel        $v0, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x1F0D34u;
    {
        const bool branch_taken_0x1f0d34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0d34) {
            ctx->pc = 0x1F0D38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F0D34u;
            // 0x1f0d38: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F0CD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f0cd0;
        }
    }
    ctx->pc = 0x1F0D3Cu;
    // 0x1f0d3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f0d3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f0d40: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f0d40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f0d44: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f0d44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0d48: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f0d48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f0d4c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f0d4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f0d50: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0D50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0D50u;
        // 0x1f0d54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0D50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F0D58u;
}
