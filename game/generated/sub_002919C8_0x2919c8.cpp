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

// Function: sub_002919C8
// Address: 0x2919c8 - 0x291ab0
void sub_002919C8_0x2919c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002919C8_0x2919c8");
#endif

    switch (ctx->pc) {
        case 0x291a00u: goto label_291a00;
        case 0x291a28u: goto label_291a28;
        case 0x291a80u: goto label_291a80;
        case 0x291a8cu: goto label_291a8c;
        default: break;
    }

    ctx->pc = 0x2919c8u;

    // 0x2919c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2919c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2919cc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2919ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2919d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2919d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2919d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2919d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2919d8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2919d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2919dc: 0x14a2002d  bne         $a1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2919DCu;
    {
        const bool branch_taken_0x2919dc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2919E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2919DCu;
        // 0x2919e0: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2919dc) {
            ctx->pc = 0x291A94u;
            goto label_291a94;
        }
    }
    ctx->pc = 0x2919E4u;
    // 0x2919e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2919e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2919e8: 0x1482001a  bne         $a0, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2919E8u;
    {
        const bool branch_taken_0x2919e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2919ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2919E8u;
        // 0x2919ec: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2919e8) {
            ctx->pc = 0x291A54u;
            goto label_291a54;
        }
    }
    ctx->pc = 0x2919F0u;
    // 0x2919f0: 0x3c080017  lui         $t0, 0x17
    ctx->pc = 0x2919f0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)23 << 16));
    // 0x2919f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2919f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2919f8: 0x250770d0  addiu       $a3, $t0, 0x70D0
    ctx->pc = 0x2919f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 28880));
    // 0x2919fc: 0x0  nop
    ctx->pc = 0x2919fcu;
    // NOP
label_291a00:
    // 0x291a00: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x291a00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x291a04: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x291a04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x291a08: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x291a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x291a0c: 0x28c3000a  slti        $v1, $a2, 0xA
    ctx->pc = 0x291a0cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x291a10: 0x0  nop
    ctx->pc = 0x291a10u;
    // NOP
    // 0x291a14: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x291A14u;
    {
        const bool branch_taken_0x291a14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x291A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291A14u;
        // 0x291a18: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291a14) {
            ctx->pc = 0x291A00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_291a00;
        }
    }
    ctx->pc = 0x291A1Cu;
    // 0x291a1c: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x291a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x291a20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x291a20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291a24: 0x244770d8  addiu       $a3, $v0, 0x70D8
    ctx->pc = 0x291a24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 28888));
label_291a28:
    // 0x291a28: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x291a28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x291a2c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x291a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x291a30: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x291a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x291a34: 0x28c30006  slti        $v1, $a2, 0x6
    ctx->pc = 0x291a34u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x291a38: 0x0  nop
    ctx->pc = 0x291a38u;
    // NOP
    // 0x291a3c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x291A3Cu;
    {
        const bool branch_taken_0x291a3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x291A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291A3Cu;
        // 0x291a40: 0xac400020  sw          $zero, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291a3c) {
            ctx->pc = 0x291A28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_291a28;
        }
    }
    ctx->pc = 0x291A44u;
    // 0x291a44: 0x250270d0  addiu       $v0, $t0, 0x70D0
    ctx->pc = 0x291a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 28880));
    // 0x291a48: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x291a48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
    // 0x291a4c: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x291a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    // 0x291a50: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x291a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_291a54:
    // 0x291a54: 0x14a20010  bne         $a1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x291A54u;
    {
        const bool branch_taken_0x291a54 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x291A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291A54u;
        // 0x291a58: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291a54) {
            ctx->pc = 0x291A98u;
            goto label_291a98;
        }
    }
    ctx->pc = 0x291A5Cu;
    // 0x291a5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x291a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x291a60: 0x5482000e  bnel        $a0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x291A60u;
    {
        const bool branch_taken_0x291a60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x291a60) {
            ctx->pc = 0x291A64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291A60u;
            // 0x291a64: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291A9Cu;
            goto label_291a9c;
        }
    }
    ctx->pc = 0x291A68u;
    // 0x291a68: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x291a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x291a6c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x291a6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x291a70: 0x24507118  addiu       $s0, $v0, 0x7118
    ctx->pc = 0x291a70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 28952));
    // 0x291a74: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x291a74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x291a78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x291a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291a7c: 0x0  nop
    ctx->pc = 0x291a7cu;
    // NOP
label_291a80:
    // 0x291a80: 0x261000ac  addiu       $s0, $s0, 0xAC
    ctx->pc = 0x291a80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 172));
    // 0x291a84: 0xc0a4414  jal         func_291050
    ctx->pc = 0x291A84u;
    SET_GPR_U32(ctx, 31, 0x291A8Cu);
    ctx->pc = 0x291A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291A84u;
    // 0x291a88: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291050u, 0x291A84u, 0x291A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291A8Cu;
label_291a8c:
    // 0x291a8c: 0x1632fffc  bne         $s1, $s2, . + 4 + (-0x4 << 2)
    ctx->pc = 0x291A8Cu;
    {
        const bool branch_taken_0x291a8c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x291A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291A8Cu;
        // 0x291a90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291a8c) {
            ctx->pc = 0x291A80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_291a80;
        }
    }
    ctx->pc = 0x291A94u;
label_291a94:
    // 0x291a94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x291a94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_291a98:
    // 0x291a98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x291a98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_291a9c:
    // 0x291a9c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x291a9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291aa0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x291aa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x291aa4: 0x3e00008  jr          $ra
    ctx->pc = 0x291AA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291AA4u;
        // 0x291aa8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291AA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x291AACu;
    // 0x291aac: 0x0  nop
    ctx->pc = 0x291aacu;
    // NOP
    ctx->pc = 0x291ab0u;
}
