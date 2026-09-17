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

// Function: sub_002D69B0
// Address: 0x2d69b0 - 0x2d6b70
void sub_002D69B0_0x2d69b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D69B0_0x2d69b0");
#endif

    switch (ctx->pc) {
        case 0x2d69e0u: goto label_2d69e0;
        case 0x2d69e8u: goto label_2d69e8;
        case 0x2d69fcu: goto label_2d69fc;
        case 0x2d6a0cu: goto label_2d6a0c;
        case 0x2d6a1cu: goto label_2d6a1c;
        case 0x2d6a34u: goto label_2d6a34;
        case 0x2d6a44u: goto label_2d6a44;
        case 0x2d6a80u: goto label_2d6a80;
        case 0x2d6ae0u: goto label_2d6ae0;
        case 0x2d6b38u: goto label_2d6b38;
        default: break;
    }

    ctx->pc = 0x2d69b0u;

    // 0x2d69b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d69b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d69b4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2d69b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2d69b8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2d69b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d69bc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2d69bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2d69c0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2d69c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d69c4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2d69c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2d69c8: 0x26750008  addiu       $s5, $s3, 0x8
    ctx->pc = 0x2d69c8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x2d69cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d69ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d69d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d69d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d69d4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d69d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d69d8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2d69d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2d69dc: 0xae6000a4  sw          $zero, 0xA4($s3)
    ctx->pc = 0x2d69dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 164), GPR_U32(ctx, 0));
label_2d69e0:
    // 0x2d69e0: 0xc040564  jal         func_101590
    ctx->pc = 0x2D69E0u;
    SET_GPR_U32(ctx, 31, 0x2D69E8u);
    ctx->pc = 0x2D69E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D69E0u;
    // 0x2d69e4: 0x148040  sll         $s0, $s4, 1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101590u, 0x2D69E0u, 0x2D69E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D69E8u;
label_2d69e8:
    // 0x2d69e8: 0x148880  sll         $s1, $s4, 2
    ctx->pc = 0x2d69e8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x2d69ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d69ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d69f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d69f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d69f4: 0xc097d0a  jal         func_25F428
    ctx->pc = 0x2D69F4u;
    SET_GPR_U32(ctx, 31, 0x2D69FCu);
    ctx->pc = 0x2D69F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D69F4u;
    // 0x2d69f8: 0x26320070  addiu       $s2, $s1, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F428u, 0x2D69F4u, 0x2D69FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D69FCu;
label_2d69fc:
    // 0x2d69fc: 0x2b29021  addu        $s2, $s5, $s2
    ctx->pc = 0x2d69fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x2d6a00: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2d6a00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x2d6a04: 0xc040564  jal         func_101590
    ctx->pc = 0x2D6A04u;
    SET_GPR_U32(ctx, 31, 0x2D6A0Cu);
    ctx->pc = 0x2D6A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6A04u;
    // 0x2d6a08: 0x2338821  addu        $s1, $s1, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101590u, 0x2D6A04u, 0x2D6A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6A0Cu;
label_2d6a0c:
    // 0x2d6a0c: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x2d6a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2d6a10: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d6a10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6a14: 0xc097d0a  jal         func_25F428
    ctx->pc = 0x2D6A14u;
    SET_GPR_U32(ctx, 31, 0x2D6A1Cu);
    ctx->pc = 0x2D6A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6A14u;
    // 0x2d6a18: 0x1480c0  sll         $s0, $s4, 3 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F428u, 0x2D6A14u, 0x2D6A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6A1Cu;
label_2d6a1c:
    // 0x2d6a1c: 0x2708021  addu        $s0, $s3, $s0
    ctx->pc = 0x2d6a1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x2d6a20: 0xae220050  sw          $v0, 0x50($s1)
    ctx->pc = 0x2d6a20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
    // 0x2d6a24: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d6a24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6a28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d6a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6a2c: 0xc0cc206  jal         func_330818
    ctx->pc = 0x2D6A2Cu;
    SET_GPR_U32(ctx, 31, 0x2D6A34u);
    ctx->pc = 0x2D6A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6A2Cu;
    // 0x2d6a30: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330818u, 0x2D6A2Cu, 0x2D6A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6A34u;
label_2d6a34:
    // 0x2d6a34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d6a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6a38: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2d6a38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d6a3c: 0xc0cc220  jal         func_330880
    ctx->pc = 0x2D6A3Cu;
    SET_GPR_U32(ctx, 31, 0x2D6A44u);
    ctx->pc = 0x2D6A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6A3Cu;
    // 0x2d6a40: 0x240600f8  addiu       $a2, $zero, 0xF8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330880u, 0x2D6A3Cu, 0x2D6A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6A44u;
label_2d6a44:
    // 0x2d6a44: 0x8e6300a4  lw          $v1, 0xA4($s3)
    ctx->pc = 0x2d6a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 164)));
    // 0x2d6a48: 0x2a820003  slti        $v0, $s4, 0x3
    ctx->pc = 0x2d6a48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2d6a4c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d6a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d6a50: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x2D6A50u;
    {
        const bool branch_taken_0x2d6a50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D6A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6A50u;
        // 0x2d6a54: 0xae6300a4  sw          $v1, 0xA4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 164), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6a50) {
            ctx->pc = 0x2D69E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d69e0;
        }
    }
    ctx->pc = 0x2D6A58u;
    // 0x2d6a58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d6a58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6a5c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d6a5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d6a60: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d6a60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d6a64: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d6a64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d6a68: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2d6a68u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d6a6c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2d6a6cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d6a70: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2d6a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d6a74: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6A74u;
        // 0x2d6a78: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6A74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6A7Cu;
    // 0x2d6a7c: 0x0  nop
    ctx->pc = 0x2d6a7cu;
    // NOP
label_2d6a80:
    // 0x2d6a80: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2d6a80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6a84: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d6a84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d6a88: 0x260821  addu        $at, $at, $a2
    ctx->pc = 0x2d6a88u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 6)));
    // 0x2d6a8c: 0xac2094ec  sw          $zero, -0x6B14($at)
    ctx->pc = 0x2d6a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939884), GPR_U32(ctx, 0));
    // 0x2d6a90: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D6A90u;
    {
        const bool branch_taken_0x2d6a90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6A90u;
        // 0x2d6a94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6a90) {
            ctx->pc = 0x2D6AD8u;
            goto label_2d6ad8;
        }
    }
    ctx->pc = 0x2D6A98u;
    // 0x2d6a98: 0x3c035235  lui         $v1, 0x5235
    ctx->pc = 0x2d6a98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21045 << 16));
    // 0x2d6a9c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2d6a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d6aa0: 0x34634b54  ori         $v1, $v1, 0x4B54
    ctx->pc = 0x2d6aa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)19284);
    // 0x2d6aa4: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2D6AA4u;
    {
        const bool branch_taken_0x2d6aa4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2D6AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6AA4u;
        // 0x2d6aa8: 0x3c040055  lui         $a0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6aa4) {
            ctx->pc = 0x2D6AD8u;
            goto label_2d6ad8;
        }
    }
    ctx->pc = 0x2D6AACu;
    // 0x2d6aac: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x2d6aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2d6ab0: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x2d6ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x2d6ab4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2d6ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2d6ab8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2d6ab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2d6abc: 0x34845345  ori         $a0, $a0, 0x5345
    ctx->pc = 0x2d6abcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)21317);
    // 0x2d6ac0: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D6AC0u;
    {
        const bool branch_taken_0x2d6ac0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2D6AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6AC0u;
        // 0x2d6ac4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6ac0) {
            ctx->pc = 0x2D6AD8u;
            goto label_2d6ad8;
        }
    }
    ctx->pc = 0x2D6AC8u;
    // 0x2d6ac8: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2d6ac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2d6acc: 0x260821  addu        $at, $at, $a2
    ctx->pc = 0x2d6accu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 6)));
    // 0x2d6ad0: 0xac2594ec  sw          $a1, -0x6B14($at)
    ctx->pc = 0x2d6ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939884), GPR_U32(ctx, 5));
    // 0x2d6ad4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d6ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d6ad8:
    // 0x2d6ad8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6AD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6AE0u;
label_2d6ae0:
    // 0x2d6ae0: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x2d6ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x2d6ae4: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x2d6ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2d6ae8: 0x8ca594ec  lw          $a1, -0x6B14($a1)
    ctx->pc = 0x2d6ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294939884)));
    // 0x2d6aec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d6aecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6af0: 0x10a0001d  beqz        $a1, . + 4 + (0x1D << 2)
    ctx->pc = 0x2D6AF0u;
    {
        const bool branch_taken_0x2d6af0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6AF0u;
        // 0x2d6af4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6af0) {
            ctx->pc = 0x2D6B68u;
            goto label_2d6b68;
        }
    }
    ctx->pc = 0x2D6AF8u;
    // 0x2d6af8: 0x24a6000c  addiu       $a2, $a1, 0xC
    ctx->pc = 0x2d6af8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x2d6afc: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x2d6afcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2d6b00: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x2d6b00u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d6b04: 0x10640018  beq         $v1, $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2D6B04u;
    {
        const bool branch_taken_0x2d6b04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2d6b04) {
            ctx->pc = 0x2D6B68u;
            goto label_2d6b68;
        }
    }
    ctx->pc = 0x2D6B0Cu;
    // 0x2d6b0c: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x2d6b0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d6b10: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2d6b10u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6b14: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2d6b14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d6b18: 0xa23021  addu        $a2, $a1, $v0
    ctx->pc = 0x2d6b18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2d6b1c: 0x94c30002  lhu         $v1, 0x2($a2)
    ctx->pc = 0x2d6b1cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2d6b20: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x2d6b20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d6b24: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2d6b24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2d6b28: 0x434025  or          $t0, $v0, $v1
    ctx->pc = 0x2d6b28u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2d6b2c: 0x1900000d  blez        $t0, . + 4 + (0xD << 2)
    ctx->pc = 0x2D6B2Cu;
    {
        const bool branch_taken_0x2d6b2c = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x2D6B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6B2Cu;
        // 0x2d6b30: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6b2c) {
            ctx->pc = 0x2D6B64u;
            goto label_2d6b64;
        }
    }
    ctx->pc = 0x2D6B34u;
    // 0x2d6b34: 0x0  nop
    ctx->pc = 0x2d6b34u;
    // NOP
label_2d6b38:
    // 0x2d6b38: 0x94c40000  lhu         $a0, 0x0($a2)
    ctx->pc = 0x2d6b38u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d6b3c: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x2d6b3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x2d6b40: 0x94c50000  lhu         $a1, 0x0($a2)
    ctx->pc = 0x2d6b40u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d6b44: 0x24c60006  addiu       $a2, $a2, 0x6
    ctx->pc = 0x2d6b44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6));
    // 0x2d6b48: 0xe4102a  slt         $v0, $a3, $a0
    ctx->pc = 0x2d6b48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2d6b4c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2d6b4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2d6b50: 0x82380b  movn        $a3, $a0, $v0
    ctx->pc = 0x2d6b50u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 4));
    // 0x2d6b54: 0x128182a  slt         $v1, $t1, $t0
    ctx->pc = 0x2d6b54u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x2d6b58: 0xe5102a  slt         $v0, $a3, $a1
    ctx->pc = 0x2d6b58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2d6b5c: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x2D6B5Cu;
    {
        const bool branch_taken_0x2d6b5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D6B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6B5Cu;
        // 0x2d6b60: 0xa2380b  movn        $a3, $a1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6b5c) {
            ctx->pc = 0x2D6B38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d6b38;
        }
    }
    ctx->pc = 0x2D6B64u;
label_2d6b64:
    // 0x2d6b64: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x2d6b64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2d6b68:
    // 0x2d6b68: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6B68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6B70u;
}
