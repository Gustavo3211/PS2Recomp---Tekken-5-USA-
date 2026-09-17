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

// Function: sub_004B7730
// Address: 0x4b7730 - 0x4b7810
void sub_004B7730_0x4b7730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B7730_0x4b7730");
#endif

    switch (ctx->pc) {
        case 0x4b77c8u: goto label_4b77c8;
        case 0x4b77dcu: goto label_4b77dc;
        case 0x4b77e4u: goto label_4b77e4;
        case 0x4b77ecu: goto label_4b77ec;
        case 0x4b77f4u: goto label_4b77f4;
        case 0x4b77fcu: goto label_4b77fc;
        default: break;
    }

    ctx->pc = 0x4b7730u;

label_4b7730:
    // 0x4b7730: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4b7730u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4b7734: 0x84830008  lh          $v1, 0x8($a0)
    ctx->pc = 0x4b7734u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4b7738: 0x24a50d6c  addiu       $a1, $a1, 0xD6C
    ctx->pc = 0x4b7738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3436));
    // 0x4b773c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4b773cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4b7740: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4b7740u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0D6Cu));
    // 0x4b7744: 0x2463ffea  addiu       $v1, $v1, -0x16
    ctx->pc = 0x4b7744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967274));
    // 0x4b7748: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4b7748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4b774c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4b774cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b7750: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b7750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b7754: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4b7754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4b7758: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4b7758u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4b775c: 0x84a40000  lh          $a0, 0x0($a1)
    ctx->pc = 0x4b775cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4b7760: 0x10860011  beq         $a0, $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x4B7760u;
    {
        const bool branch_taken_0x4b7760 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        ctx->pc = 0x4B7764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7760u;
        // 0x4b7764: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7760) {
            ctx->pc = 0x4B77A8u;
            goto label_4b77a8;
        }
    }
    ctx->pc = 0x4B7768u;
    // 0x4b7768: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B7768u;
    {
        const bool branch_taken_0x4b7768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b7768) {
            ctx->pc = 0x4B776Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B7768u;
            // 0x4b776c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B7780u;
            goto label_4b7780;
        }
    }
    ctx->pc = 0x4B7770u;
    // 0x4b7770: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x4B7770u;
    {
        const bool branch_taken_0x4b7770 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b7770) {
            ctx->pc = 0x4B7774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B7770u;
            // 0x4b7774: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B7790u;
            goto label_4b7790;
        }
    }
    ctx->pc = 0x4B7778u;
    // 0x4b7778: 0x3e00008  jr          $ra
    ctx->pc = 0x4B7778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B7778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B7780u;
label_4b7780:
    // 0x4b7780: 0x5082000a  beql        $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4B7780u;
    {
        const bool branch_taken_0x4b7780 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x4b7780) {
            ctx->pc = 0x4B7784u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B7780u;
            // 0x4b7784: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B77ACu;
            goto label_4b77ac;
        }
    }
    ctx->pc = 0x4B7788u;
    // 0x4b7788: 0x3e00008  jr          $ra
    ctx->pc = 0x4B7788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B7788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B7790u;
label_4b7790:
    // 0x4b7790: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4b7790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4b7794: 0x2442d680  addiu       $v0, $v0, -0x2980
    ctx->pc = 0x4b7794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x4b7798: 0xa44323c4  sh          $v1, 0x23C4($v0)
    ctx->pc = 0x4b7798u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 9156), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b779c: 0xa440232c  sh          $zero, 0x232C($v0)
    ctx->pc = 0x4b779cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 9004), (uint16_t)GPR_U32(ctx, 0));
    // 0x4b77a0: 0x3e00008  jr          $ra
    ctx->pc = 0x4B77A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B77A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B77A0u;
        // 0x4b77a4: 0xa440232e  sh          $zero, 0x232E($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 9006), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B77A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B77A8u;
label_4b77a8:
    // 0x4b77a8: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4b77a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_4b77ac:
    // 0x4b77ac: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4b77acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4b77b0: 0x2442d680  addiu       $v0, $v0, -0x2980
    ctx->pc = 0x4b77b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x4b77b4: 0xa44323c4  sh          $v1, 0x23C4($v0)
    ctx->pc = 0x4b77b4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 9156), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b77b8: 0xa444232e  sh          $a0, 0x232E($v0)
    ctx->pc = 0x4b77b8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 9006), (uint16_t)GPR_U32(ctx, 4));
    // 0x4b77bc: 0x3e00008  jr          $ra
    ctx->pc = 0x4B77BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B77C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B77BCu;
        // 0x4b77c0: 0xa440232c  sh          $zero, 0x232C($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 9004), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B77BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B77C4u;
    // 0x4b77c4: 0x0  nop
    ctx->pc = 0x4b77c4u;
    // NOP
label_4b77c8:
    // 0x4b77c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b77c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b77cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b77ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b77d0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4b77d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4b77d4: 0xc12ddcc  jal         func_4B7730
    ctx->pc = 0x4B77D4u;
    SET_GPR_U32(ctx, 31, 0x4B77DCu);
    ctx->pc = 0x4B77D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B77D4u;
    // 0x4b77d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B7730u;
    goto label_4b7730;
    ctx->pc = 0x4B77DCu;
label_4b77dc:
    // 0x4b77dc: 0xc12dce0  jal         func_4B7380
    ctx->pc = 0x4B77DCu;
    SET_GPR_U32(ctx, 31, 0x4B77E4u);
    ctx->pc = 0x4B77E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B77DCu;
    // 0x4b77e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B7380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B7380u, 0x4B77DCu, 0x4B77E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B77E4u;
label_4b77e4:
    // 0x4b77e4: 0xc13d772  jal         func_4F5DC8
    ctx->pc = 0x4B77E4u;
    SET_GPR_U32(ctx, 31, 0x4B77ECu);
    ctx->pc = 0x4B77E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B77E4u;
    // 0x4b77e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5DC8u, 0x4B77E4u, 0x4B77ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B77ECu;
label_4b77ec:
    // 0x4b77ec: 0xc122efc  jal         func_48BBF0
    ctx->pc = 0x4B77ECu;
    SET_GPR_U32(ctx, 31, 0x4B77F4u);
    ctx->pc = 0x4B77F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B77ECu;
    // 0x4b77f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48BBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BBF0u, 0x4B77ECu, 0x4B77F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B77F4u;
label_4b77f4:
    // 0x4b77f4: 0xc1297fa  jal         func_4A5FE8
    ctx->pc = 0x4B77F4u;
    SET_GPR_U32(ctx, 31, 0x4B77FCu);
    ctx->pc = 0x4A5FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FE8u, 0x4B77F4u, 0x4B77FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B77FCu;
label_4b77fc:
    // 0x4b77fc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4b77fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4b7800: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b7800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b7804: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b7804u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b7808: 0x812b62c  j           func_4AD8B0
    ctx->pc = 0x4B7808u;
    ctx->pc = 0x4B780Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B7808u;
    // 0x4b780c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    sub_004AD8B0_0x4ad8b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4B7810u;
}
