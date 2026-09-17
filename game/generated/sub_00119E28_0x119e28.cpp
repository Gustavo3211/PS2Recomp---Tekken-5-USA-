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

// Function: sub_00119E28
// Address: 0x119e28 - 0x119ed8
void sub_00119E28_0x119e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00119E28_0x119e28");
#endif

    switch (ctx->pc) {
        case 0x119e90u: goto label_119e90;
        case 0x119eb4u: goto label_119eb4;
        case 0x119ebcu: goto label_119ebc;
        default: break;
    }

    ctx->pc = 0x119e28u;

    // 0x119e28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x119e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x119e2c: 0x41282  srl         $v0, $a0, 10
    ctx->pc = 0x119e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
    // 0x119e30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x119e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x119e34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x119e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x119e38: 0x28180  sll         $s0, $v0, 6
    ctx->pc = 0x119e38u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x119e3c: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x119E3Cu;
    {
        const bool branch_taken_0x119e3c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x119E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119E3Cu;
        // 0x119e40: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119e3c) {
            ctx->pc = 0x119E54u;
            goto label_119e54;
        }
    }
    ctx->pc = 0x119E44u;
    // 0x119e44: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x119e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x119e48: 0x308203ff  andi        $v0, $a0, 0x3FF
    ctx->pc = 0x119e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1023);
    // 0x119e4c: 0x50430004  beql        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x119E4Cu;
    {
        const bool branch_taken_0x119e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x119e4c) {
            ctx->pc = 0x119E50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x119E4Cu;
            // 0x119e50: 0x3c020013  lui         $v0, 0x13 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x119E60u;
            goto label_119e60;
        }
    }
    ctx->pc = 0x119E54u;
label_119e54:
    // 0x119e54: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x119e54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x119e58: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x119E58u;
    {
        const bool branch_taken_0x119e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119E58u;
        // 0x119e5c: 0x34428002  ori         $v0, $v0, 0x8002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
        ctx->in_delay_slot = false;
        if (branch_taken_0x119e58) {
            ctx->pc = 0x119EC0u;
            goto label_119ec0;
        }
    }
    ctx->pc = 0x119E60u;
label_119e60:
    // 0x119e60: 0x24422148  addiu       $v0, $v0, 0x2148
    ctx->pc = 0x119e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8520));
    // 0x119e64: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x119e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x119e68: 0x54640004  bnel        $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x119E68u;
    {
        const bool branch_taken_0x119e68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x119e68) {
            ctx->pc = 0x119E6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x119E68u;
            // 0x119e6c: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x119E7Cu;
            goto label_119e7c;
        }
    }
    ctx->pc = 0x119E70u;
    // 0x119e70: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x119e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x119e74: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x119E74u;
    {
        const bool branch_taken_0x119e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119E74u;
        // 0x119e78: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x119e74) {
            ctx->pc = 0x119EC0u;
            goto label_119ec0;
        }
    }
    ctx->pc = 0x119E7Cu;
label_119e7c:
    // 0x119e7c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x119e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x119e80: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x119E80u;
    {
        const bool branch_taken_0x119e80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x119E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119E80u;
        // 0x119e84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119e80) {
            ctx->pc = 0x119EC0u;
            goto label_119ec0;
        }
    }
    ctx->pc = 0x119E88u;
    // 0x119e88: 0xc0466c0  jal         func_119B00
    ctx->pc = 0x119E88u;
    SET_GPR_U32(ctx, 31, 0x119E90u);
    ctx->pc = 0x119B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119B00u, 0x119E88u, 0x119E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119E90u;
label_119e90:
    // 0x119e90: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x119e90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119e94: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x119e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x119e98: 0xfe110010  sd          $s1, 0x10($s0)
    ctx->pc = 0x119e98u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 17));
    // 0x119e9c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x119e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x119ea0: 0x30430002  andi        $v1, $v0, 0x2
    ctx->pc = 0x119ea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x119ea4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x119EA4u;
    {
        const bool branch_taken_0x119ea4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x119EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119EA4u;
        // 0x119ea8: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119ea4) {
            ctx->pc = 0x119EBCu;
            goto label_119ebc;
        }
    }
    ctx->pc = 0x119EACu;
    // 0x119eac: 0xc0465e6  jal         func_119798
    ctx->pc = 0x119EACu;
    SET_GPR_U32(ctx, 31, 0x119EB4u);
    ctx->pc = 0x119EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119EACu;
    // 0x119eb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119798u, 0x119EACu, 0x119EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119EB4u;
label_119eb4:
    // 0x119eb4: 0xc046582  jal         func_119608
    ctx->pc = 0x119EB4u;
    SET_GPR_U32(ctx, 31, 0x119EBCu);
    ctx->pc = 0x119EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119EB4u;
    // 0x119eb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119608u, 0x119EB4u, 0x119EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119EBCu;
label_119ebc:
    // 0x119ebc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x119ebcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_119ec0:
    // 0x119ec0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x119ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x119ec4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x119ec4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119ec8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x119ec8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119ecc: 0x3e00008  jr          $ra
    ctx->pc = 0x119ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119ECCu;
        // 0x119ed0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119ECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119ED4u;
    // 0x119ed4: 0x0  nop
    ctx->pc = 0x119ed4u;
    // NOP
    ctx->pc = 0x119ed8u;
}
