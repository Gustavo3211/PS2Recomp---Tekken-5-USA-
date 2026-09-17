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

// Function: sub_00104690
// Address: 0x104690 - 0x104708
void sub_00104690_0x104690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104690_0x104690");
#endif

    switch (ctx->pc) {
        case 0x104690u: goto label_104690;
        case 0x104694u: goto label_104694;
        case 0x104698u: goto label_104698;
        case 0x10469cu: goto label_10469c;
        case 0x1046a0u: goto label_1046a0;
        case 0x1046a4u: goto label_1046a4;
        case 0x1046a8u: goto label_1046a8;
        case 0x1046acu: goto label_1046ac;
        case 0x1046b0u: goto label_1046b0;
        case 0x1046b4u: goto label_1046b4;
        case 0x1046b8u: goto label_1046b8;
        case 0x1046bcu: goto label_1046bc;
        case 0x1046c0u: goto label_1046c0;
        case 0x1046c4u: goto label_1046c4;
        case 0x1046c8u: goto label_1046c8;
        case 0x1046ccu: goto label_1046cc;
        case 0x1046d0u: goto label_1046d0;
        case 0x1046d4u: goto label_1046d4;
        case 0x1046d8u: goto label_1046d8;
        case 0x1046dcu: goto label_1046dc;
        case 0x1046e0u: goto label_1046e0;
        case 0x1046e4u: goto label_1046e4;
        case 0x1046e8u: goto label_1046e8;
        case 0x1046ecu: goto label_1046ec;
        case 0x1046f0u: goto label_1046f0;
        case 0x1046f4u: goto label_1046f4;
        case 0x1046f8u: goto label_1046f8;
        case 0x1046fcu: goto label_1046fc;
        case 0x104700u: goto label_104700;
        case 0x104704u: goto label_104704;
        default: break;
    }

    ctx->pc = 0x104690u;

label_104690:
    // 0x104690: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x104690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_104694:
    // 0x104694: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x104694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_104698:
    // 0x104698: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x104698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_10469c:
    // 0x10469c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x10469cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1046a0:
    // 0x1046a0: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
label_1046a4:
    if (ctx->pc == 0x1046A4u) {
        ctx->pc = 0x1046A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1046A0u;
        // 0x1046a4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1046A8u;
        goto label_1046a8;
    }
    ctx->pc = 0x1046A0u;
    {
        const bool branch_taken_0x1046a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1046A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1046A0u;
        // 0x1046a4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1046a0) {
            ctx->pc = 0x1046F0u;
            goto label_1046f0;
        }
    }
    ctx->pc = 0x1046A8u;
label_1046a8:
    // 0x1046a8: 0x8c860040  lw          $a2, 0x40($a0)
    ctx->pc = 0x1046a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_1046ac:
    // 0x1046ac: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
label_1046b0:
    if (ctx->pc == 0x1046B0u) {
        ctx->pc = 0x1046B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1046ACu;
        // 0x1046b0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1046B4u;
        goto label_1046b4;
    }
    ctx->pc = 0x1046ACu;
    {
        const bool branch_taken_0x1046ac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1046B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1046ACu;
        // 0x1046b0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1046ac) {
            ctx->pc = 0x1046F8u;
            goto label_1046f8;
        }
    }
    ctx->pc = 0x1046B4u;
label_1046b4:
    // 0x1046b4: 0x8cc70018  lw          $a3, 0x18($a2)
    ctx->pc = 0x1046b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_1046b8:
    // 0x1046b8: 0x10e00010  beqz        $a3, . + 4 + (0x10 << 2)
label_1046bc:
    if (ctx->pc == 0x1046BCu) {
        ctx->pc = 0x1046BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1046B8u;
        // 0x1046bc: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1046C0u;
        goto label_1046c0;
    }
    ctx->pc = 0x1046B8u;
    {
        const bool branch_taken_0x1046b8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1046BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1046B8u;
        // 0x1046bc: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1046b8) {
            ctx->pc = 0x1046FCu;
            goto label_1046fc;
        }
    }
    ctx->pc = 0x1046C0u;
label_1046c0:
    // 0x1046c0: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x1046c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
label_1046c4:
    // 0x1046c4: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x1046c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_1046c8:
    // 0x1046c8: 0x40e02d  daddu       $gp, $v0, $zero
    ctx->pc = 0x1046c8u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1046cc:
    // 0x1046cc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1046ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1046d0:
    // 0x1046d0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1046d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1046d4:
    // 0x1046d4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1046d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1046d8:
    // 0x1046d8: 0x624018  mult        $t0, $v1, $v0
    ctx->pc = 0x1046d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_1046dc:
    // 0x1046dc: 0x1061821  addu        $v1, $t0, $a2
    ctx->pc = 0x1046dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_1046e0:
    // 0x1046e0: 0xe0f809  jalr        $a3
label_1046e4:
    if (ctx->pc == 0x1046E4u) {
        ctx->pc = 0x1046E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1046E0u;
        // 0x1046e4: 0x8c660010  lw          $a2, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1046E8u;
        goto label_1046e8;
    }
    ctx->pc = 0x1046E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x1046E8u);
        ctx->pc = 0x1046E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1046E0u;
        // 0x1046e4: 0x8c660010  lw          $a2, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1046E0u, 0x1046E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1046E8u;
label_1046e8:
    // 0x1046e8: 0x380182d  daddu       $v1, $gp, $zero
    ctx->pc = 0x1046e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_1046ec:
    // 0x1046ec: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x1046ecu;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1046f0:
    // 0x1046f0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1046f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1046f4:
    // 0x1046f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1046f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1046f8:
    // 0x1046f8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1046f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1046fc:
    // 0x1046fc: 0x3e00008  jr          $ra
label_104700:
    if (ctx->pc == 0x104700u) {
        ctx->pc = 0x104700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1046FCu;
        // 0x104700: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104704u;
        goto label_104704;
    }
    ctx->pc = 0x1046FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1046FCu;
        // 0x104700: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1046FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104704u;
label_104704:
    // 0x104704: 0x0  nop
    ctx->pc = 0x104704u;
    // NOP
    ctx->pc = 0x104708u;
}
