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

// Function: sub_0024B730
// Address: 0x24b730 - 0x24b838
void sub_0024B730_0x24b730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024B730_0x24b730");
#endif

    switch (ctx->pc) {
        case 0x24b758u: goto label_24b758;
        case 0x24b76cu: goto label_24b76c;
        case 0x24b778u: goto label_24b778;
        case 0x24b788u: goto label_24b788;
        case 0x24b790u: goto label_24b790;
        case 0x24b798u: goto label_24b798;
        case 0x24b7a8u: goto label_24b7a8;
        case 0x24b7c0u: goto label_24b7c0;
        case 0x24b7ccu: goto label_24b7cc;
        case 0x24b7d4u: goto label_24b7d4;
        case 0x24b7dcu: goto label_24b7dc;
        case 0x24b7e4u: goto label_24b7e4;
        case 0x24b7ecu: goto label_24b7ec;
        case 0x24b7f4u: goto label_24b7f4;
        case 0x24b7fcu: goto label_24b7fc;
        case 0x24b804u: goto label_24b804;
        case 0x24b810u: goto label_24b810;
        case 0x24b818u: goto label_24b818;
        case 0x24b820u: goto label_24b820;
        default: break;
    }

    ctx->pc = 0x24b730u;

    // 0x24b730: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24b730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24b734: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24b734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b738: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x24b738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b73c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24b73cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24b740: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24b740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24b744: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x24b744u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x24b748: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x24b748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x24b74c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x24b74cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x24b750: 0xc0b7fe0  jal         func_2DFF80
    ctx->pc = 0x24B750u;
    SET_GPR_U32(ctx, 31, 0x24B758u);
    ctx->pc = 0x24B754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B750u;
    // 0x24b754: 0x261023b0  addiu       $s0, $s0, 0x23B0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFF80u, 0x24B750u, 0x24B758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B758u;
label_24b758:
    // 0x24b758: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x24b758u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x24b75c: 0x2611010c  addiu       $s1, $s0, 0x10C
    ctx->pc = 0x24b75cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 268));
    // 0x24b760: 0x24844520  addiu       $a0, $a0, 0x4520
    ctx->pc = 0x24b760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17696));
    // 0x24b764: 0xc0bc1b4  jal         func_2F06D0
    ctx->pc = 0x24B764u;
    SET_GPR_U32(ctx, 31, 0x24B76Cu);
    ctx->pc = 0x24B768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B764u;
    // 0x24b768: 0x261200e4  addiu       $s2, $s0, 0xE4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 228));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F06D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F06D0u, 0x24B764u, 0x24B76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B76Cu;
label_24b76c:
    // 0x24b76c: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x24b76cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x24b770: 0xc0a5e6c  jal         func_2979B0
    ctx->pc = 0x24B770u;
    SET_GPR_U32(ctx, 31, 0x24B778u);
    ctx->pc = 0x24B774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B770u;
    // 0x24b774: 0x2484c450  addiu       $a0, $a0, -0x3BB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2979B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2979B0u, 0x24B770u, 0x24B778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B778u;
label_24b778:
    // 0x24b778: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24b778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24b77c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x24b77cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x24b780: 0xc0a612c  jal         func_2984B0
    ctx->pc = 0x24B780u;
    SET_GPR_U32(ctx, 31, 0x24B788u);
    ctx->pc = 0x24B784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B780u;
    // 0x24b784: 0xac43887c  sw          $v1, -0x7784($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294936700), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2984B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2984B0u, 0x24B780u, 0x24B788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B788u;
label_24b788:
    // 0x24b788: 0xc07e214  jal         func_1F8850
    ctx->pc = 0x24B788u;
    SET_GPR_U32(ctx, 31, 0x24B790u);
    ctx->pc = 0x1F8850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8850u, 0x24B788u, 0x24B790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B790u;
label_24b790:
    // 0x24b790: 0xc093700  jal         func_24DC00
    ctx->pc = 0x24B790u;
    SET_GPR_U32(ctx, 31, 0x24B798u);
    ctx->pc = 0x24DC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DC00u, 0x24B790u, 0x24B798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B798u;
label_24b798:
    // 0x24b798: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24b798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b79c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24b79cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b7a0: 0xc097f3e  jal         func_25FCF8
    ctx->pc = 0x24B7A0u;
    SET_GPR_U32(ctx, 31, 0x24B7A8u);
    ctx->pc = 0x24B7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B7A0u;
    // 0x24b7a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FCF8u, 0x24B7A0u, 0x24B7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B7A8u;
label_24b7a8:
    // 0x24b7a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24b7a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b7ac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x24b7acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24b7b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x24b7b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b7b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x24b7b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b7b8: 0xc097fac  jal         func_25FEB0
    ctx->pc = 0x24B7B8u;
    SET_GPR_U32(ctx, 31, 0x24B7C0u);
    ctx->pc = 0x24B7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B7B8u;
    // 0x24b7bc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FEB0u, 0x24B7B8u, 0x24B7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B7C0u;
label_24b7c0:
    // 0x24b7c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24b7c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b7c4: 0xc09833c  jal         func_260CF0
    ctx->pc = 0x24B7C4u;
    SET_GPR_U32(ctx, 31, 0x24B7CCu);
    ctx->pc = 0x24B7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B7C4u;
    // 0x24b7c8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260CF0u, 0x24B7C4u, 0x24B7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B7CCu;
label_24b7cc:
    // 0x24b7cc: 0xc082fd0  jal         func_20BF40
    ctx->pc = 0x24B7CCu;
    SET_GPR_U32(ctx, 31, 0x24B7D4u);
    ctx->pc = 0x20BF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20BF40u, 0x24B7CCu, 0x24B7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B7D4u;
label_24b7d4:
    // 0x24b7d4: 0xc09da36  jal         func_2768D8
    ctx->pc = 0x24B7D4u;
    SET_GPR_U32(ctx, 31, 0x24B7DCu);
    ctx->pc = 0x2768D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2768D8u, 0x24B7D4u, 0x24B7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B7DCu;
label_24b7dc:
    // 0x24b7dc: 0xc09d9b6  jal         func_2766D8
    ctx->pc = 0x24B7DCu;
    SET_GPR_U32(ctx, 31, 0x24B7E4u);
    ctx->pc = 0x2766D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2766D8u, 0x24B7DCu, 0x24B7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B7E4u;
label_24b7e4:
    // 0x24b7e4: 0xc0a0b1e  jal         func_282C78
    ctx->pc = 0x24B7E4u;
    SET_GPR_U32(ctx, 31, 0x24B7ECu);
    ctx->pc = 0x282C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282C78u, 0x24B7E4u, 0x24B7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B7ECu;
label_24b7ec:
    // 0x24b7ec: 0xc0a0f6a  jal         func_283DA8
    ctx->pc = 0x24B7ECu;
    SET_GPR_U32(ctx, 31, 0x24B7F4u);
    ctx->pc = 0x283DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283DA8u, 0x24B7ECu, 0x24B7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B7F4u;
label_24b7f4:
    // 0x24b7f4: 0xc040494  jal         func_101250
    ctx->pc = 0x24B7F4u;
    SET_GPR_U32(ctx, 31, 0x24B7FCu);
    ctx->pc = 0x101250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101250u, 0x24B7F4u, 0x24B7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B7FCu;
label_24b7fc:
    // 0x24b7fc: 0xc0b476e  jal         func_2D1DB8
    ctx->pc = 0x24B7FCu;
    SET_GPR_U32(ctx, 31, 0x24B804u);
    ctx->pc = 0x2D1DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1DB8u, 0x24B7FCu, 0x24B804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B804u;
label_24b804:
    // 0x24b804: 0x2784c170  addiu       $a0, $gp, -0x3E90
    ctx->pc = 0x24b804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x24b808: 0xc0b73a2  jal         func_2DCE88
    ctx->pc = 0x24B808u;
    SET_GPR_U32(ctx, 31, 0x24B810u);
    ctx->pc = 0x2DCE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DCE88u, 0x24B808u, 0x24B810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B810u;
label_24b810:
    // 0x24b810: 0xc0b7014  jal         func_2DC050
    ctx->pc = 0x24B810u;
    SET_GPR_U32(ctx, 31, 0x24B818u);
    ctx->pc = 0x24B814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B810u;
    // 0x24b814: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC050u, 0x24B810u, 0x24B818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B818u;
label_24b818:
    // 0x24b818: 0xc0b7014  jal         func_2DC050
    ctx->pc = 0x24B818u;
    SET_GPR_U32(ctx, 31, 0x24B820u);
    ctx->pc = 0x24B81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B818u;
    // 0x24b81c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC050u, 0x24B818u, 0x24B820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B820u;
label_24b820:
    // 0x24b820: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24b820u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24b824: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24b824u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24b828: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x24b828u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24b82c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x24b82cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24b830: 0x3e00008  jr          $ra
    ctx->pc = 0x24B830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24B834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B830u;
        // 0x24b834: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24B838u;
}
