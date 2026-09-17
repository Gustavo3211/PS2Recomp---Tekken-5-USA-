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

// Function: sub_00285898
// Address: 0x285898 - 0x285920
void sub_00285898_0x285898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00285898_0x285898");
#endif

    switch (ctx->pc) {
        case 0x2858d4u: goto label_2858d4;
        default: break;
    }

    ctx->pc = 0x285898u;

    // 0x285898: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x285898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28589c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x28589cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2858a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2858a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2858a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2858a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2858a8: 0x8c45f4f4  lw          $a1, -0xB0C($v0)
    ctx->pc = 0x2858a8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3EF4F4u));
    // 0x2858ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2858acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2858b0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2858b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2858b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2858b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2858b8: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x2858b8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2858bc: 0x14660012  bne         $v1, $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x2858BCu;
    {
        const bool branch_taken_0x2858bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x2858C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2858BCu;
        // 0x2858c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2858bc) {
            ctx->pc = 0x285908u;
            goto label_285908;
        }
    }
    ctx->pc = 0x2858C4u;
    // 0x2858c4: 0x3c10003e  lui         $s0, 0x3E
    ctx->pc = 0x2858c4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)62 << 16));
    // 0x2858c8: 0x26104520  addiu       $s0, $s0, 0x4520
    ctx->pc = 0x2858c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 17696));
    // 0x2858cc: 0xc0bc1a4  jal         func_2F0690
    ctx->pc = 0x2858CCu;
    SET_GPR_U32(ctx, 31, 0x2858D4u);
    ctx->pc = 0x2858D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2858CCu;
    // 0x2858d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0690u, 0x2858CCu, 0x2858D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2858D4u;
label_2858d4:
    // 0x2858d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2858d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2858d8: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x2858d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2858dc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2858DCu;
    {
        const bool branch_taken_0x2858dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2858E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2858DCu;
        // 0x2858e0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2858dc) {
            ctx->pc = 0x285908u;
            goto label_285908;
        }
    }
    ctx->pc = 0x2858E4u;
    // 0x2858e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2858e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2858e8: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x2858e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
    // 0x2858ec: 0xae220050  sw          $v0, 0x50($s1)
    ctx->pc = 0x2858ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
    // 0x2858f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2858f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2858f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2858f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2858f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2858f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2858fc: 0x80a1666  j           func_285998
    ctx->pc = 0x2858FCu;
    ctx->pc = 0x285900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2858FCu;
    // 0x285900: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285998u;
    sub_00285998_0x285998(rdram, ctx, runtime); return;
    ctx->pc = 0x285904u;
    // 0x285904: 0x0  nop
    ctx->pc = 0x285904u;
    // NOP
label_285908:
    // 0x285908: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x285908u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28590c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x28590cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x285910: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x285910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x285914: 0x3e00008  jr          $ra
    ctx->pc = 0x285914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x285918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285914u;
        // 0x285918: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285914u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28591Cu;
    // 0x28591c: 0x0  nop
    ctx->pc = 0x28591cu;
    // NOP
    ctx->pc = 0x285920u;
}
