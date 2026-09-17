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

// Function: sub_002390E0
// Address: 0x2390e0 - 0x239178
void sub_002390E0_0x2390e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002390E0_0x2390e0");
#endif

    switch (ctx->pc) {
        case 0x239120u: goto label_239120;
        case 0x23912cu: goto label_23912c;
        case 0x239140u: goto label_239140;
        case 0x239164u: goto label_239164;
        default: break;
    }

    ctx->pc = 0x2390e0u;

    // 0x2390e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2390e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2390e4: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2390e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2390e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2390e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2390ec: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x2390ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2390f0: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x2390f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x2390f4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2390f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2390f8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2390f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2390fc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2390fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x239100: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x239100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239104: 0x3c010016  lui         $at, 0x16
    ctx->pc = 0x239104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)22 << 16));
    // 0x239108: 0x2421d3a0  addiu       $at, $at, -0x2C60
    ctx->pc = 0x239108u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294955936));
    // 0x23910c: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x23910cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x239110: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x239110u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239114: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x239114u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x239118: 0xc08e41c  jal         func_239070
    ctx->pc = 0x239118u;
    SET_GPR_U32(ctx, 31, 0x239120u);
    ctx->pc = 0x23911Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239118u;
    // 0x23911c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239070u, 0x239118u, 0x239120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239120u;
label_239120:
    // 0x239120: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x239120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239124: 0xc08e41c  jal         func_239070
    ctx->pc = 0x239124u;
    SET_GPR_U32(ctx, 31, 0x23912Cu);
    ctx->pc = 0x239128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239124u;
    // 0x239128: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239070u, 0x239124u, 0x23912Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23912Cu;
label_23912c:
    // 0x23912c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23912cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239130: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x239130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239134: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x239134u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x239138: 0xc094dcc  jal         func_253730
    ctx->pc = 0x239138u;
    SET_GPR_U32(ctx, 31, 0x239140u);
    ctx->pc = 0x23913Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239138u;
    // 0x23913c: 0x108080  sll         $s0, $s0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253730u, 0x239138u, 0x239140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239140u;
label_239140:
    // 0x239140: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x239140u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x239144: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x239144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x239148: 0x8c8488d0  lw          $a0, -0x7730($a0)
    ctx->pc = 0x239148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294936784)));
    // 0x23914c: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x23914cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x239150: 0x84820040  lh          $v0, 0x40($a0)
    ctx->pc = 0x239150u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x239154: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x239154u;
    {
        const bool branch_taken_0x239154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x239158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239154u;
        // 0x239158: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239154) {
            ctx->pc = 0x239164u;
            goto label_239164;
        }
    }
    ctx->pc = 0x23915Cu;
    // 0x23915c: 0xc092a16  jal         func_24A858
    ctx->pc = 0x23915Cu;
    SET_GPR_U32(ctx, 31, 0x239164u);
    ctx->pc = 0x24A858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A858u, 0x23915Cu, 0x239164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239164u;
label_239164:
    // 0x239164: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x239164u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x239168: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x239168u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23916c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x23916cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x239170: 0x3e00008  jr          $ra
    ctx->pc = 0x239170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239170u;
        // 0x239174: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x239178u;
}
