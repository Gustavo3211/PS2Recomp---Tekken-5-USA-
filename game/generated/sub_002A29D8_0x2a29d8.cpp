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

// Function: sub_002A29D8
// Address: 0x2a29d8 - 0x2a2a88
void sub_002A29D8_0x2a29d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A29D8_0x2a29d8");
#endif

    switch (ctx->pc) {
        case 0x2a2a18u: goto label_2a2a18;
        case 0x2a2a2cu: goto label_2a2a2c;
        case 0x2a2a40u: goto label_2a2a40;
        case 0x2a2a54u: goto label_2a2a54;
        case 0x2a2a5cu: goto label_2a2a5c;
        case 0x2a2a70u: goto label_2a2a70;
        default: break;
    }

    ctx->pc = 0x2a29d8u;

    // 0x2a29d8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2a29d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2a29dc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a29dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a29e0: 0x8c4483c0  lw          $a0, -0x7C40($v0)
    ctx->pc = 0x2a29e0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x2a29e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a29e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a29e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a29e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a29ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2a29ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2a29f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a29f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a29f4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2a29f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a29f8: 0x1083001e  beq         $a0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2A29F8u;
    {
        const bool branch_taken_0x2a29f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2A29FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A29F8u;
        // 0x2a29fc: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a29f8) {
            ctx->pc = 0x2A2A74u;
            goto label_2a2a74;
        }
    }
    ctx->pc = 0x2A2A00u;
    // 0x2a2a00: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2a2a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a2a04: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A2A04u;
    {
        const bool branch_taken_0x2a2a04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A2A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2A04u;
        // 0x2a2a08: 0x2410003f  addiu       $s0, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2a04) {
            ctx->pc = 0x2A2A2Cu;
            goto label_2a2a2c;
        }
    }
    ctx->pc = 0x2A2A0Cu;
    // 0x2a2a0c: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x2a2a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x2a2a10: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x2A2A10u;
    SET_GPR_U32(ctx, 31, 0x2A2A18u);
    ctx->pc = 0x2A2A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2A10u;
    // 0x2a2a14: 0x2410003d  addiu       $s0, $zero, 0x3D (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x2A2A10u, 0x2A2A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2A18u;
label_2a2a18:
    // 0x2a2a18: 0x24040035  addiu       $a0, $zero, 0x35
    ctx->pc = 0x2a2a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x2a2a1c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2a2a1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2a20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a2a20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2a24: 0xc089636  jal         func_2258D8
    ctx->pc = 0x2A2A24u;
    SET_GPR_U32(ctx, 31, 0x2A2A2Cu);
    ctx->pc = 0x2A2A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2A24u;
    // 0x2a2a28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2258D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2258D8u, 0x2A2A24u, 0x2A2A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2A2Cu;
label_2a2a2c:
    // 0x2a2a2c: 0x24020098  addiu       $v0, $zero, 0x98
    ctx->pc = 0x2a2a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    // 0x2a2a30: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2A2A30u;
    {
        const bool branch_taken_0x2a2a30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A2A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2A30u;
        // 0x2a2a34: 0x24040028  addiu       $a0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2a30) {
            ctx->pc = 0x2A2A70u;
            goto label_2a2a70;
        }
    }
    ctx->pc = 0x2A2A38u;
    // 0x2a2a38: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x2A2A38u;
    SET_GPR_U32(ctx, 31, 0x2A2A40u);
    ctx->pc = 0x2A2A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2A38u;
    // 0x2a2a3c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x2A2A38u, 0x2A2A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2A40u;
label_2a2a40:
    // 0x2a2a40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2a44: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2a2a44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2a48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a2a48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2a4c: 0xc089636  jal         func_2258D8
    ctx->pc = 0x2A2A4Cu;
    SET_GPR_U32(ctx, 31, 0x2A2A54u);
    ctx->pc = 0x2A2A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2A4Cu;
    // 0x2a2a50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2258D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2258D8u, 0x2A2A4Cu, 0x2A2A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2A54u;
label_2a2a54:
    // 0x2a2a54: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x2A2A54u;
    SET_GPR_U32(ctx, 31, 0x2A2A5Cu);
    ctx->pc = 0x2A2A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2A54u;
    // 0x2a2a58: 0x2404002a  addiu       $a0, $zero, 0x2A (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x2A2A54u, 0x2A2A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2A5Cu;
label_2a2a5c:
    // 0x2a2a5c: 0x2404003e  addiu       $a0, $zero, 0x3E
    ctx->pc = 0x2a2a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x2a2a60: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2a2a60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2a64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a2a64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2a68: 0xc089636  jal         func_2258D8
    ctx->pc = 0x2A2A68u;
    SET_GPR_U32(ctx, 31, 0x2A2A70u);
    ctx->pc = 0x2A2A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2A68u;
    // 0x2a2a6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2258D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2258D8u, 0x2A2A68u, 0x2A2A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2A70u;
label_2a2a70:
    // 0x2a2a70: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2a2a70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a2a74:
    // 0x2a2a74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a2a74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a2a78: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2a2a78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a2a7c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a2a7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a2a80: 0x3e00008  jr          $ra
    ctx->pc = 0x2A2A80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A2A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2A80u;
        // 0x2a2a84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2A80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A2A88u;
}
