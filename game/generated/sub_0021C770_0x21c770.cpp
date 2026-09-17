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

// Function: sub_0021C770
// Address: 0x21c770 - 0x21c7f0
void sub_0021C770_0x21c770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021C770_0x21c770");
#endif

    switch (ctx->pc) {
        case 0x21c78cu: goto label_21c78c;
        case 0x21c798u: goto label_21c798;
        case 0x21c7acu: goto label_21c7ac;
        case 0x21c7bcu: goto label_21c7bc;
        case 0x21c7c4u: goto label_21c7c4;
        case 0x21c7d0u: goto label_21c7d0;
        default: break;
    }

    ctx->pc = 0x21c770u;

    // 0x21c770: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21c770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21c774: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21c774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21c778: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21c778u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c77c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21c77cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21c780: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21c780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21c784: 0xc086644  jal         func_219910
    ctx->pc = 0x21C784u;
    SET_GPR_U32(ctx, 31, 0x21C78Cu);
    ctx->pc = 0x21C788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C784u;
    // 0x21c788: 0x9204002d  lbu         $a0, 0x2D($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 45)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219910u, 0x21C784u, 0x21C78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C78Cu;
label_21c78c:
    // 0x21c78c: 0x8e0400e4  lw          $a0, 0xE4($s0)
    ctx->pc = 0x21c78cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x21c790: 0xc087fca  jal         func_21FF28
    ctx->pc = 0x21C790u;
    SET_GPR_U32(ctx, 31, 0x21C798u);
    ctx->pc = 0x21C794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C790u;
    // 0x21c794: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FF28u, 0x21C790u, 0x21C798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C798u;
label_21c798:
    // 0x21c798: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21c798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c79c: 0x8e060038  lw          $a2, 0x38($s0)
    ctx->pc = 0x21c79cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x21c7a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21c7a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c7a4: 0xc086c38  jal         func_21B0E0
    ctx->pc = 0x21C7A4u;
    SET_GPR_U32(ctx, 31, 0x21C7ACu);
    ctx->pc = 0x21C7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C7A4u;
    // 0x21c7a8: 0xae0200e0  sw          $v0, 0xE0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21B0E0u, 0x21C7A4u, 0x21C7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C7ACu;
label_21c7ac:
    // 0x21c7ac: 0x9211002e  lbu         $s1, 0x2E($s0)
    ctx->pc = 0x21c7acu;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 46)));
    // 0x21c7b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x21c7b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c7b4: 0xc08664a  jal         func_219928
    ctx->pc = 0x21C7B4u;
    SET_GPR_U32(ctx, 31, 0x21C7BCu);
    ctx->pc = 0x21C7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C7B4u;
    // 0x21c7b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219928u, 0x21C7B4u, 0x21C7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C7BCu;
label_21c7bc:
    // 0x21c7bc: 0xc07c2dc  jal         func_1F0B70
    ctx->pc = 0x21C7BCu;
    SET_GPR_U32(ctx, 31, 0x21C7C4u);
    ctx->pc = 0x21C7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C7BCu;
    // 0x21c7c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0B70u, 0x21C7BCu, 0x21C7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C7C4u;
label_21c7c4:
    // 0x21c7c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21c7c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c7c8: 0xc086b4c  jal         func_21AD30
    ctx->pc = 0x21C7C8u;
    SET_GPR_U32(ctx, 31, 0x21C7D0u);
    ctx->pc = 0x21C7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C7C8u;
    // 0x21c7cc: 0x8c850038  lw          $a1, 0x38($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21AD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AD30u, 0x21C7C8u, 0x21C7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C7D0u;
label_21c7d0:
    // 0x21c7d0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x21c7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x21c7d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21c7d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c7d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21c7d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21c7dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21c7dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21c7e0: 0xac628880  sw          $v0, -0x7780($v1)
    ctx->pc = 0x21c7e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3A8880u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3A8880u, _value); } while (0);
    // 0x21c7e4: 0x3e00008  jr          $ra
    ctx->pc = 0x21C7E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C7E4u;
        // 0x21c7e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C7E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C7ECu;
    // 0x21c7ec: 0x0  nop
    ctx->pc = 0x21c7ecu;
    // NOP
    ctx->pc = 0x21c7f0u;
}
