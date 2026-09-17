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

// Function: sub_002ED6C0
// Address: 0x2ed6c0 - 0x2ed758
void sub_002ED6C0_0x2ed6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED6C0_0x2ed6c0");
#endif

    switch (ctx->pc) {
        case 0x2ed6e8u: goto label_2ed6e8;
        case 0x2ed6f8u: goto label_2ed6f8;
        case 0x2ed700u: goto label_2ed700;
        case 0x2ed708u: goto label_2ed708;
        case 0x2ed710u: goto label_2ed710;
        case 0x2ed71cu: goto label_2ed71c;
        case 0x2ed740u: goto label_2ed740;
        default: break;
    }

    ctx->pc = 0x2ed6c0u;

    // 0x2ed6c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ed6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ed6c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ed6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ed6c8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ed6c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed6cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ed6ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ed6d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ed6d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ed6d4: 0x8e220060  lw          $v0, 0x60($s1)
    ctx->pc = 0x2ed6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x2ed6d8: 0x4400017  bltz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2ED6D8u;
    {
        const bool branch_taken_0x2ed6d8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2ED6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED6D8u;
        // 0x2ed6dc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed6d8) {
            ctx->pc = 0x2ED738u;
            goto label_2ed738;
        }
    }
    ctx->pc = 0x2ED6E0u;
    // 0x2ed6e0: 0xc0896ca  jal         func_225B28
    ctx->pc = 0x2ED6E0u;
    SET_GPR_U32(ctx, 31, 0x2ED6E8u);
    ctx->pc = 0x225B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225B28u, 0x2ED6E0u, 0x2ED6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED6E8u;
label_2ed6e8:
    // 0x2ed6e8: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x2ed6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x2ed6ec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2ed6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ed6f0: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x2ED6F0u;
    SET_GPR_U32(ctx, 31, 0x2ED6F8u);
    ctx->pc = 0x2ED6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED6F0u;
    // 0x2ed6f4: 0x248437e0  addiu       $a0, $a0, 0x37E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x2ED6F0u, 0x2ED6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED6F8u;
label_2ed6f8:
    // 0x2ed6f8: 0xc085116  jal         func_214458
    ctx->pc = 0x2ED6F8u;
    SET_GPR_U32(ctx, 31, 0x2ED700u);
    ctx->pc = 0x2ED6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED6F8u;
    // 0x2ed6fc: 0xac400050  sw          $zero, 0x50($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214458u, 0x2ED6F8u, 0x2ED700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED700u;
label_2ed700:
    // 0x2ed700: 0xc0898be  jal         func_2262F8
    ctx->pc = 0x2ED700u;
    SET_GPR_U32(ctx, 31, 0x2ED708u);
    ctx->pc = 0x2262F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2262F8u, 0x2ED700u, 0x2ED708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED708u;
label_2ed708:
    // 0x2ed708: 0xc089a00  jal         func_226800
    ctx->pc = 0x2ED708u;
    SET_GPR_U32(ctx, 31, 0x2ED710u);
    ctx->pc = 0x226800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226800u, 0x2ED708u, 0x2ED710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED710u;
label_2ed710:
    // 0x2ed710: 0x8e300060  lw          $s0, 0x60($s1)
    ctx->pc = 0x2ed710u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x2ed714: 0xc0bb59a  jal         func_2ED668
    ctx->pc = 0x2ED714u;
    SET_GPR_U32(ctx, 31, 0x2ED71Cu);
    ctx->pc = 0x2ED718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED714u;
    // 0x2ed718: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED668u, 0x2ED714u, 0x2ED71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED71Cu;
label_2ed71c:
    // 0x2ed71c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ed71cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed720: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ed720u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ed724: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ed724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed728: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ed728u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ed72c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ed72cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ed730: 0x8084cfe  j           func_2133F8
    ctx->pc = 0x2ED730u;
    ctx->pc = 0x2ED734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED730u;
    // 0x2ed734: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2133F8u;
    sub_002133F8_0x2133f8(rdram, ctx, runtime); return;
    ctx->pc = 0x2ED738u;
label_2ed738:
    // 0x2ed738: 0xc07c22a  jal         func_1F08A8
    ctx->pc = 0x2ED738u;
    SET_GPR_U32(ctx, 31, 0x2ED740u);
    ctx->pc = 0x1F08A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F08A8u, 0x2ED738u, 0x2ED740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED740u;
label_2ed740:
    // 0x2ed740: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ed740u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ed744: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ed744u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ed748: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ed748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ed74c: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED74Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED74Cu;
        // 0x2ed750: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED74Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ED754u;
    // 0x2ed754: 0x0  nop
    ctx->pc = 0x2ed754u;
    // NOP
    ctx->pc = 0x2ed758u;
}
