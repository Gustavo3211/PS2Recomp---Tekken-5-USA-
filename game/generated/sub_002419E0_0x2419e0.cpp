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

// Function: sub_002419E0
// Address: 0x2419e0 - 0x241a88
void sub_002419E0_0x2419e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002419E0_0x2419e0");
#endif

    switch (ctx->pc) {
        case 0x241a18u: goto label_241a18;
        case 0x241a20u: goto label_241a20;
        case 0x241a38u: goto label_241a38;
        default: break;
    }

    ctx->pc = 0x2419e0u;

    // 0x2419e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2419e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2419e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2419e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2419e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2419e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2419ec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2419ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2419f0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2419f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2419f4: 0x8c920050  lw          $s2, 0x50($a0)
    ctx->pc = 0x2419f4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x2419f8: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x2419f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x2419fc: 0x3c100047  lui         $s0, 0x47
    ctx->pc = 0x2419fcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    // 0x241a00: 0x26100710  addiu       $s0, $s0, 0x710
    ctx->pc = 0x241a00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1808));
    // 0x241a04: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x241a04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x241a08: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x241a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x241a0c: 0x18600018  blez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x241A0Cu;
    {
        const bool branch_taken_0x241a0c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x241A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241A0Cu;
        // 0x241a10: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241a0c) {
            ctx->pc = 0x241A70u;
            goto label_241a70;
        }
    }
    ctx->pc = 0x241A14u;
    // 0x241a14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x241a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_241a18:
    // 0x241a18: 0xc0905ae  jal         func_2416B8
    ctx->pc = 0x241A18u;
    SET_GPR_U32(ctx, 31, 0x241A20u);
    ctx->pc = 0x241A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241A18u;
    // 0x241a1c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2416B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2416B8u, 0x241A18u, 0x241A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241A20u;
label_241a20:
    // 0x241a20: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x241a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x241a24: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x241a24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241a28: 0x1880000c  blez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x241A28u;
    {
        const bool branch_taken_0x241a28 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x241A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241A28u;
        // 0x241a2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241a28) {
            ctx->pc = 0x241A5Cu;
            goto label_241a5c;
        }
    }
    ctx->pc = 0x241A30u;
    // 0x241a30: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x241a30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x241a34: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x241a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_241a38:
    // 0x241a38: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x241A38u;
    {
        const bool branch_taken_0x241a38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x241A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241A38u;
        // 0x241a3c: 0x51040  sll         $v0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241a38) {
            ctx->pc = 0x241A4Cu;
            goto label_241a4c;
        }
    }
    ctx->pc = 0x241A40u;
    // 0x241a40: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x241a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x241a44: 0xa4470000  sh          $a3, 0x0($v0)
    ctx->pc = 0x241a44u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x241a48: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x241a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_241a4c:
    // 0x241a4c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x241a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x241a50: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x241a50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x241a54: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x241A54u;
    {
        const bool branch_taken_0x241a54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x241a54) {
            ctx->pc = 0x241A58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241A54u;
            // 0x241a58: 0x8cc30010  lw          $v1, 0x10($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x241A38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_241a38;
        }
    }
    ctx->pc = 0x241A5Cu;
label_241a5c:
    // 0x241a5c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x241a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x241a60: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x241a60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x241a64: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x241a64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x241a68: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x241A68u;
    {
        const bool branch_taken_0x241a68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x241a68) {
            ctx->pc = 0x241A6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241A68u;
            // 0x241a6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x241A18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_241a18;
        }
    }
    ctx->pc = 0x241A70u;
label_241a70:
    // 0x241a70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x241a70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x241a74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x241a74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x241a78: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x241a78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x241a7c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x241a7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x241a80: 0x3e00008  jr          $ra
    ctx->pc = 0x241A80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x241A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241A80u;
        // 0x241a84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x241A80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x241A88u;
}
