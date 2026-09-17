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

// Function: sub_00325738
// Address: 0x325738 - 0x3257e8
void sub_00325738_0x325738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00325738_0x325738");
#endif

    ctx->pc = 0x325738u;

    // 0x325738: 0x4a10007  bgez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x325738u;
    {
        const bool branch_taken_0x325738 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x32573Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325738u;
        // 0x32573c: 0xac850064  sw          $a1, 0x64($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325738) {
            ctx->pc = 0x325758u;
            goto label_325758;
        }
    }
    ctx->pc = 0x325740u;
    // 0x325740: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x325740u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x325744: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x325744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x325748: 0x246300a8  addiu       $v1, $v1, 0xA8
    ctx->pc = 0x325748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 168));
    // 0x32574c: 0x3e00008  jr          $ra
    ctx->pc = 0x32574Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x325750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32574Cu;
        // 0x325750: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32574Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325754u;
    // 0x325754: 0x0  nop
    ctx->pc = 0x325754u;
    // NOP
label_325758:
    // 0x325758: 0x2ca20008  sltiu       $v0, $a1, 0x8
    ctx->pc = 0x325758u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x32575c: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x32575Cu;
    {
        const bool branch_taken_0x32575c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32575c) {
            ctx->pc = 0x3257F8u;
            return;
        }
    }
    ctx->pc = 0x325764u;
    // 0x325764: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x325764u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x325768: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x325768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x32576c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x32576cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x325770: 0x8c633100  lw          $v1, 0x3100($v1)
    ctx->pc = 0x325770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12544)));
    // 0x325774: 0x600008  jr          $v1
    ctx->pc = 0x325774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x325780u: goto label_325780;
            case 0x325788u: goto label_325788;
            case 0x325798u: goto label_325798;
            case 0x3257A8u: goto label_3257a8;
            case 0x3257B8u: goto label_3257b8;
            case 0x3257C8u: goto label_3257c8;
            case 0x3257D8u: goto label_3257d8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325774u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x32577Cu;
    // 0x32577c: 0x0  nop
    ctx->pc = 0x32577cu;
    // NOP
label_325780:
    // 0x325780: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x325780u;
    {
        const bool branch_taken_0x325780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325780u;
        // 0x325784: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325780) {
            ctx->pc = 0x325800u;
            return;
        }
    }
    ctx->pc = 0x325788u;
label_325788:
    // 0x325788: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x325788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x32578c: 0x2442f790  addiu       $v0, $v0, -0x870
    ctx->pc = 0x32578cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965136));
    // 0x325790: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x325790u;
    {
        const bool branch_taken_0x325790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325790u;
        // 0x325794: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325790) {
            ctx->pc = 0x325800u;
            return;
        }
    }
    ctx->pc = 0x325798u;
label_325798:
    // 0x325798: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x325798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x32579c: 0x2442f990  addiu       $v0, $v0, -0x670
    ctx->pc = 0x32579cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965648));
    // 0x3257a0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x3257A0u;
    {
        const bool branch_taken_0x3257a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3257A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3257A0u;
        // 0x3257a4: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3257a0) {
            ctx->pc = 0x325800u;
            return;
        }
    }
    ctx->pc = 0x3257A8u;
label_3257a8:
    // 0x3257a8: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x3257a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x3257ac: 0x2442fc48  addiu       $v0, $v0, -0x3B8
    ctx->pc = 0x3257acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966344));
    // 0x3257b0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3257B0u;
    {
        const bool branch_taken_0x3257b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3257B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3257B0u;
        // 0x3257b4: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3257b0) {
            ctx->pc = 0x325800u;
            return;
        }
    }
    ctx->pc = 0x3257B8u;
label_3257b8:
    // 0x3257b8: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x3257b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x3257bc: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x3257bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    // 0x3257c0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3257C0u;
    {
        const bool branch_taken_0x3257c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3257C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3257C0u;
        // 0x3257c4: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3257c0) {
            ctx->pc = 0x325800u;
            return;
        }
    }
    ctx->pc = 0x3257C8u;
label_3257c8:
    // 0x3257c8: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x3257c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x3257cc: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x3257ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x3257d0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3257D0u;
    {
        const bool branch_taken_0x3257d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3257D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3257D0u;
        // 0x3257d4: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3257d0) {
            ctx->pc = 0x325800u;
            return;
        }
    }
    ctx->pc = 0x3257D8u;
label_3257d8:
    // 0x3257d8: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x3257d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x3257dc: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x3257dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x3257e0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3257E0u;
    {
        const bool branch_taken_0x3257e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3257E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3257E0u;
        // 0x3257e4: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3257e0) {
            ctx->pc = 0x325800u;
            return;
        }
    }
    ctx->pc = 0x3257E8u;
}
