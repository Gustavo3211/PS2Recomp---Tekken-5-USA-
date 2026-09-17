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

// Function: sub_002CF018
// Address: 0x2cf018 - 0x2cf0a0
void sub_002CF018_0x2cf018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CF018_0x2cf018");
#endif

    switch (ctx->pc) {
        case 0x2cf03cu: goto label_2cf03c;
        case 0x2cf084u: goto label_2cf084;
        case 0x2cf08cu: goto label_2cf08c;
        default: break;
    }

    ctx->pc = 0x2cf018u;

    // 0x2cf018: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2cf018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cf01c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cf01cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cf020: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2cf020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2cf024: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cf024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cf028: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2cf028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2cf02c: 0xac40886c  sw          $zero, -0x7794($v0)
    ctx->pc = 0x2cf02cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3A886Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3A886Cu, _value); } while (0);
    // 0x2cf030: 0xac830088  sw          $v1, 0x88($a0)
    ctx->pc = 0x2cf030u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 3));
    // 0x2cf034: 0xc08661c  jal         func_219870
    ctx->pc = 0x2CF034u;
    SET_GPR_U32(ctx, 31, 0x2CF03Cu);
    ctx->pc = 0x2CF038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF034u;
    // 0x2cf038: 0xac830084  sw          $v1, 0x84($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219870u, 0x2CF034u, 0x2CF03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF03Cu;
label_2cf03c:
    // 0x2cf03c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x2cf03cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x2cf040: 0x2465f484  addiu       $a1, $v1, -0xB7C
    ctx->pc = 0x2cf040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964356));
    // 0x2cf044: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cf044u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf048: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2cf048u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EF488u));
    // 0x2cf04c: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x2cf04cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cf050: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CF050u;
    {
        const bool branch_taken_0x2cf050 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF050u;
        // 0x2cf054: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf050) {
            ctx->pc = 0x2CF070u;
            goto label_2cf070;
        }
    }
    ctx->pc = 0x2CF058u;
    // 0x2cf058: 0x8ca201a0  lw          $v0, 0x1A0($a1)
    ctx->pc = 0x2cf058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 416)));
    // 0x2cf05c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2cf05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cf060: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2cf060u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2cf064: 0x8ca201b0  lw          $v0, 0x1B0($a1)
    ctx->pc = 0x2cf064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 432)));
    // 0x2cf068: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2CF068u;
    {
        const bool branch_taken_0x2cf068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF068u;
        // 0x2cf06c: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf068) {
            ctx->pc = 0x2CF07Cu;
            goto label_2cf07c;
        }
    }
    ctx->pc = 0x2CF070u;
label_2cf070:
    // 0x2cf070: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2cf070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2cf074: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2cf074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2cf078: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2cf078u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2cf07c:
    // 0x2cf07c: 0xc0b2d4c  jal         func_2CB530
    ctx->pc = 0x2CF07Cu;
    SET_GPR_U32(ctx, 31, 0x2CF084u);
    ctx->pc = 0x2CF080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF07Cu;
    // 0x2cf080: 0xae030070  sw          $v1, 0x70($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB530u, 0x2CF07Cu, 0x2CF084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF084u;
label_2cf084:
    // 0x2cf084: 0xc0b2d4c  jal         func_2CB530
    ctx->pc = 0x2CF084u;
    SET_GPR_U32(ctx, 31, 0x2CF08Cu);
    ctx->pc = 0x2CF088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF084u;
    // 0x2cf088: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB530u, 0x2CF084u, 0x2CF08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF08Cu;
label_2cf08c:
    // 0x2cf08c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cf08cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cf090: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2cf090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cf094: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF094u;
        // 0x2cf098: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CF09Cu;
    // 0x2cf09c: 0x0  nop
    ctx->pc = 0x2cf09cu;
    // NOP
    ctx->pc = 0x2cf0a0u;
}
