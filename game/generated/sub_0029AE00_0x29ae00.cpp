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

// Function: sub_0029AE00
// Address: 0x29ae00 - 0x29ae60
void sub_0029AE00_0x29ae00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029AE00_0x29ae00");
#endif

    switch (ctx->pc) {
        case 0x29ae50u: goto label_29ae50;
        default: break;
    }

    ctx->pc = 0x29ae00u;

    // 0x29ae00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29ae00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29ae04: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x29ae04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29ae08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29ae08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29ae0c: 0x8c830160  lw          $v1, 0x160($a0)
    ctx->pc = 0x29ae0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x29ae10: 0x54620010  bnel        $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x29AE10u;
    {
        const bool branch_taken_0x29ae10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x29ae10) {
            ctx->pc = 0x29AE14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29AE10u;
            // 0x29ae14: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29AE54u;
            goto label_29ae54;
        }
    }
    ctx->pc = 0x29AE18u;
    // 0x29ae18: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x29ae18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x29ae1c: 0x3c020011  lui         $v0, 0x11
    ctx->pc = 0x29ae1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17 << 16));
    // 0x29ae20: 0x3c0680ff  lui         $a2, 0x80FF
    ctx->pc = 0x29ae20u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33023 << 16));
    // 0x29ae24: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x29ae24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x29ae28: 0x2484c150  addiu       $a0, $a0, -0x3EB0
    ctx->pc = 0x29ae28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951248));
    // 0x29ae2c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x29ae2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29ae30: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x29ae30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x29ae34: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x29ae34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x29ae38: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x29ae38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ae3c: 0x2409006e  addiu       $t1, $zero, 0x6E
    ctx->pc = 0x29ae3cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x29ae40: 0x240a021c  addiu       $t2, $zero, 0x21C
    ctx->pc = 0x29ae40u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 540));
    // 0x29ae44: 0x240b017e  addiu       $t3, $zero, 0x17E
    ctx->pc = 0x29ae44u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 382));
    // 0x29ae48: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x29AE48u;
    SET_GPR_U32(ctx, 31, 0x29AE50u);
    ctx->pc = 0x29AE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AE48u;
    // 0x29ae4c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x29AE48u, 0x29AE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AE50u;
label_29ae50:
    // 0x29ae50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29ae50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29ae54:
    // 0x29ae54: 0x3e00008  jr          $ra
    ctx->pc = 0x29AE54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29AE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AE54u;
        // 0x29ae58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29AE54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29AE5Cu;
    // 0x29ae5c: 0x0  nop
    ctx->pc = 0x29ae5cu;
    // NOP
    ctx->pc = 0x29ae60u;
}
