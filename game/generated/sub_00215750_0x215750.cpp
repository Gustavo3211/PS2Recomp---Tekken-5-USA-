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

// Function: sub_00215750
// Address: 0x215750 - 0x2157f8
void sub_00215750_0x215750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00215750_0x215750");
#endif

    switch (ctx->pc) {
        case 0x215770u: goto label_215770;
        case 0x21577cu: goto label_21577c;
        case 0x215790u: goto label_215790;
        case 0x21579cu: goto label_21579c;
        case 0x2157acu: goto label_2157ac;
        case 0x2157b8u: goto label_2157b8;
        case 0x2157c4u: goto label_2157c4;
        case 0x2157e0u: goto label_2157e0;
        default: break;
    }

    ctx->pc = 0x215750u;

    // 0x215750: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x215750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x215754: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x215754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x215758: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x215758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21575c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21575cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x215760: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x215760u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215764: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x215764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x215768: 0xc086644  jal         func_219910
    ctx->pc = 0x215768u;
    SET_GPR_U32(ctx, 31, 0x215770u);
    ctx->pc = 0x21576Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215768u;
    // 0x21576c: 0x9244002e  lbu         $a0, 0x2E($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 46)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219910u, 0x215768u, 0x215770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215770u;
label_215770:
    // 0x215770: 0x9244002d  lbu         $a0, 0x2D($s2)
    ctx->pc = 0x215770u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 45)));
    // 0x215774: 0xc086644  jal         func_219910
    ctx->pc = 0x215774u;
    SET_GPR_U32(ctx, 31, 0x21577Cu);
    ctx->pc = 0x215778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215774u;
    // 0x215778: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219910u, 0x215774u, 0x21577Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21577Cu;
label_21577c:
    // 0x21577c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x21577cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215780: 0x16300010  bne         $s1, $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x215780u;
    {
        const bool branch_taken_0x215780 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x215784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215780u;
        // 0x215784: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215780) {
            ctx->pc = 0x2157C4u;
            goto label_2157c4;
        }
    }
    ctx->pc = 0x215788u;
    // 0x215788: 0xc0863b2  jal         func_218EC8
    ctx->pc = 0x215788u;
    SET_GPR_U32(ctx, 31, 0x215790u);
    ctx->pc = 0x218EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218EC8u, 0x215788u, 0x215790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215790u;
label_215790:
    // 0x215790: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x215790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215794: 0xc0863a4  jal         func_218E90
    ctx->pc = 0x215794u;
    SET_GPR_U32(ctx, 31, 0x21579Cu);
    ctx->pc = 0x215798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215794u;
    // 0x215798: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218E90u, 0x215794u, 0x21579Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21579Cu;
label_21579c:
    // 0x21579c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x21579cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2157a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2157a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2157a4: 0xc0865a8  jal         func_2196A0
    ctx->pc = 0x2157A4u;
    SET_GPR_U32(ctx, 31, 0x2157ACu);
    ctx->pc = 0x2157A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2157A4u;
    // 0x2157a8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2196A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2196A0u, 0x2157A4u, 0x2157ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2157ACu;
label_2157ac:
    // 0x2157ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2157acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2157b0: 0xc086396  jal         func_218E58
    ctx->pc = 0x2157B0u;
    SET_GPR_U32(ctx, 31, 0x2157B8u);
    ctx->pc = 0x2157B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2157B0u;
    // 0x2157b4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218E58u, 0x2157B0u, 0x2157B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2157B8u;
label_2157b8:
    // 0x2157b8: 0x9244002e  lbu         $a0, 0x2E($s2)
    ctx->pc = 0x2157b8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 46)));
    // 0x2157bc: 0xc08664a  jal         func_219928
    ctx->pc = 0x2157BCu;
    SET_GPR_U32(ctx, 31, 0x2157C4u);
    ctx->pc = 0x2157C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2157BCu;
    // 0x2157c0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219928u, 0x2157BCu, 0x2157C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2157C4u;
label_2157c4:
    // 0x2157c4: 0x9242002e  lbu         $v0, 0x2E($s2)
    ctx->pc = 0x2157c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 46)));
    // 0x2157c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2157c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2157cc: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2157ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x2157d0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2157d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2157d4: 0x8c8488d0  lw          $a0, -0x7730($a0)
    ctx->pc = 0x2157d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294936784)));
    // 0x2157d8: 0xc08f108  jal         func_23C420
    ctx->pc = 0x2157D8u;
    SET_GPR_U32(ctx, 31, 0x2157E0u);
    ctx->pc = 0x23C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C420u, 0x2157D8u, 0x2157E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2157E0u;
label_2157e0:
    // 0x2157e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2157e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2157e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2157e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2157e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2157e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2157ec: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2157ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2157f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2157F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2157F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2157F0u;
        // 0x2157f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2157F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2157F8u;
}
