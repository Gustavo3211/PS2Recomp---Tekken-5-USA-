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

// Function: sub_002D1DB8
// Address: 0x2d1db8 - 0x2d1ea8
void sub_002D1DB8_0x2d1db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D1DB8_0x2d1db8");
#endif

    switch (ctx->pc) {
        case 0x2d1e10u: goto label_2d1e10;
        case 0x2d1e4cu: goto label_2d1e4c;
        case 0x2d1e64u: goto label_2d1e64;
        default: break;
    }

    ctx->pc = 0x2d1db8u;

    // 0x2d1db8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d1db8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d1dbc: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2d1dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2d1dc0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d1dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d1dc4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d1dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d1dc8: 0x2444d610  addiu       $a0, $v0, -0x29F0
    ctx->pc = 0x2d1dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956560));
    // 0x2d1dcc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d1dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d1dd0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2d1dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d1dd4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2d1dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2d1dd8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2d1dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2d1ddc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2d1ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2d1de0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2d1de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2d1de4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2d1de4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3BD610u));
    // 0x2d1de8: 0x10430026  beq         $v0, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x2D1DE8u;
    {
        const bool branch_taken_0x2d1de8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2D1DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1DE8u;
        // 0x2d1dec: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1de8) {
            ctx->pc = 0x2D1E84u;
            goto label_2d1e84;
        }
    }
    ctx->pc = 0x2D1DF0u;
    // 0x2d1df0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d1df0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1df4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2d1df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1df8: 0x26340004  addiu       $s4, $s1, 0x4
    ctx->pc = 0x2d1df8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2d1dfc: 0x26330008  addiu       $s3, $s1, 0x8
    ctx->pc = 0x2d1dfcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2d1e00: 0x2632000c  addiu       $s2, $s1, 0xC
    ctx->pc = 0x2d1e00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x2d1e04: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x2d1e04u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d1e08: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x2d1e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2d1e0c: 0x0  nop
    ctx->pc = 0x2d1e0cu;
    // NOP
label_2d1e10:
    // 0x2d1e10: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2d1e10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2d1e14: 0x24080  sll         $t0, $v0, 2
    ctx->pc = 0x2d1e14u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d1e18: 0x1111821  addu        $v1, $t0, $s1
    ctx->pc = 0x2d1e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 17)));
    // 0x2d1e1c: 0x1144821  addu        $t1, $t0, $s4
    ctx->pc = 0x2d1e1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 20)));
    // 0x2d1e20: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2d1e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d1e24: 0x1135021  addu        $t2, $t0, $s3
    ctx->pc = 0x2d1e24u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 19)));
    // 0x2d1e28: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x2d1e28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1e2c: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x2d1e2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1e30: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x2d1e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x2d1e34: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2d1e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1e38: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D1E38u;
    {
        const bool branch_taken_0x2d1e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1E38u;
        // 0x2d1e3c: 0x1123821  addu        $a3, $t0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1e38) {
            ctx->pc = 0x2D1E58u;
            goto label_2d1e58;
        }
    }
    ctx->pc = 0x2D1E40u;
    // 0x2d1e40: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2d1e40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d1e44: 0xc0cc166  jal         func_330598
    ctx->pc = 0x2D1E44u;
    SET_GPR_U32(ctx, 31, 0x2D1E4Cu);
    ctx->pc = 0x2D1E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1E44u;
    // 0x2d1e48: 0x8cc60000  lw          $a2, 0x0($a2) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330598u, 0x2D1E44u, 0x2D1E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1E4Cu;
label_2d1e4c:
    // 0x2d1e4c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2D1E4Cu;
    {
        const bool branch_taken_0x2d1e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1E4Cu;
        // 0x2d1e50: 0x1010c0  sll         $v0, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1e4c) {
            ctx->pc = 0x2D1E68u;
            goto label_2d1e68;
        }
    }
    ctx->pc = 0x2D1E54u;
    // 0x2d1e54: 0x0  nop
    ctx->pc = 0x2d1e54u;
    // NOP
label_2d1e58:
    // 0x2d1e58: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x2d1e58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2d1e5c: 0xc0cc15c  jal         func_330570
    ctx->pc = 0x2D1E5Cu;
    SET_GPR_U32(ctx, 31, 0x2D1E64u);
    ctx->pc = 0x2D1E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1E5Cu;
    // 0x2d1e60: 0x8d460000  lw          $a2, 0x0($t2) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330570u, 0x2D1E5Cu, 0x2D1E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1E64u;
label_2d1e64:
    // 0x2d1e64: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x2d1e64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_2d1e68:
    // 0x2d1e68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d1e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1e6c: 0x901821  addu        $v1, $a0, $s0
    ctx->pc = 0x2d1e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2d1e70: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d1e70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d1e74: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2d1e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2d1e78: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d1e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d1e7c: 0x1455ffe4  bne         $v0, $s5, . + 4 + (-0x1C << 2)
    ctx->pc = 0x2D1E7Cu;
    {
        const bool branch_taken_0x2d1e7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x2D1E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1E7Cu;
        // 0x2d1e80: 0x901021  addu        $v0, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1e7c) {
            ctx->pc = 0x2D1E10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d1e10;
        }
    }
    ctx->pc = 0x2D1E84u;
label_2d1e84:
    // 0x2d1e84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d1e84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d1e88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d1e88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d1e8c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d1e8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d1e90: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d1e90u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d1e94: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2d1e94u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d1e98: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2d1e98u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1e9c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2d1e9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d1ea0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1EA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1EA0u;
        // 0x2d1ea4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1EA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D1EA8u;
}
