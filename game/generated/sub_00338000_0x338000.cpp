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

// Function: sub_00338000
// Address: 0x338000 - 0x338098
void sub_00338000_0x338000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00338000_0x338000");
#endif

    switch (ctx->pc) {
        case 0x338068u: goto label_338068;
        case 0x338074u: goto label_338074;
        default: break;
    }

    ctx->pc = 0x338000u;

label_338000:
    // 0x338000: 0x41282  srl         $v0, $a0, 10
    ctx->pc = 0x338000u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
    // 0x338004: 0x308303ff  andi        $v1, $a0, 0x3FF
    ctx->pc = 0x338004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1023);
    // 0x338008: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x338008u;
    {
        const bool branch_taken_0x338008 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x33800Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338008u;
        // 0x33800c: 0x22980  sll         $a1, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338008) {
            ctx->pc = 0x33801Cu;
            goto label_33801c;
        }
    }
    ctx->pc = 0x338010u;
    // 0x338010: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x338010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x338014: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x338014u;
    {
        const bool branch_taken_0x338014 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x338014) {
            ctx->pc = 0x338018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x338014u;
            // 0x338018: 0x8ca2000c  lw          $v0, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x338028u;
            goto label_338028;
        }
    }
    ctx->pc = 0x33801Cu;
label_33801c:
    // 0x33801c: 0x3e00008  jr          $ra
    ctx->pc = 0x33801Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33801Cu;
        // 0x338020: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33801Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338024u;
    // 0x338024: 0x0  nop
    ctx->pc = 0x338024u;
    // NOP
label_338028:
    // 0x338028: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x338028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x33802c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x33802Cu;
    {
        const bool branch_taken_0x33802c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33802c) {
            ctx->pc = 0x338048u;
            goto label_338048;
        }
    }
    ctx->pc = 0x338034u;
    // 0x338034: 0xdca30018  ld          $v1, 0x18($a1)
    ctx->pc = 0x338034u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x338038: 0xdca20010  ld          $v0, 0x10($a1)
    ctx->pc = 0x338038u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x33803c: 0x3e00008  jr          $ra
    ctx->pc = 0x33803Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33803Cu;
        // 0x338040: 0x43102f  dsubu       $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33803Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338044u;
    // 0x338044: 0x0  nop
    ctx->pc = 0x338044u;
    // NOP
label_338048:
    // 0x338048: 0x3e00008  jr          $ra
    ctx->pc = 0x338048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33804Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338048u;
        // 0x33804c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338050u;
    // 0x338050: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x338050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x338054: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x338054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x338058: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x338058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x33805c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x33805cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x338060: 0xc04626a  jal         func_1189A8
    ctx->pc = 0x338060u;
    SET_GPR_U32(ctx, 31, 0x338068u);
    ctx->pc = 0x338064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338060u;
    // 0x338064: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1189A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189A8u, 0x338060u, 0x338068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338068u;
label_338068:
    // 0x338068: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x338068u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33806c: 0xc0ce000  jal         func_338000
    ctx->pc = 0x33806Cu;
    SET_GPR_U32(ctx, 31, 0x338074u);
    ctx->pc = 0x338070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33806Cu;
    // 0x338070: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338000u;
    goto label_338000;
    ctx->pc = 0x338074u;
label_338074:
    // 0x338074: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x338074u;
    {
        const bool branch_taken_0x338074 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x338078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338074u;
        // 0x338078: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338074) {
            ctx->pc = 0x338088u;
            goto label_338088;
        }
    }
    ctx->pc = 0x33807Cu;
    // 0x33807c: 0xf  sync
    ctx->pc = 0x33807cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x338080: 0x42000038  ei
    ctx->pc = 0x338080u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x338084: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x338084u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_338088:
    // 0x338088: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x338088u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33808c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x33808cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x338090: 0x3e00008  jr          $ra
    ctx->pc = 0x338090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338090u;
        // 0x338094: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338098u;
}
